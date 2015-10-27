/*
Author: vpetrigo
Task:
���������� �������� �������� ������ ������
(A[0] ��������� �� ����� A[1], A[1] �� ����� A[2], ..., ��������� ������� ��������� �� ����� A[0]).

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 2 3 4 5
Sample Output:
5 1 2 3 4

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    int last = v.size() - 1;
    int tmp = v[last];

    for (int i = last - 1; i >= 0; --i) {
        v[i + 1] = v[i];
    }

    v[0] = tmp;

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}
