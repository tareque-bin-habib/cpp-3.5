#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    int marks;
    char section;

    Student(int r, int s, int c, int m, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        marks = m;
        strcpy(name, n);
    }
};

int main()
{
    Student student1(25, 'A', 9, 55, "Tareque");
    Student student2(89, 'B', 9, 79, "Karim Ullah");
    Student student3(5, 'B', 9, 66, "Habib Bin");

    Student highestMarksStudent = student1;

    if (student2.marks > highestMarksStudent.marks)
        highestMarksStudent = student2;
    if (student3.marks > highestMarksStudent.marks)
        highestMarksStudent = student3;

    cout << highestMarksStudent.name << endl;
    return 0;
}