/*
Author: vpetrigo
Task:
��������� ������
�� ���� ������ ����������� ����� N. �������� ��������� �� ��� ������ �����

������ ������� ������
�� ���� ������ ����� ������������� ����� N, �� ����������� 10000.

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

*/

#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;

    // Option 1
    cout << (num / 2) * 2 + 2 << endl;

    // Option 2
    cout << num + 2 - num % 2 << endl;

    return 0;
}
