/*
Author: vpetrigo
Task:
N ������ ��������� � ���� ���, ����������� �� ����� ������� ������� �� 1 �� N. 
����� �� ����� ���� ������� K �����, ��� ���� i-� ��� ���� ��� ����� � �������� �� 
li �� ri ������������. ����������, ����� ����� �������� ������ �� �����.

������ ������� ������
��������� �������� �� ���� ���������� ������ N � ���������� ������� K. 
����� ���� K ��� ����� li, ri, ��� ���� 1 ? li, ri ? N.

������ �������� ������
��������� ������ ������� ������������������ �� N ��������, 
��� j-� ������ ���� �I�, ���� j-� ����� �������� ������, ��� �.�, ���� j-� ����� ���� �����.

Sample Input:
10 3
8 10
2 5
3 6
Sample Output:
I.....I...

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    vector<int> keg;
    vector<int> throws;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        keg.push_back(0);
    }

    for (int i = 0; i < k; ++i) {
        int f, l;

        cin >> f >> l;
        throws.push_back(f);
        throws.push_back(l);
    }

    for (int i = 0; i < throws.size(); i += 2) {
        for (int j = throws[i] - 1; j < throws[i + 1]; ++j) {
            keg[j] = 1;
        }
    }

    for (int i = 0; i < keg.size(); ++i) {
        if (!keg[i]) {
            cout << 'I';
        }
        else {
            cout << '.';
        }
    }

    return 0;
}