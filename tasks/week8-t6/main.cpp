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

int word_size(const string& s, int pos) {
    int new_pos = s.find(" ", pos);

    return new_pos - pos;
}

int main() {
    string s;
    int max_len = 0;
    int size = 0;

    getline(cin, s);
    while ((size = word_size(s, size)) > 0) {
        if (max_len < size) {
            
        }
    }

    return 0;
}