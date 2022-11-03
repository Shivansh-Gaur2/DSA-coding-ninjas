#include <iostream>
#include <climits>
using namespace std;

class StacksUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    StacksUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void push(int value)
    {
        if (nextIndex == capacity)
        {
            // cout << "Stack overflow" << endl;
            // return;

            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = value;
        nextIndex++;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty " << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};

int main()
{
    StacksUsingArray s(10);
    s.push(10);
    cout << s.top() << endl;
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout << s.top() << endl;
    s.push(50);
    s.push(60);
    cout << s.top() << endl;
    cout << s.size() << endl;
}