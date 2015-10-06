/*
Author: vpetrigo
Task:
������������������ ��������� ������������ ���:
F(0) = 0, F(1) = 1, �, F(n) = F(n?1) + F(n?2).
�� ������� ����� N ���������� N-� ����� ��������� F(N).

������ ������� ������
�������� ����������� ����� N.

������ �������� ������
�������� ����� �� ������.

Sample Input:
6
Sample Output:
8

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int f_0 = 0;
    int f_1 = 1;

    cin >> n;

    while (--n) {
        int tmp = f_1;
        
        f_1 += f_0;
        f_0 = tmp;
    }

    cout << f_1;


    return 0;
}