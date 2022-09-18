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
    //Copy constructor
    Student(Student const &s){
        this -> age = s.int age;
        this -> name = new char[strlen(s.name)+1];
        strcpy(this -> name, s.name);//Deep copy
    }

    void display(){
        cout << name << " "<< age<< endl;
    }
}

int main(){
    char name[] = "abcd"
    Student s1(20,name);
    s1.display();
    // student s3(s1) shallow copy

    name[3] = 'e'
    Student s2(24, name);
    s2.display()
    // Name of s1 also changed
    //Deep copy wont change s1 name
    s1.display() 
}