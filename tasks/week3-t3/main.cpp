/*
Author: vpetrigo
Task:
�� ������� ����� N ������������ ��� �����
������� ������, �� ������������� N, � ������� �����������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
50
Sample Output:
1 2 4 8 16 32

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int t = 1;

    while (t <= n) {
        cout << t << ' ';
        t *= 2;
    }

    return 0;
}
