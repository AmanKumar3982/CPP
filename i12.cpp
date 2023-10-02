#include <iostream>
using namespace std;

// Function to calculate the area and perimeter of a circle
void calculateAreaAndPerimeter(double& area, double& perimeter) {
    const double pi = 3.14159; // Approximate value of pi
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
}

int main() {
    double circleArea, circlePerimeter;
    
    calculateAreaAndPerimeter(circleArea, circlePerimeter);
    
    cout << "The area of the circle is: " << circleArea << endl;
    cout << "The perimeter of the circle is: " << circlePerimeter << endl;

    return 0;
}