/*Задача 4*/
/* Самостоятельно сформулируйте задачу,
которая демонстрирует решение с помощью разветвляющих алгоритмов. */

// Ссылка на блок-схему: https://app.holst.so/invite/b920d2ec-5b55-4761-ac76-a1a15d8f9bdf

#include <iostream>
using namespace std;

int main() {
    int points;
    cout << "Введите количество баллов (0-100): ";
    cin >> points; // баллы

    if (points >= 90 && points <= 100) {    // число 90-100
        cout << "Оценка: Отлично" << endl;
    }
    
    else if (points >= 75 && points < 90) { // число 75-89
        cout << "Оценка: Хорошо" << endl;
    }
    
    else if (points >= 60 && points < 75) { // число 60-74
        cout << "Оценка: Удовлетворительно" << endl;
    }
    
    else if (points >= 0 && points < 60) {  // число, меньше 59 включительно
        cout << "Оценка: Неудовлетворительно" << endl;
    }
    
    else {
        cout << "Ошибка: некорректное количество баллов!" << endl;
    }
    return 0;
}