/*Задача 6*/
/* Вычислите сумму цифр данного трехзначного натурального числа. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, n_1, n_2, n_3; // число, цифры числа
    cout << "Введите трёхзначное число: ";
    cin >> num;
    n_1 = num / 100;
    n_2 = num % 100 / 10;
    n_3 = num % 10;
    cout << "Сумма цифр числа " << n_1 + n_2 + n_3 << endl;
}