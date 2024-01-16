#include <iostream>
#include <string>
using namespace std;

//create a class and the class name is student
class Student {
public:
    string name[100], branch[100], fname[100], Mname[100], city[100];
    int rollno[100], regdno[100], contact[50];
    int total = 0;
    float cgpa[100];
    
//create a function to enter the data of the student
    void enter() {
        int choice;
        cout << "Enter the number of students you want to enter: ";
        cin >> choice;
        for (int i = total; i < total + choice; i++) {
            cout << "\nEnter the data of Student " << i + 1 << endl << endl;
            cout << "Enter the Name Of The Student: ";
            cin.ignore();
            getline(cin, name[i]);
            cout << "Enter the Roll Number Of The Student: ";
            cin >> rollno[i];
            cout << "Enter the Registration Number Of The Student: ";
            cin >> regdno[i];
            cout << "Enter the Branch Of The Student: ";
            cin.ignore();
            getline(cin, branch[i]);
            cout << "Enter the Father Name Of The Student: ";
            cin.ignore();
            getline(cin, fname[i]);
            cout << "Enter the Mother Name Of The Student: ";
            cin.ignore();
            getline(cin, Mname[i]);
            cout << "Enter the City Of The Student: ";
            cin.ignore();
            getline(cin, city[i]);
            cout << "Enter the Contact Number Of The Student: ";
            cin >> contact[i];
            cout << "Enter the CGPA Of The Student: ";
            cin >> cgpa[i];
        }
        total += choice;
    }
    
//create the 2nd function to display the data of the student
    void display() {
        for (int i = 0; i < total; i++) {
            cout << "The Data Of Student "<< i + 1 <<endl<<endl;
            cout << "Name Of the Student: " << name[i] << endl;
            cout << "Roll Number Of The Student: " <<rollno[i]<< endl;
            cout << "Registration Number Of The Student: " <<regdno[i]<< endl;
            cout << "Branch Of The Student: " <<branch[i]<<endl;
            cout << "Father Name Of The Student: "<<fname[i]<<endl;
            cout << "Mother Name Of The Student: "<<Mname[i] <<endl;
            cout << "City Of The Student: " <<city[i]<<endl;
            cout << "Contact Number Of The Student: " << contact[i] << endl;
            cout << "CGPA Of The Student: " << cgpa[i] << endl;
        }
    }
    
//create the 3rd function to search any specific student profile
    void search() {
        int searchRollNo;
        cout << "Enter the Roll Number Of The Student You Want To Search: ";
        cin >> searchRollNo;
        bool found = false;

        for (int i = 0; i < total; i++) {
            if (searchRollNo == rollno[i]) {
                cout << "The Data Of Student " << i + 1 << endl;
                cout << "Name Of the Student: " << name[i] << endl;
                cout << "Roll Number Of The Student: " << rollno[i] << endl;
                cout << "Registration Number Of The Student: " << regdno[i] << endl;
                cout << "Branch Of The Student: " << branch[i] << endl;
                cout << "Father Name Of The Student: "<<fname[i]<<endl;
                cout << "Mother Name Of The Student: "<<Mname[i]<<endl;
                cout << "City Of The Student: "<<city[i]<<endl;
                cout << "Contact Number Of The Student: "<<contact[i]<<endl;
                cout << "CGPA Of The Student: "<<cgpa[i]<<endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with Roll Number " << searchRollNo << " not found." << endl;
        }
    }
    
//create the 4th funvction to update any student data 
    void update() {
        int updateRollNo;
        cout << "Enter the Roll Number Of The Student You Want To Update: ";
        cin >> updateRollNo;
        bool found = false;

        for (int i = 0; i < total; i++) {
            if (updateRollNo == rollno[i]) {
                cout << "Previous Data Of The Student:" << endl;
                cout << "The Data Of Student " << i + 1 << endl;
                cout << "Name Of the Student: " << name[i] << endl;
                cout << "Roll Number Of The Student: " << rollno[i] << endl;
                cout << "Registration Number Of The Student: " << regdno[i] << endl;
                cout << "Branch Of The Student: " << branch[i] << endl;
                cout << "Father Name Of The Student: " << fname[i] << endl;
                cout << "Mother Name Of The Student: " << Mname[i] << endl;
                cout << "City Of The Student: " << city[i] << endl;
                cout << "Contact Number Of The Student: " << contact[i] << endl;
                cout << "CGPA Of The Student: " << cgpa[i] << endl;

                cout << "Enter the New Data Of The Student:" << endl;
                cout << "Enter the Name Of The Student: ";
                cin.ignore();
                getline(cin, name[i]);
                cout << "Enter the Roll Number Of The Student: ";
                cin >> rollno[i];
                cout << "Enter the Registration Number Of The Student: ";
                cin >> regdno[i];
                cout << "Enter the Branch Of The Student: ";
                cin.ignore();
                getline(cin, branch[i]);
                cout << "Enter the Father Name Of The Student: ";
                cin.ignore();
                getline(cin, fname[i]);
                cout << "Enter the Mother Name Of The Student: ";
                cin.ignore();
                getline(cin, Mname[i]);
                cout << "Enter the City Of The Student: ";
                cin.ignore();
                getline(cin, city[i]);
                cout << "Enter the Contact Number Of The Student: ";
                cin >> contact[i];
                cout << "Enter the CGPA Of The Student: ";
                cin >> cgpa[i];
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with Roll Number " << updateRollNo << " not found." << endl;
        }
    }
    
//create 5tn function to remove the data of the student from the list
    void remove() {
        int removeRollNo;
        cout << "Enter the Roll Number Of The Student You Want To Remove: ";
        cin >> removeRollNo;
        bool found = false;

        for (int i = 0; i < total; i++) {
            if (removeRollNo == rollno[i]) {
                for (int j = i; j < total - 1; j++) {
                    name[j] = name[j + 1];
                    rollno[j] = rollno[j + 1];
                    regdno[j] = regdno[j + 1];
                    branch[j] = branch[j + 1];
                    fname[j] = fname[j + 1];
                    Mname[j] = Mname[j + 1];
                    city[j] = city[j + 1];
                    contact[j] = contact[j + 1];
                    cgpa[j] = cgpa[j + 1];
                }
                total--;
                found = true;
                cout << "Student with Roll Number " << removeRollNo << " removed successfully." << endl;
                break;
            }
        }

        if (!found) {
            cout << "Student with Roll Number " << removeRollNo << " not found." << endl;
        }
    }
};

//main function
int main() {
    cout << "---------- UNIVERSITY PLACEMENT MANAGEMENT SYSTEM ----------" << endl;
    int choice;
    Student students;  // object of class (student)

    while (true) {
        cout << "\nENTER '1' TO ADD NEW STUDENT DATA" << endl;
        cout << "ENTER '2' TO DISPLAY THE LIST OF THE STUDENT'S DATA" << endl;
        cout << "ENTER '3' TO SEARCH THE SPECIFIC STUDENT DATA" << endl;
        cout << "ENTER '4' TO EDIT OR UPDATE THE DATA OF THE STUDENT" << endl;
        cout << "ENTER '5' TO DELETE THE DATA" << endl;
        cout << "ENTER '6' TO EXIT" << endl << endl;
        cout << "ENTER THE OPTION HERE: ";
        cin >> choice;
        
//using switch case for multiple choice
        switch (choice) {
            case 1:
                students.enter(); // for function 1
                break;
            case 2:
                students.display(); // for function 2
                break;
            case 3:
                students.search(); // for function 3
                break;
            case 4:
                students.update(); // for function 4
                break;
            case 5:
                students.remove(); // for function 5
                break;
            case 6:
                exit(0); //to exit 
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}