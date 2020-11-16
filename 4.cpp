#include <math.h>
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double ploshad(double r)
{
    double s = M_PI * r * r; //формула нахождения площади окружности
    return s; //возвращение результата
}

int main()
{
    setlocale(LC_ALL, "rus");
    double r;
    cout << "Введите радиус окружности: " << endl;
    cin >> r;
    double s = ploshad(r); //вызов функции
    cout << "Площадь окружности: " << s << endl;
    system("pause");
}