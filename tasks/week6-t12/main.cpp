/*
Author: vpetrigo
Task:
���� ����� n � m. ��������� ������ �������� n ? m � ��������� �������:
������ ������ ����� ��������� ������, � ������� ����� - ��������� �������
������������ ���� ������ ����, ����� �������. � ����� ������� ���� �������� ����� 1.

������ ������� ������
�������� ��� ����� n � m, �� ����������� 100.

������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.
Sample Input:
3 5
Sample Output:
1   0   2   0   3
0   4   0   5   0
6   0   7   0   8

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i + j) % 2 == 0) {
                arr[i][j] = num++;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
