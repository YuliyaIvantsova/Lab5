#include <math.h>
#include <iostream>
using namespace std;

double sredneearifm(double a, double b, double c)
{
    double sredn = (a + b + c) / 3; //формула нахождения среднего арифметического
    return sredn; //возвращение результата
}

int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c;
    cout << "Введите 1е число: " << endl;
    cin >> a;
    cout << "Введите 2е число: " << endl;
    cin >> b;
    cout << "Введите 3е число: " << endl;
    cin >> c;
    double sredn = sredneearifm(a, b, c); //вызов функции
    cout << "Среденее арифметическое трёх введённых чисел: " << sredn << endl;
    system("pause");
}