/*
Author: vpetrigo
Task:
������� � ���� ������ ����� ������� ����� � �������� ���.

������� ������

�������� ���� ������. ����� � ��� �������� ����� ��������.

�������� ������

�������� ����� ������� �����. ���� ����� ���� ���������, 
�� �������� �����, ������� ����������� ������.

Sample Input:
Everyone of us has all we need

Sample Output:
Everyone

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string longest_word;

    while (cin >> word) {
        if (longest_word.empty() || word.size() > longest_word.size()) {
            longest_word = word;
        }
    }

    cout << longest_word;

    return 0;
}