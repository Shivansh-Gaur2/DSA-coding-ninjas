class Student{
    int age;
    char *name;

    public:
    student(int age, char *name){
        this -> age =  age;
        //Shallow copy
        // this -> name = name;

        // Deep copy
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name, name);
    }

    void display(){
        cout << name << " "<< age<< endl;
    }
}

int main(){
    char name[] = "abcd"
    Student s1(20,name);
    s1.display();

    name[3] = 'e'
    Student s2(24, name);
    s2.display()
    // Name of s1 also changed
    //Deep copy wont change s1 name
    s1.display() 
}