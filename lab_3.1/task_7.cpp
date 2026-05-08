/*Задача 7*/
/* Напишите функцию, которая вычисляет наименьший общий делитель для двух чисел. */

#include <iostream>
using namespace std;

// по алгоритму Евклида:
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b; // temp для временного хранения данных
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    cout << "Введите два целых числа: ";
    cin >> m >> n;

    cout << "НОД(" << m << ", " << n << ") = " << gcd(m, n) << endl;
    return 0;
}