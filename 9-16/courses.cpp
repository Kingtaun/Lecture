#include <iostream>


using namespace std;

class Instructor{

    private:

        string name;

    public:

        Instructor(string n){
            name = n;
        }
        ~Instructor(){
            cout << "The destructor for the Instructor " << name << " ran!" << endl;
        };
};

class Student {

    private:

        int studentID;
        string name;

    public:

        Student(int sID, string n) {
            studentID = sID;
            name = n;
        }
};

class CourseGrade {

    private:

        int sutdentID;
        int courseID;
        double grade;

    public:
};
class Course {

    private: // how it works; what data it has

        int courseNumber;
        string name;
        const int capacity = 30;

        Instructor instructor; 
        //Student students[30]; // <-- composition ("has a" relationship)

    public: // how other programs interact with it

        Course(int courseNum, string n, string InstructorName): instructor(InstructorName) { // have to initilize all objects before the body of this constructor
            courseNumber = courseNum;
            name = n;
        }
};

int main(){

    cout << "hi" << endl;
    Instructor nick("Nick");
    Student student(1123, "steve");

    cout << "Nearing the end of main.." << endl;

    return 0;
}