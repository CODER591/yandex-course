/*
Author: vpetrigo
Task:
���� ��� ����� �����. ����������, ������� ����� ��� �����������.
��������� ������ ������� ���� �� �����: 3 (���� ��� ���������), 2 (���� ��� ���������) ��� 0 (���� ��� ����� ��������).

������ ������� ������
�������� ��� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
2
3
Sample Output:
0

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && a == c && b == c) {
        cout << 3;
    }
    else if (a == b || b == c || a == c) {
        cout << 2;
    }
    else {
        cout << 0;
    }

    return 0;
}
