/*Задача 8*/
/* Найдите последовательность a1, a2, a3, ..., a20,
элементы которой вычисляются по формуле a(n) = n/(n + 1). */

#include <iostream>
using namespace std;

int main() {

    for (int n = 1; n <= 20; n++) { // цикл от 1 до 20
        float a = (float)n / (n + 1); // вычисление по формуле
        cout << "a" << n << " = " << a << endl;
    }
    return 0;
}