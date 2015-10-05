/*
Author: vpetrigo
Task:
���� ����������� ����� N. �������� ����� YES, 
���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
1
Sample Output 1:
YES

Sample Input 2:
2
Sample Output 2:
YES

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int t = 1;

    while (t != n && t <= n) {
        t *= 2;
    }

    if (t == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}