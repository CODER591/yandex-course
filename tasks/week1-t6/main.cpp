/*
Author: vpetrigo
Task:
����� ���� ������������ �����
���� ����� ����������� �����. ������� ����� ��� ����.

������ ������� ������
�� ���� ������ ����� �� 100 �� 999.

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

*/

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    cin >> num;

    while (num) {
        int digit = num % 10;

        sum += digit;
        num /= 10;
    }

    cout << sum << endl;

    return 0;
}
