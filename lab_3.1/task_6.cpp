/*Задача 6*/
/* Напишите рекурсивную функцию void printRange(int a, int b),
которая выводит все целые числа от a до b включительно. 
Если a <= b, числа выводятся в порядке возрастания. 
Если a > b, числа выводятся в порядке убывания. 
В функции main() запросите два числа и вызовите функцию. */

#include <iostream>
using namespace std;

void printRange(int a, int b) { // выводит все целые числа от a до b включительно
    if (a <= b) { // если a <= b - в порядке возрастания
        cout << a << " ";
        if (a != b) printRange(a + 1, b);
    } else { // в порядке убывания
        cout << a << " ";
        if (a != b) printRange(a - 1, b);
    }
}

int main() {
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;

    printRange(a, b);
    cout << endl;
    return 0;
}