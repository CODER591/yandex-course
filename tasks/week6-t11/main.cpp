/*
Author: vpetrigo
Task:
�� ������ ������ n � m ��������� ��������� ������ 
�������� n?m ������� �� 1 �� n?m ������������, ��� �������� � �������.

������ ������� ������
�������� ��� ����� n � m, �� ����������� 100.

������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.

Sample Input:
3 5
Sample Output:
1   2   4   7  10
3   5   8  11  13
6   9  12  14  15

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

    for (int i = 0; i < m; ++i) {
        for (int j = i, k = 0; j >= 0 && k < n; --j, ++k) {
            arr[k][j] = num++;
        }
    }

    for (int i = 1; i < n; ++i) {
        for (int j = m - 1, k = i; j >= 0 && k < n; --j, ++k) {
            arr[k][j] = num++;
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