/*Задача 5*/
/* Напишите рекурсивную функцию double power(double base, int exponent), 
которая возводит число base в целую степень exponent. 
Степень может быть отрицательной. Обработайте случай нулевой степени. 
В функции main() запросите основание и показатель степени, выведите результат. */

#include <iostream>
using namespace std;

double power(double base, int exponent) { // рекурсивная функция power: base^exponent
    if (exponent == 0) return 1.0; // любое число в 0 степени = 1
    if (exponent > 0)  // положительная степень
        return base * power(base, exponent - 1);
    else // отрицательная степень
        return 1.0 / power(base, -exponent);
}

int main() {
    double base;
    int exp;
    cout << "Возведём число в степень.\n";
    cout << "Введите основание и показатель степени: ";
    cin >> base >> exp;

    double result = power(base, exp);
    cout << base << "^" << exp << " = " << result << endl;
    return 0;
}