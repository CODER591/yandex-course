/*
Author: vpetrigo
Task:
�� ���������� ������� ����������, �������� �� �� ������.

������� ������

�������� ����������� ������.

�������� ������

�������� "yes", ���� ������ �������� ������ � "no" � ��������� ������. �������� ��������, ��� ����� ����� �������� ���������� �������.

Sample Input 1:
1
Sample Output 1:
yes

Sample Input 2:
a
Sample Output 2:
no

*/

#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (isdigit(c)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}