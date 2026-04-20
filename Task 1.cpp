#include <iostream>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    float grades[numCourses], credits[numCourses];

    // Input course details
    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade (e.g., 10, 9, 8): ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    // GPA calculation
    float gpa = totalGradePoints / totalCredits;

    // Assuming CGPA = GPA (single semester)
    float cgpa = gpa;

    // Output
    cout << "\n--- Course Details ---" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1
             << " -> Grade: " << grades[i]
             << ", Credits: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "GPA: " << gpa << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}