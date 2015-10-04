/*
Author: vpetrigo
Task:
��������� ���� ����� ������ �Ô � �� ��� ������ �� ��������� 
� ����� ����������� � �� ���� ������ �� �����������, ��� ��������.
���� ��� ��������� ������ ��������� �����, ����������, 
����� �� ���� ������� � ������ ������ �� ������ ����� �����.

������ ������� ������
��������� �������� �� ���� ������ ����� �� 1 �� 8 ������, 
�������� ����� ������� � ����� ������ ������� ��� ������ ������, ����� ��� ������ ������.

������ �������� ������
��������� ������ ������� YES, ���� �� ������ ������ ����� 
���� ����� ������� �� ������ ��� NO � ��������� ������.

Sample Input 1:
1
1
1
4
Sample Output 1 :
NO

Sample Input 2 :
1
1
8
8
Sample Output 2 :
NO

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    int d_x = x1 - x2;
    int d_y = y1 - y2;

    bool step_x = (abs(d_x) == 2);
    bool step_y = (abs(d_y) == 2);
    bool side_x = (abs(d_x) == 1);
    bool side_y = (abs(d_y) == 1);

    if (step_x && side_y) {
        cout << "YES";
    }
    else if (step_y && side_x) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
