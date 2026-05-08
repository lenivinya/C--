/*Задача */
/* Напишите лямбда-функцию, которая складывает два введённых числа. */

#include <iostream>
using namespace std;

int main() {
    auto sum = [](int a, int b) { // лямбда-функция, складывающая два числа
        return a + b;
    };

    int x, y;
    cout << "Введите два целых числа: ";
    cin >> x >> y;

    int result = sum(x, y);
    cout << "Сумма = " << result << endl;
    return 0;
}