/*
Author: vpetrigo
Task:
�������� �������� ����������� �� ���� ������������� ��������� � �������. 
��������, ��� � ������� ���� ���� �� ���� ������������� �������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
5 -4 3 -2 1
Sample Output:
1

*/

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    while (cin >> q) {
        st.push_back(q);
    }

    int min_pos = numeric_limits<int>::max();

    for (int i = 1; i < st.size(); ++i) {
        if (st[i] > 0 && st[i] < min_pos) {
            min_pos = st[i];
        }
    }

    cout << min_pos;

    return 0;
}