/*
Author: vpetrigo
Task:
���� ����������� ����� n > 1. ���������, �������� �� ��� �������.
��������� ������ ������� ����� YES, ���� ����� ������� � NO, ���� ����� ���������.
������� �������� � ���� ������� IsPrime(n), ������� ����������
True ��� ������� ����� � False ��� ��������� �����. ���������� �������� � ��������� ������ ���� ��������������� ����� �� n.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.
Sample Input 1:
2
Sample Output 1:
YES

Sample Input 2:
4
Sample Output 2:
NO

*/

#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
    int div = 2;

    while (div < sqrt(n) && n % div != 0) {
        ++div;
    }

    return (n % div != 0 || n == div);
}

int main() {
    int n;

    cin >> n;

    if (IsPrime(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
