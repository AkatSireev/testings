#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите начало отрезка [a]: ";
    cin >> a;
    cout << "Введите конец отрезка [b]: ";
    cin >> b;

    int la = b / 4 - b / 100 + b / 400;
    int lb = (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400;
    int leapYears = la - lb;

    cout << "Количество високосных лет на отрезке [" << a << ", " << b << "]: " << leapYears << endl;

    return 0;
}