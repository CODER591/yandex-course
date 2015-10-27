/*
Author: vpetrigo
Task:
�� ������ ������ n � m ��������� ��������� ������ �������� n?m ������� �� 1 �� n?m ��������, ��� �������� � �������.
������ ������� ������
�������� ��� ����� n � m, ������ �� ������� �� ��������� 20.
������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.
Sample Input:
3 5
Sample Output:
1   2   3   4   5
10   9   8   7   6
11  12  13  14  15

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 20;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                arr[i][j] = num++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; --j) {
                arr[i][j] = num++;
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
