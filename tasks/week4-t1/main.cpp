/*
Author: vpetrigo
Task:
���� ������������� �������������� ����� X. �������� ��� ������� �����.

������ ������� ������
�������� ������������� �������������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
17.9
Sample Output:
0.9

*/

#include <iostream>

using namespace std;

int main() {
    double num;

    cin >> num;

    cout << num - static_cast<int> (num);

    return 0;
}
