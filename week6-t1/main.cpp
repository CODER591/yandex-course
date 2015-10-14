/*
Author: vpetrigo
Task:
������� ������� ������� ��������� ������������� ��������.

������ ������� ������
��������� �������� �� ���� ������� ������� n � m, ����� n ����� �� m ����� � ������. n � m �� ��������� 100.

������ �������� ������
�������� ��� �����: ����� ������ � ����� �������, � ������� ����� 
���������� ������� � ��������� �������. ���� ����� ��������� ���������, 
�� ��������� ���, � �������� ������ ����� ������, � ���� ������ ����� 
����� �� ���, � �������� ������ ����� �������.

Sample Input:
3 4
0 3 2 4
2 3 5 5
5 1 2 3
Sample Output:
1 2

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int n, m;
    int arr[size][size];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int max_i = 0, max_j = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << max_i << ' ' << max_j;

    return 0;
}