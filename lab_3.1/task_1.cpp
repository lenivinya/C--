/*Задача 1*/
/* Напишите две функции: вычисления объёма и площади поверхности усечённого конуса, 
если параметрами обеих функций являются высота и оба радиуса. */

#include <iostream>
#include <cmath>
using namespace std;

// константа π
const double PI = 3.141592653589793;

// функция вычисления объёма усечённого конуса: V = (1/3) * π * h * (R^2 + R*r + r^2)
double volume(double h, double r1, double r2) {
    return (1.0/3.0) * PI * h * (r1*r1 + r1*r2 + r2*r2);
}

// функция вычисления площади полной поверхности усечённого конуса:
// S = π * (R^2 + r^2 + (R+r)*l), где l = √(h^2 + (R-r)^2)
double area(double h, double r1, double r2) {
    double l = sqrt(h*h + (r1 - r2)*(r1 - r2));
    return PI * (r1*r1 + r2*r2 + (r1 + r2) * l);
}

int main() {
    double h, r1, r2; // высота и радиусы

    cout << "Введите высоту, больший радиус и меньший радиус: ";
    cin >> h >> r1 >> r2;
    cout << "Объём: " << volume(h, r1, r2) << endl;
    cout << "Площадь поверхности: " << area(h, r1, r2) << endl;
    return 0;
}