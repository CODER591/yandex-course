/*
Author: vpetrigo
Task:
������������ ������.

������� ������

������ ������ ������� ������ �������� ���������� ��������� � ������� N ? 105. 
����� ���� N ����� �����, �� ������������� �� ���������� �������� 109.

�������� ������

�������� ��� ����� � ������� ����������.
Sample Input:
5
5 4 3 2 1
Sample Output:
1 2 3 4 5

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;

        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}