/*
Author: vpetrigo
Task:
��� ������, ������������� �� ���������� ��������� � ���. ����������, ������� � ��� ��������� ���������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
6
1 2 2 3 3 3
Sample Output:
3

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; cin >> q; ++i) {
        st.push_back(q);
    }

    int cnt = 1;
    for (int i = 1; i < st.size(); ++i) {
        if (st[i - 1] != st[i]) {
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}