/*
Author: vpetrigo
Task:
��������� �����
���� ����������� �����, �������� ��� ��������� �����.

������ ������� ������
�� ���� ������ ����������� ����� N, �� ������������� 10000.

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

*/

#include <iostream>

using namespace std;

int main() {
    int num;
    const int last_dig = 10;

    cin >> num;

    cout << num % last_dig;

    return 0;
}