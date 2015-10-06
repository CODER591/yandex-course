/*
Author: vpetrigo
Task:
������������������ ������� �� ����������� �����
� ����������� ������ 0.
����������, ����� ���������� ��������� ���� ������������������, ����� �� ����������� ��������.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
1
7
9
0
Sample Output 1:
1

Sample Input 2:
1
3
3
1
0
Sample Output 2:
2

*/

#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    int max = -1;

    while (cin >> n && n != 0) {
        if (max < n) {
            count = 1;
            max = n;
        }
        else if (n == max) {
            ++count;
        }
    }

    cout << count;

    return 0;
}