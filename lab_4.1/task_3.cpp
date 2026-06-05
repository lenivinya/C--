/*Задача 3*/
/* Напишите программу, которая соединяет два массива в один и
делает сортировку методом пузырька. */

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {15, 3, 9};
    int arr2[] = {1, 12, 7, 5};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    
    int arr3[size3]; // результирующий массив

    // соединяем два массива в один
    for (int i = 0; i < size1; ++i) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        arr3[size1 + i] = arr2[i];
    }

    // сортировка методом пузырька
    for (int i = 0; i < size3 - 1; ++i) {
        for (int j = 0; j < size3 - i - 1; ++j) {
            if (arr3[j] > arr3[j + 1]) {
                // меняем элементы местами
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный объединенный массив:\n";
    for (int i = 0; i < size3; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}