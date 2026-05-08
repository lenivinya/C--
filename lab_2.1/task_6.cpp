/*Задача 6*/
/* Напишите программу, которая введенную пользователем строку
символов переворачивает в обратную сторону. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text; // строка пользователя
    string textout;

    cout << "Введите строку: ";
    getline(cin, text); // считывание строки целиком

    cout << "Строка наоборот: ";
    for (int i = text.length() - 1; i >= 0; i--) { // вывод символов с конца строки
        textout += text[i];
    }
    cout << textout;
    return 0;
}