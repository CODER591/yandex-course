/*
Author: vpetrigo
Task:
���� ��� ����� �����. ������� ���������� �� ��� (��������� ������ ������� ����� ���� ����� �����).

������ ������� ������
�������� ��� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
2
3
Sample Output:
3

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    else {
        if (b > c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }

    return 0;
}
