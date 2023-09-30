#include <iostream>
#include <string>

using namespace std;

// Define the students struct
struct students {
    string nameOfStudent;
    string classOfStudent;
    int ageOfStudent;

    // Function to set student information
    void informations(string name, string classmate, int age) {
        nameOfStudent = name;
        classOfStudent = classmate;
        ageOfStudent = age;
    }

    // Function to display student information
    void displayInformation() {
        cout << "Name: " << nameOfStudent << endl;
        cout << "Classmate: " << classOfStudent << endl;
        cout << "Age: " << ageOfStudent << endl;
    }
};

int main() {
    students totalStudents[5];

    for (int i = 0; i < 5; i++) {
        string name;
        string classmate;
        int age;
        cin >> name >> classmate >> age;
        totalStudents[i].informations(name, classmate, age);
    }

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " Information:" << endl;
        totalStudents[i].displayInformation();
    }

    return 0;
}
