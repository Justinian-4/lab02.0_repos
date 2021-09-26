// LAB-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_02.cpp
// < Дубленич Назар >
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 16

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double z1;
    double z2;
    cout << "x = "; cin >> x; 
    z1 = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
    z2 = sqrt((x + 3) / (x - 3));
    z1 = 2 * x;
    z2 = x + x;
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();
    return 0;
}