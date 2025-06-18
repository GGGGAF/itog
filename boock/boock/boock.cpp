#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "module_3.h"
#include "module_2.h"
#include "module_1.h"
using namespace std;
int main()
{
    int choice;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    do
    {
        cout << "1. ввод данных\n";
        cout << "2. поиск книги \"инфомартика\"\n";
        cout << "3. сохранение \n";
        cout << "0. Выйти\n";
        cout << "выберите че хатите: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 0:
            cout << "выход...\n" << endl;
            break;
        default:
            cout << "нет такого номера!\n" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}