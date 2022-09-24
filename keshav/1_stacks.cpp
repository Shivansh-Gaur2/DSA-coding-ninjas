#include <iostream>
#include <climits>
using namespace std; 

class StackUsingArray{
    int *data ; 
    int nextIndex ; 
    int capacity ;

    public:
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0 ; 
        capacity = 0 ; 
    }   

    // return number of elements present in stack 
    int size(){
        return nextIndex ; 
    }

    // 
    bool isEmpty(){
       /*
        if(nextIndex == 0 ){
            return true ; 
        }
        else{
            return false ; 
        }
        */

        return nextIndex == 0 ; 

    }

    // insert 
    void push(int element){
        if(nextIndex == capacity){
            cout << "stack full" << endl ; 
        }
    data[nextIndex] = element; 
            nextIndex++;  
    }

    // delete element
    int pop(){
        if(isEmpty()){
            cout << "stack is empty"<< endl ; 
            return INT_MIN; 
        }
        nextIndex--; 
        return data[nextIndex];

    }

    //
    int top(){
        if(isEmpty()){
            cout << "stack is empty";
            return INT_MIN; 
            }

            return data[nextIndex - 1];
    }
};

int main(){
    StackUsingArray s(4); 
    s.push(10);   
    s.push(10);
    s.push(10);
    s.push(10);    
    s.push(10);

    cout << s.top() << endl; 
    
    cout << s.pop() << endl ; 
    cout << s.pop() << endl ; 
    cout << s.pop() << endl ; 

    cout << s.size() << endl; 

    cout << s.isEmpty() << endl; 


}