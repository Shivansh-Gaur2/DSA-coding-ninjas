class Student{
    public:
    int int rollNumber;
    int age;

    static int totalStudents; // total number of students present

};

int Student :: totalStudents = 0; //initialize static properties

int main(){
    Student s1;

    cout<< s1.rollNumber << " "<< s1.age<< endl;
}