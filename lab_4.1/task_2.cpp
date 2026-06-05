/*Задача 2*/
/* Напишите программу, которая ищет дубликаты в массиве.
Инициализируйте 2 массива, один с дубликатами, другой без. Выполните
проверку и выведите на экран сообщение в каком массиве есть дубликаты и какие. */

#include <iostream>
using namespace std;

// функция для поиска и вывода дубликатов
void checkDuplicates(int arr[], int size, string arrayName) {
    bool hasDuplicates = false;
    cout << "Проверка массива " << arrayName << ":" << endl;
    
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                if (!hasDuplicates) {
                    cout << "  Найдены дубликаты: ";
                }
                cout << arr[i] << " ";
                hasDuplicates = true;
                break; // переход к следующему элементу, чтобы не выводить один дубликат дважды
            }
        }
    }
    
    if (!hasDuplicates) {
        cout << "  Дубликатов нет.";
    }
    cout << "\n\n";
}

int main() {
    int arr1[] = {1, 2, 3, 4, 2, 5, 6, 3}; // массив с дубликатами
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8}; // массив без дубликатов
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    checkDuplicates(arr1, size1, "arr1");
    checkDuplicates(arr2, size2, "arr2");

    return 0;
}