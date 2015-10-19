/*
Author: vpetrigo
Task:
���� ����������� ����� n > 1. �������� ��� ���������� ��������, �������� �� 1.
������� �������� � ���� ������� MinDivisor(n). ���������� �������� � ��������� ������ ���� ��������������� ����� �� n.
��������. ���� � ����� n ��� ��������, �� �������������� n , �� ����� n � ������� � ������� ����� ���� ����� n.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
4
Sample Output 1:
2

Sample Input 2:
5
Sample Output 2:
5

*/

#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n) {
    int div = 2;

    for (; div < sqrt(n) && n % div != 0; ++div) {
    }

    if (n % div != 0) {
        div = n;
    }

    return div;
}

int main() {
    int n;

    cin >> n;
    cout << MinDivisor(n);

    return 0;
}