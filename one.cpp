#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "������� ������ ������� [a]: ";
    cin >> a;
    cout << "������� ����� ������� [b]: ";
    cin >> b;

    int la = b / 4 - b / 100 + b / 400;
    int lb = (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400;
    int leapYears = la - lb;

    cout << "���������� ���������� ��� �� ������� [" << a << ", " << b << "]: " << leapYears << endl;

    return 0;
}