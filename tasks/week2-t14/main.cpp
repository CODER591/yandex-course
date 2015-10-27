/*
Author: vpetrigo
Task:
���� ��� �������, ������ �������� A1?B1?C1, ������ �������� A2?B2?C2.
����������, ����� �� ���������� ���� �� ���� ������� ������ ������,
��� �������, ��� ������������ ������� ����� ������ �� 90 �������� ������ �����.

������ ������� ������
��������� �������� �� ���� ����� A1, B1, C1, A2, B2, C2.

������ �������� ������
��������� ������ ������� ���� �� ��������� ������� :
Boxes are equal, ���� ������� ����������,
The first box is smaller than the second one, ���� ������ ������� ����� ���� �������� �� ������,
The first box is larger than the second one, ���� ������ ������� ����� ���� �������� � ������,
Boxes are incomparable, �� ���� ��������� �������.

Sample Input 1 :
    1
    2
    3
    3
    2
    1
Sample Output 1:
Boxes are equal

Sample Input 2 :
    2
    2
    3
    3
    2
    1
Sample Output 2:
The first box is larger than the second one

*/

#include <iostream>

using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if (a1 > b1) {
        swap(a1, b1);
    }
    if (b1 > c1) {
        swap(b1, c1);
    }
    if (a1 > b1) {
        swap(a1, b1);
    }

    if (a2 > b2) {
        swap(a2, b2);
    }
    if (b2 > c2) {
        swap(b2, c2);
    }
    if (a2 > b2) {
        swap(a2, b2);
    }

    if (a1 == a2 && b1 == b2 && c1 == c2) {
        cout << "Boxes are equal";
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
        cout << "The first box is larger than the second one";
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
        cout << "The first box is smaller than the second one";
    }
    else {
        cout << "Boxes are incomparable";
    }
}
