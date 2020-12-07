
/*конструктор по умолчанию, позволяющий создать строку длиной 80 символов
конструктор, позволящий создавть строку производного размера
конструктор, который создает строку и нициализирует ее строкой полученной от пользователя
*/


#include <cmath>
#include <iostream>

#include "Header.h"
using namespace std;

void String::Init()
{
    cout << "Введите строку: ";
    char* string = new char[256];
    gets_s(string, 256);
    system("cls");
    Choise();
}