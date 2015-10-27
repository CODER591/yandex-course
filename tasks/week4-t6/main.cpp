/*
Author: vpetrigo
Task:
���������� ������� �������� ���� ��������� ������������������, ������������� ������ 0.

������ ������� ������
�������� ������������������ ����� �����, ��������������
������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.
Sample Input:
1
7
9
0
Sample Output:
5.66666666667

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cnt = 0;
    int num, seq = 0;

    while (cin >> num && num != 0) {
        seq += num;
        ++cnt;
    }

    cout << setprecision(11);
    cout << static_cast<double> (seq) / cnt;

    return 0;
}
