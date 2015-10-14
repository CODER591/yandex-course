/*
Author: vpetrigo
Task:
��� ��������� ������ � ��� �����: i � j. ��������� � ������� ������� � �������� i � j

������ ������� ������
��������� �������� �� ���� ������� ������� n � m, 
�� ������������� 100, ����� �������� �������, ����� ����� i � j.

������ �������� ������
�������� ���������.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
0 1
Sample Output:
12 11 13 14
22 21 23 24
32 31 33 34

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int i_s, j_s;

    cin >> i_s >> j_s;

    for (int i = 0; i < n; ++i) {
        swap(arr[i][i_s], arr[i][j_s]);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
            if (j != m - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}