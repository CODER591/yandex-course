/*
Author: vpetrigo
Task:
������� ���������� ������������� ��������� � ������ �������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 -2 3 -4 5
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

    for (int i = 0; i < q; ++i) {
        int tmp;
        
        cin >> tmp;

        if (tmp > 0) {
            st.push_back(tmp);
        }
    }

    cout << st.size();

    return 0;
}