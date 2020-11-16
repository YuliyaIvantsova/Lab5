#include <math.h>
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double perevod1(double mil)
{
    double km = mil * 1.61 ; //формула перевода
    return km; //возвращение результата
}

double perevod2(double mil)
{
    double fut = mil * 5280; //формула перевода
    return fut; //возвращение результата
}

int main()
{
    setlocale(LC_ALL, "rus");
    double mil;
    cout << "Введите расстояние в милях: " << endl;
    cin >> mil;

    double km = perevod1(mil); //вызов функции
    cout << "В километрах: " << km << endl;

    double fut = perevod2(mil); //вызов функции
    cout << "В футах: " << fut << endl;
    system("pause");
}