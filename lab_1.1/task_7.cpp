/*Задача 7*/
/* Напишите программу, которая выводит следующую таблицу. 
Отметьте равнение правой таблицы по правому краю. Используйте только
один оператор с cout. */

#include <iostream>
#include <locale> // для форматирования чисел
#include <iomanip> // управление форматированием ввода-вывода
using namespace std;

int main()
{
    short year1 = 2023, year2 = 2024, year3 = 2025;
    long long num_1 = 552, num_2 = 567457, num_3 = 565804960;

    cout 
        << setw(4) << year1 << setw(15) << num_1 << endl
        // setw() - ширина поля для вывода
        << setw(4) << year2 << setw(15) << num_2 << endl
        << setw(4) << year3 << setw(15) << num_3 << endl;
    return 0;
}