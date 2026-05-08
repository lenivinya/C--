/*Задача 7*/
/* Вычислите выражение: √( 3+ (√ 6+...+ (√ 96 +(√99) ) ) ) */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float rez = sqrt(99); // начнём вычисление с (√99)

    // идём от 96 к началу с шагом 3
    for (int i = 96; i >= 3; i -= 3) {
        rez = sqrt(i + rez); // вычисляем следующий вложенный корень
    }

    cout << "Результат: " << rez << endl;
    return 0;
}