/*
Author: vpetrigo
Task:
������������������ ��������� ������������ ���:
F(0) = 0, F(1) = 1, �, F(n) = F(n?1) + F(n?2).
���� ����������� ����� A. ����������, ����� �� �����
������ ��������� ��� ��������, �� ���� �������� �����
����� N, ��� F(N) = A.
���� � �� �������� ������ ���������, �������� ����� -1.

������ ������� ������
�������� ����������� ����� A.

������ �������� ������
�������� ����� �� ������.

Sample Input:
8
Sample Output:
6

*/

#include <iostream>

using namespace std;

int main() {
    int a;
    int n = 1; // counter for deducing numbering of Fibonacci number
    int f_0 = 0;
    int f_1 = 1;

    cin >> a;

    while (f_1 < a) {
        int tmp = f_1;

        ++n;
        f_1 += f_0;
        f_0 = tmp;
    }

    if (f_1 == a) {
        cout << n;
    }
    else {
        cout << -1;
    }

    return 0;
}
