// Написать функцию, которая принимает два
// параметра: основание степени и показатель степени, и
// вычисляет степень числа на основе полученных данных.


#include <iostream>
#include <windows.h>
using namespace std;

template<typename T>
T CalcDegree(T A, T B);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1 = 0, num2 = 0;
    cout << "Чтобы узнать степень числа введите число основание и показатель : ";
    cin >> num1 >> num2;

    cout << "Степень числа : " << num1 << " = " << CalcDegree(num1, num2)<< endl;
}

template<typename T>
T CalcDegree(T A, T B) {
    T result = 1;
    for (size_t i = 0; i < B; i++)
        result *= A;

    return result;
}