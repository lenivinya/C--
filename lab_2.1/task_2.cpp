/*Задача 2*/
/* Создайте программу-калькулятор, которая выполняет основные 4 математических операции. 
Программа запрашивает ввод пользователем первого операнда, знака операции 
и второго операнда (для хранения операндов следует использовать 
переменные вещественного типа). Выбрать операцию можно через switch. */

// Ссылка на блок-схему: https://app.holst.so/invite/a28364a9-e685-48a9-9ac9-3352cabd6d81 

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    char choice;

    do {
        cout << "Добро пожаловать в калькулятор :)";
        cout << "Введите первый операнд, знак операции и второй операнд: ";
        cin >> a >> op >> b;

        double result;
        bool valid = true;

        switch (op) {
            case '+':
                result = a + b;
                break;

            case '-':
                result = a - b;
                break;

            case '*':
                result = a * b;
                break;

            case '/':
                if (b == 0) {
                    cout << "Ошибка: деление на ноль!" << endl;
                    valid = false;
                } 
                else {
                    result = a / b;
                }
                break;

            default:
                cout << "Неправильный ввод операции!" << endl;
                valid = false;
        }

        if (valid) {
            cout << "Результат равен " << result << endl;
        }

        cout << "Выполнить ещё одну операцию (y/n)? ";
        cin >> choice;
    }

    while (choice == 'y' or choice == 'Y');
    return 0;
}