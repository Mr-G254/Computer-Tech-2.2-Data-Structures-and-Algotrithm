#include <iostream>
#include <string>

using namespace std;

struct Course{
    string course_code;
    string course_name;
};

struct Grade{
    private:
    int mark;
    char the_grade;

    public:
    void Add_and_calculate_grades(int marks);
};

void Grade::Add_and_calculate_grades(int given_marks){
    if(mark == NULL && given_marks >= 0 && given_marks <=100){
        mark = given_marks;

        if(given_marks > 69){
            the_grade = 'A';
        }else if(given_marks > 59){
            the_grade = 'B';
        }else if(given_marks > 49){
            the_grade = 'C';
        }else if(given_marks > 39){
            the_grade = 'D';
        }else{
            the_grade = 'E';
        }
    }
}

struct Student{
    string registration_number;
    string name;
    int age;
    Course course;
    Grade grades;
    void Edit_student_details(string reg_no,string name,int age,Course course,Grade grade);
};

void Student::Edit_student_details(string reg_no,string name,int age,Course course,Grade grade){
    if (reg_no.length() <= 20 && name.length() <= 50){
        registration_number = reg_no;
        name = name;
        age = age;
        course = course;
        grade = grade;
    }else{
        cout<<"Invalid values! Ensure the registration number is at most 20 characters and name is at most 50 characters.";
    }
}

int main(){
    Student stud_array[40];

    int student_no;
    cout<<"How many students do you want to add : ";
    cin>>student_no;
    cout<<"\n";

    for(int i=0;i<student_no;i++){
        string reg;
        string name;
        int age;
        string course_code;
        string course_name;
        int score;

        cout<<"Student registration number : ";
        cin>>reg;
        cout<<"Student name                : ";
        cin>>name;
        cout<<"Student age                 : ";
        cin>>age;
        cout<<"Student course code         : ";
        cin>>course_code;
        cout<<"Student course name         : ";
        cin>>course_name;
        cout<<"Student grade score         : ";
        cin>>score;

        cout<<"\n";
        cout<<"\n";

        Course course;
        course.course_code = course_code;
        course.course_name = course_name;

        Grade grade;
        grade.Add_and_calculate_grades(score);

        Student student;
        student.Edit_student_details(reg,name,age,course,grade);

        stud_array[i] = student;
    }


    return 0;
}
