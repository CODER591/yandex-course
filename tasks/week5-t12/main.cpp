/*
Author: vpetrigo
Task:
��� ������. �������� �� ��� ��������, ������� ����������� � ������� ������ ���� ���. 
�������� ����� �������� � ��� �������, � ������� ��� ����������� � ������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
6
1 2 2 3 3 3
Sample Output:
1

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;
    vector<int> unique;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    bool u = true; // is element unique

    for (int i = 0; i < v.size(); ++i) {
        swap(v[0], v[i]);

        for (int j = 1; j < v.size() && u; ++j) {
            if (v[0] == v[j]) {
                u = false;
            }
        }
        
        swap(v[0], v[i]);

        if (u) {
            unique.push_back(v[i]);
        }

        u = true;
    }

    for (int i = 0; i < unique.size(); ++i) {
        cout << unique[i] << ' ';
    }

    return 0;
}