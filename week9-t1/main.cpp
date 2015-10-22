/*
Author: vpetrigo
Task:
��� ������ ����� �����, ������� ����� ��������� �� 100000 �����. 
����������, ������� � ��� ����������� ��������� �����.

������� ������

�������� ����� N - ���������� ��������� ������, � ����� N �����.

�������� ������

�������� ����� �� ������.

Sample Input:
5
1 2 3 2 1
Sample Output:
3

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        s.insert(n);
    }

    cout << s.size();

    return 0;
}