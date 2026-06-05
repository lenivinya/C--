/*Задача 4*/
/* Напишите программу, которая создает список студентов из 10
человек, каждому поставьте оценки (от 1 до 5) по трем любым предметам... */

#include <iostream>
#include <string>
using namespace std;

// функция для сортировки массива (пузырьком) для нахождения медианы
void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; ++i) {
        for(int j = 0; j < size - i - 1; ++j) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// функция поиска моды (самого частого значения)
int getMode(int arr[], int size) {
    int maxCount = 0, mode = arr[0];
    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    string students[10] = {"Алексей", "Борис", "Вера", "Глеб", "Дарья", 
                           "Егор", "Жанна", "Захар", "Илья", "Кирилл"};
    
    int math[10]    = {5, 4, 3, 5, 4, 3, 5, 4, 3, 5};
    int physics[10] = {4, 4, 4, 5, 3, 3, 4, 5, 4, 5};
    int cs[10]      = {5, 5, 4, 5, 5, 4, 5, 5, 4, 5};

    cout << "=== Анализ оценок ===\n";

    // анализ по предметам (на примере математики, можно повторить для остальных)
    double mathSum = 0;
    int mathCopy[10];
    for (int i = 0; i < 10; ++i) {
        mathSum += math[i];
        mathCopy[i] = math[i];
    }
    
    sortArray(mathCopy, 10);
    double mathMedian = (mathCopy[4] + mathCopy[5]) / 2.0;

    cout << "Математика - Средняя: " << mathSum / 10.0 
         << ", Медиана: " << mathMedian 
         << ", Мода: " << getMode(math, 10) << endl;

    // общая самая частая оценка среди всех предметов
    int allGrades[30];
    for(int i = 0; i < 10; ++i) {
        allGrades[i]      = math[i];
        allGrades[i + 10] = physics[i];
        allGrades[i + 20] = cs[i];
    }
    cout << "\nСамая частая оценка по всем предметам: " << getMode(allGrades, 30) << endl;

    cout << "\nСтуденты со средним баллом ниже 4.5:\n";
    for (int i = 0; i < 10; ++i) {
        double avg = (math[i] + physics[i] + cs[i]) / 3.0;
        if (avg < 4.5) {
            cout << students[i] << " (Средний балл: " << avg << ")" << endl;
        }
    }

    return 0;
}