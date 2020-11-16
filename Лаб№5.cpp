#include <iostream>
using namespace std;

int Prostoe(int x)
{
    for (int i = 2; i <= x / 2; i++) //цикл
    {
        if (x % i == 0) //проверка является ли число простым
        {
            return 0;
        }
        return 1;
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    for (int i = 1; i <= 200; i++) //цикл чисел до 200
    {
        if (Prostoe(i)) //вызов функции
        {
            cout << i << endl;
        }
    }
    system("pause");
}