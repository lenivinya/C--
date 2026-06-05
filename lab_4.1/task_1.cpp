/*Задача 1*/
/* Напишите программу, которая введенную пользователем строку
символов переворачивает в обратную сторону. */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, reversedStr = "";
    
    cout << "Введите строку: ";
    getline(cin, str); // используем getline для чтения строки с пробелами

    // проходим по строке с конца в начало
    for (int i = str.length() - 1; i >= 0; --i) {
        reversedStr += str[i];
    }

    cout << "Перевернутая строка: " << reversedStr << endl;
    
    return 0;
}