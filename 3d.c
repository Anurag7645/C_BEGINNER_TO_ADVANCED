#include <stdio.h>

// Define constants for the maximum number of classes, students, and subjects
#define MAX_CLASSES 10
#define MAX_STUDENTS 50
#define MAX_SUBJECTS 5

// Function to initialize the student grades array
void initializeStudentGrades(int studentGrades[MAX_CLASSES][MAX_STUDENTS][MAX_SUBJECTS], int N, int M, int P) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < P; k++) {
                studentGrades[i][j][k] = 0;  // Initializing grades to zero
            }
        }
    }
}

// Function to update a student's grade
void updateGrade(int studentGrades[MAX_CLASSES][MAX_STUDENTS][MAX_SUBJECTS], int classIndex, int studentIndex, int subjectIndex, int newGrade) {
    studentGrades[classIndex][studentIndex][subjectIndex] = newGrade;
}

// Function to retrieve a student's grade
int getGrade(int studentGrades[MAX_CLASSES][MAX_STUDENTS][MAX_SUBJECTS], int classIndex, int studentIndex, int subjectIndex) {
    return studentGrades[classIndex][studentIndex][subjectIndex];
}

int main() {
    int N;  // Number of classes
    int M;  // Number of students per class
    int P;  // Number of subjects
    scanf("Enter the number of classes:%d", &N);
    scanf("Enter the number of students per class:%d", &M);
    scanf("Enter the number of subjects:%d", &P);

    // Declare and initialize the student grades array
    int studentGrades[MAX_CLASSES][MAX_STUDENTS][MAX_SUBJECTS];
    initializeStudentGrades(studentGrades, N, M, P);

    // Update and retrieve student grades
    int upclass,student,subject,marks;
    scanf("Enter the Number of the class you want to update:%d", &upclass);
    scanf("Enter the Number of the student you want to update:%d", &student);
    scanf("Enter the Number of the subject you want to update:%d", &subject);
    scanf("Enter the Marks you want to update:%d", &marks);
    updateGrade(studentGrades, upclass, student, subject, marks); // Update grade for class 1, student 5, subject 2
    int grade = getGrade(studentGrades, upclass, student, subject);
    printf("Student's grade: %d\n", grade);

    return 0;
}
