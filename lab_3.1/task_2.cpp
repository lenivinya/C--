/*Задача 2*/
/* Напишите функцию bool is_simple (int n), которая возвращает true,
если число простое, и false в противном случае. 
В функции main() запросите у пользователя число и выведите сообщение о том, является ли оно простым.
Учтите, что числа меньше 2 не являются простыми. */

#include <iostream>
#include <cmath>
using namespace std;

// возвращает true, если n - простое, иначе false
bool is_simple(int n) {
    if (n < 2) return false; // числа <2 не простые
    if (n == 2) return true; // 2 - простое
    if (n % 2 == 0) return false; // чётные >2 - составные
    int limit = sqrt(n); // проверяем до корня
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Найдём простое число!\n";
    cout << "Введите целое число: ";
    cin >> num;
    if (is_simple(num))
        cout << num << " - простое число.\n";
    else
        cout << num << " - составное (или 0, 1, отрицательное).\n";
    return 0;
}