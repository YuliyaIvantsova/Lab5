#include <math.h>
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double perevod(double rad)
{
    double grad = (180 * rad) / M_PI; //формула перевода
    return grad; //возвращение результата
}

int main()
{
    setlocale(LC_ALL, "rus");
    double rad;
    cout << "Введите число в радианах: " << endl;
    cin >> rad;
    double grad = perevod(rad); //вызов функции
    cout << "В градусах: " << grad << endl;
    system("pause");
}