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
        cout << "�������� ������?\n\n"
            << "1 - ��. \n"
            << "2 - �����.\n\n";
        cout << "������� ��� �����: ";
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
            cout << "�� ������ ����, ��������� �����!\n\n";
            Choise();
        }
    }
};

