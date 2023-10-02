#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Average." << endl;
            break;
        default:
            cout << "Need improvement." << endl;
    }

    return 0;
}
