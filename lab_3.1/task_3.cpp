/*Задача 3*/
/* Напишите функцию вычисления суммы бесконечного ряда. */

#include <iostream>
#include <cmath>
using namespace std;

// вычисляет сумму ряда с точностью eps (по умолчанию 1e-10)
// ряд сходится при |x| > 1; для x <= 1 функция вернёт бесконечность или предупреждение
double inf_sum(double x, double eps = 1e-10) {
    if (fabs(x) <= 1.0) {
        cerr << "Ошибка: ряд сходится только при |x| > 1\n";
        return INFINITY; // число бесконечно большое
    }
    double sum = 0.0; // член для i=0 равен 0, начинаем с i=1
    int i = 1;
    double term;
    do {
        term = (i * i) / pow(x, i);
        sum += term;
        ++i;
    } while (term > eps || term < -eps); // продолжаем, пока член не станет мал
    return sum;
}

int main() {
    double x;
    cout << "Введите x (нужно |x| > 1 для сходимости): ";
    cin >> x;
    double result = inf_sum(x);
    cout << "Сумма ряда = " << result << endl;
    return 0;
}