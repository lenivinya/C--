/*Задача 8*/
/* Напишите функцию, которая реализует исключающее ИЛИ для двух логических переменных x и y. */

#include <iostream>
using namespace std;

bool xorBool(bool x, bool y) { // возвращает true, если x и y различны
    return x != y; // или (x && !y) || (!x && y)
}

int main() {
    bool a, b;
    cout << "Введите два булевых значения (0 или 1): ";
    cin >> a >> b;

    cout << "XOR = " << xorBool(a, b) << endl;
    return 0;
}