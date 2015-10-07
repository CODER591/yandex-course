/*
Author: vpetrigo
Task:
��� ��������� P(x)=anxn + an?1xn?1+ � + a1x + a0 � ����� x. 
��������� �������� ����� ����������, ���������������� ������ �������:

P(x)=(�(((anx + an?1)x + an?2)x + an?3) � )x+ a0

������ ������� ������
������� ��������� �������� �� ���� ����� ��������������� ����� n ? 20, 
����� �������������� ����� x, ����� ������� n+1 ������������ ����� � ������������ ���������� �� �������� � ��������.

������ �������� ������
��������� ������ ������� �������� ����������.

Sample Input 1:
1
0.000
1.000
1.000
Sample Output 1:
1

Sample Input 2:
2
0.500
1.000
1.000
1.000
Sample Output 2:
1.75

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    double x;
    double res = 0;
    double coef;

    cin >> n >> x;

    while (n-- > 0) {
        cin >> coef;
        res += coef;
        res *= x;
    }

    cin >> coef;
    res += coef;
    cout << res;

    return 0;
}