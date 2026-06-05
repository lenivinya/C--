/*Задача 5*/
/* Напишите программу генерации паролей. Используйте
класс string и методы работы с ними. */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // инициализация генератора случайных чисел
    
    int length;
    cout << "Введите желаемую длину пароля: ";
    cin >> length;

    // набор символов для пароля
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    string password = "";

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charset.length();
        // метод append добавляет символ в конец строки
        password.append(1, charset[randomIndex]); 
    }

    cout << "Сгенерированный пароль: " << password << endl;

    return 0;
}