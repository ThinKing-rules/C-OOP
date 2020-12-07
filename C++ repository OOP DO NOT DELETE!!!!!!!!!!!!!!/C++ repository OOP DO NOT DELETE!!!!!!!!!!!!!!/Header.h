#pragma once
#include <iostream>

class String
{
private:
    char* string;
public:
    String()
    {
        int size = 80;
        string = new char[size];
    }
    void ShowString()
    {

    }
    String(char* _string)
    {
        int size = strlen(_string) + 1;
        string = new char[size];
        strcpy(string, _string);
    }
    void Init();

    void Choise()
    {
        int choise;
        cout << "Показать строку?\n\n"
            << "1 - Да. \n"
            << "2 - Выйти.\n\n";
        cout << "Введите ваш выбор: ";
        cin >> choise;
        if (choise == 1)
        {
            ShowString();
        }
        else if (choise == 2)
        {
            return;
        }
        else
        {
            system("cls");
            cout << "Не верный ввод, повторите выбор!\n\n";
            Choise();
        }
    }
};

