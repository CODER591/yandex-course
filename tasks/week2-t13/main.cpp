/*
Author: vpetrigo
Task:
���� ��� �����. ����������� �� � ������� ����������.

������ ������� ������
�������� ��� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input :
1
2
1
Sample Output :
1 1 2

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }

    cout << a << ' ' << b << ' ' << c;

    return 0;
}