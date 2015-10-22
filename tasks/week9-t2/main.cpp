/*
Author: vpetrigo
Task:
�� ������� ������ �������� ������������������ ����� ����� ������. 
��� ������� ����� �������� ����� YES (� ��������� ������), 
���� ��� ����� ����� ����������� � ������������������ ��� NO, ���� �� �����������.

������� ������

�������� ����� N - ���������� ��������� ������, � ����� N �����.

�������� ������

�������� ����� �� ������.

Sample Input:
6
1 2 3 2 3 4
Sample Output:
NO
NO
NO
YES
YES
NO

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        if (s.find(n) == s.end()) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        s.insert(n);
    }

    return 0;
}