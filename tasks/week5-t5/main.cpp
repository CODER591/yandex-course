/*
Author: vpetrigo
Task:
��� ������ �����. ���� � ��� ���� ��� �������� �������� ������ �����, 
�������� ��� �����. ���� �������� ��������� ������ 
����� ��� - �� �������� ������. ���� ����� ��� ������� ��������� - �������� ������ ����.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input:
5
-1 2 3 -1 -2
Sample Output:
2 3

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;
        
        cin >> tmp;
        st.push_back(tmp);
    }

    bool pair = false;

    for (int i = 1; i < st.size() && !pair; ++i) {
        if (st[i - 1] < 0 && st[i] < 0 || st[i - 1] > 0 && st[i] > 0) {
            cout << st[i - 1] << ' ' << st[i];
            pair = true;
        }
    }

    return 0;
}