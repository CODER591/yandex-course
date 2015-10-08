/*
Author: vpetrigo
Task:
���� ������������ ����� a, b, c, d, e, f. ������ ������� �������� ���������

������ ������� ������
�������� ����� ����� - ������������ ��������� �������.
������ �������� ������
����� ��������� ������� �� ���� ������� ���� �������.

���� ������� �� ����� �������, �� ��������� ������ ������� ������������ ����� 0.

���� ������� ����� ���������� ����� �������, ������ �� ������� ����� ��� y=kx+b, �� ��������� ������ ������� ����� 1, � ����� �������� k � b.

���� ������� ����� ������������ ������� (x0, y0), �� ��������� ������ ������� ����� 2, � ����� �������� x0 � y0.

���� ������� ����� ���������� ����� ������� ���� x=x0, y � �����, �� ��������� ������ ������� ����� 3, � ����� �������� x0.

���� ������� ����� ���������� ����� ������� ���� y=y0, x � �����, �� ��������� ������ ������� ����� 4, � ����� �������� y0.

���� ����� ���� ����� (x, y)  �������� ��������, �� ��������� ������ ������� ����� 5.
Sample Input 1:
1
0
0
1
3
3
Sample Output 1:
2 3 3

Sample Input 2:
1
1
2
2
1
2
Sample Output 2:
1 -1 1

Sample Input 3:
0
2
0
4
1
2
Sample Output 3:
4 0.5

Sample Input 4:
2
3
4
6
1
2
Sample Output 4:
1 -0.666667 0.333333

Sample Input 5:
0
1
0
3
5
15
Sample Output 5:
4 5

Sample Input 6:
1
0
1
0
3
3

Sample Output 6:
3 3

*/

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double x, y;
    const int no_roots = 0;
    const int kx_roots = 1;
    const int one_xy_root = 2;
    const int one_x = 3;
    const int one_y = 4;
    const int inf_roots = 5;

    cin >> a >> b >> c >> d >> e >> f;

    double det = a * d - b * c;
    double det_x = (e * d - b * f);
    double det_y = (a * f - e * c);

    if (det != 0) {
        x = det_x / det;
        y = det_y / det;
        cout << one_xy_root << ' ' << x << ' ' << y;
    }
    else {
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            if (e != 0 || f != 0) {
                cout << no_roots;
            }
            else {
                cout << inf_roots;
            }
        }
        else {
            if (det_x != 0 || det_y != 0) {
                cout << no_roots;
            }
            else if (b == 0) {
                x = e / a;
                cout << one_x << ' ' << x;
            }
            else if (a == 0) {
                y = e / b;
                cout << one_y  << ' ' << y;
            }
            else {
                double k = -a / b;
                double bi = e / b;

                cout << kx_roots << ' ' << k << ' ' << bi;
            }
        }
    }

    return 0;
}