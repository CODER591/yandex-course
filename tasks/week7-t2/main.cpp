/*
Author: vpetrigo
Task:
���� ������ �������������� �����: x1, y1, x2, y2.
�������� ������� distance(x1, y1, x2, y2), ����������� ���������� ����� ������ (x1. y1) � (x2, y2).
�������� ������ �������������� ����� � �������� ��������� ������ ���� �������.

������ ������� ������
�������� ������ �������������� �����.
������ �������� ������
�������� ����� �� ������.

Sample Input:
0
0
1
1
Sample Output:
1.41421

*/

#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    cout << distance(x1, y1, x2, y2);

    return 0;
}
