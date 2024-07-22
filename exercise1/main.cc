#include <iostream>
#include <cstdlib> // Thư viện cần thiết để sử dụng system()
#include "square.h"
#include "circle.h"
#include "equilateral_triangle.h"

using namespace std;

void pressAnyKeyToContinue() {
    std::cout << "Press Enter to continue..." << std::flush;
    system("/bin/bash -c 'read'");
}

void print_menu(){
    cout << "0 - Calc the area of a Square.\n";
    cout << "1 - Calc the area of a Circle.\n";
    cout << "2 - Calc the area of a Equilateral Triangle.\n";
    cout << "3 - Exit.\n";

    cout << "Please enter your choice: ";
}

bool process(){
    int opt;
    cin >> opt;
    system("clear");
    switch (opt)
    {
    case 0: {
        double side;
        cout << "Please enter the side length of the Square: ";
        cin >> side;
        Square *pS = new Square(side);
        cout << "Area of Square: " << pS->area() << endl;
        delete pS;
        break;
    }
    case 1: {
        double radius;
        cout << "Please enter the radius of the Circle: ";
        cin >> radius;
        Circle *pC = new Circle(radius);
        cout << "Area of Circle: " << pC->area() << endl;
        delete pC;
        break;
    }
    case 2: {
        double side;
        cout << "Please enter the side length of the Equilateral Triangle: ";
        cin >> side;
        EquilateralTriangle *pET = new EquilateralTriangle(side);
        cout << "Area of Equilateral Triangle: " << pET->area() << endl;
        delete pET;
        break;
    }
    case 3: {
        return false;
    }
    default: {
        cout << "Invalid choice. Please enter the valid number!\n";
        break;
    }
    }
    
    pressAnyKeyToContinue();
    system("clear");
    return true;
}

int main(){
    bool loop = true;
    while (loop)
    {
        print_menu();
        loop = process();
    }
    
    return 0;
}