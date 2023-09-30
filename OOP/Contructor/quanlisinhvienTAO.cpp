#include <iostream>

using namespace std;

struct students
{
    string nameOfStudent;
    string classOfStudent;
    int ageOfStudent;
    students(string name, string classmate, int age)
    {
        nameOfStudent = name;
        classOfStudent = classmate;
        ageOfStudent = age;
        // return 0;
    }
};

int main()
{
    students totalStudents[5];

    for (int i = 0; i < 5; i++)
    {
        string name;
        string classmate;
        int age;
        cin >> name >> classmate >> age;
        // cout << totalStudents[i].informations(name, classmate, age);
        cout << "Name: " << totalStudents[i].nameOfStudent << endl;
        cout << "Class: " << totalStudents[i].classOfStudent << endl;
        cout << "Age: " << totalStudents[i].ageOfStudent << endl;
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << totalStudents[i].informations() << endl;
    // }

    // string name;
    // string classmate;
    // int age;
    // cin >> name >> classmate >> age;

    // students Bao_Ha;
    // Bao_Ha.informations(name, classmate, age);
    return 0;
}