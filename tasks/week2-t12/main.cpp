/*
Author: vpetrigo
Task:
��� ������ � �������� �������� N?M ������ � �����.
� ���� ������ �� ���������, ��� ��������� �� ���������� X
������ �� ������ �� ������� ��������(�� ����������� �� ����������) �
Y ������ �� ������ �� �������� ��������.
����� ����������� ���������� ������ �������� ���, ����� ��������� �� �������� �� ������ ?

������ ������� ������
��������� �������� �� ���� ����� N, M, X, Y.

������ �������� ������
��������� ������ ������� ����� ������, ������� ����� �������� ��� �� �������.

Sample Input :
23
52
8
43
Sample Output :
8

*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    int dist_l, dist_s;

    if (n > m) {
        dist_l = min(abs(n - y), y);
        dist_s = min(abs(m - x), x);
    }
    else {
        dist_l = min(abs(m - y), y);
        dist_s = min(abs(n - x), x);
    }

    if (dist_l < dist_s) {
        cout << dist_l;
    }
    else {
        cout << dist_s;
    }

    return 0;
}
