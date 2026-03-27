/*Задача 4*/
/* Напишите программу, которая запрашивает количество секунд и
переводит их в часы, минуты и секунды. */

#include <iostream>
#include <cmath> // подключение библиотеки математических функций
using namespace std;

string declension(int number, string form1, string form2, string form5) // создаём функцию выбора правильного слова для вывода результата
{
    number = number % 100;
    if (number >= 11 && number <= 19) // если число 11-19
        return form5;

    int last = number % 10;

    if (last == 1) // число - 1
        return form1;
    if (last >= 2 && last <= 4) // число 2-4
        return form2;

    return form5; // остальные числа - 5-9
}

int main()
{
    int hours, minutes, seconds, time; // часы, минуты, секунды, начальное время в секундах
    cout << "Введите количество секунд: ";
    cin >> time;
    hours = floor(time/3600); // вычисление количества часов 
    minutes = floor((time % 3600)/60); // вычисление количества минут 
    seconds = floor(time % 60); // вычисление количества секунд 
    cout << "Результат: "
        << hours << " " << declension(hours, "час", "часа", "часов") << " "
        << minutes << " " << declension(minutes, "минута", "минуты", "минут") << " "
        << seconds << " " << declension(seconds, "секунда", "секунды", "секунд")
        << endl;
}