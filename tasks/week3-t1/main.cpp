/*
Author: vpetrigo
Task:
�� ������� ������ ����� N ������������ ��� 
�������� ����������� �����, �� ������������� N, � ������� �����������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
50
Sample Output:
1 4 9 16 25 36 49

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int a = 1;
    int sq = a * a;
    
    cin >> n;

    while (sq <= n) {
        cout << sq << ' ';
        ++a;
        sq = a * a;
    }

    return 0;
}