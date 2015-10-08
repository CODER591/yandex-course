/*
Author: vpetrigo
Task:
���� ������������ ����� a, b, c, d, e, f. ��������, ��� ������� �������� ���������
����� ����� ���� �������. �������� ��� ����� x � y, ���������� �������� ���� �������.

������ ������� ������
�������� ����� ����� - ������������ ��������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
0
0
1
3
3
Sample Output:
3 3

*/

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;

    cin >> a >> b >> c >> d >> e >> f;

    double det = a * d - b * c;

    x = (e * d - b * f) / det;
    y = (a * f - e * c) / det;

    cout << x << ' ' << y;

    return 0;
}