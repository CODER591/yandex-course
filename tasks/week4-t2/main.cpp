/*
Author: vpetrigo
Task:
���� ������������� �������������� ����� X. 
�������� ��� ������ ����� ����� ���������� �����.

������ ������� ������
�������� ������������� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1.79
Sample Output:
7

*/

#include <iostream>

using namespace std;

int main() {
    double num;

    cin >> num;

    double frac = num - static_cast<int> (num);

    cout << static_cast<int> (frac * 10);

    return 0;
}