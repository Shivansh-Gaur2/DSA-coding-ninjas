#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    private:
    int age;

    public:
    // DEFAULT CONSTRUCTOR
    Student(){
        cout<<"constructor called"<<endl;
    }

    Student(int r){
        cout <<"constructor 2 called" << endl;
        rollNumber = r;

    }

    Student(int a, int r){
        cout<< "constructor 3 called" <<endl;
        age = a;
        rollNumber = r;
    }

    void display(){
        cout << age << " "<< rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a, int password){
        if(password != 123){
            return;
        }
        if(a<0){
            return;
        }
        age = a;
    }
};

int main(){
    Student s1;
    s1.display();

    Student s2;
    Student *s3 = new Student;
    s3 -> display();

    cout<<"parametrized constructors demo"<< endl;
    Student s4(10);
    s4.display();

    Student *s5 = new Student(101);
    s5 -> display();

    Student s6(20, 1002);
    s6.display();
}