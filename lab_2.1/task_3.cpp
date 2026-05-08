/*Задача 3*/
/* Напишите программу приключенческой игры. 
Вы играете за «героя», который двигается по воображаемому ландшафту. 
Программа запрашивает ваши координаты (относительно обычной координатной плоскости (x;y)), 
а также куда вы планируете передвигаться, в какое направление (программа дает выбрать север, юг, запад или восток). 
Программа также запрашивает количество шагов, которые планируете сделать. 
Далее выводится ваши координаты с учётом передвижения. 
Используйте getchar() и вложенные конструкции if-else. */

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int coordinates_x, coordinates_y, steps;
    char orientation;

    cout << "\tДобро пожаловать в игру!\n";
    cout << "Вам предстоит преодолеть путь, сделав всего несколько шагов.\n\n";

    cout << "Введите координату 'x' своего местонахождения: ";
    cin >> coordinates_x;

    cout << "А теперь введи координату 'y': ";
    cin >> coordinates_y;

    cin.ignore(); // очищаем буфер после ввода координат

    cout << "\n\tОтлично! Теперь мы знаем, где ты находишься.\n";

    while (true) {

        cout << "\nВыбери направление движения:\n";
        cout << "Север (N), Юг (S), Запад (W), Восток (E)\n";
        cout << "Нажмите Enter без ввода буквы для завершения игры.\n";

        orientation = getchar(); // завершаем игру при нажатии enter
        if (orientation == '\n') {
            break;
        }
        else {
            cout << "\nНеверное направление!\n"; // завершаем игру при начальном неправильном направлении движения
            break;
        }

        cout << "Сколько сделать шагов? ";
        cin >> steps;

        cin.ignore(); // убираем enter из буфера

        if (orientation == 'N' || orientation == 'n') {
            coordinates_y += steps;
            cout << "\nВы пошли на север.\n";
        }

        else if (orientation == 'S' || orientation == 's') {
            coordinates_y -= steps;
            cout << "\nВы пошли на юг.\n";
        }

        else if (orientation == 'W' || orientation == 'w') {
            coordinates_x -= steps;
            cout << "\nВы пошли на запад.\n";
        }

        else if (orientation == 'E' || orientation == 'e') {
            coordinates_x += steps;
            cout << "\nВы пошли на восток.\n";
        }

        else {
            cout << "\nНеверное направление!\n";
        }
    }

    cout << "\nПутешествие окончено!\n" << endl;
    cout << "Ваши итоговые координаты ("
         << coordinates_x << "; "
         << coordinates_y << ")\n" << endl;
    return 0;
}