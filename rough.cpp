#include <bits/stdc++.h>
using namespace std;

void rectangle(double length, double width, double &area, double &perimeter)
{
    area = length * width;
    perimeter = 2 * (length + width);
}
void circle(double radius, double &area, double &perimeter)
{
    const double pi = 3.14159;
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
}
void triangle(double side1, double side2, double side3, double &area, double &perimeter)
{
    double s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    perimeter = side1 + side2 + side3;
}

int main()
{
    int choice;
    double area, perimeter;
    do
    {
        cout << "Select a shape to calculate properties:" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Circle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            rectangle(length, width, area, perimeter);
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
            break;
        }

        case 2:
        {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            circle(radius, area, perimeter);
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
            break;
        }

        case 3:
        {
            double side1, side2, side3;
            cout << "Enter the length of side 1 of the triangle: ";
            cin >> side1;
            cout << "Enter the length of side 2 of the triangle: ";
            cin >> side2;
            cout << "Enter the length of side 3 of the triangle: ";
            cin >> side3;
            // Triangle(side1, side2, side3, area, perimeter);
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
            break;
        }
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
