/*
Author: vpetrigo
Task:
��� ��� �������, ��������� �� ��� ����. ������ ����� �������� ��������� � 
������� ��� �����. ��� ����� � ������� ��������. 
��� ������ ������� ����� ���������� ��� �������.

������� ������
��������� �������� �� ���� ���������� ��� ��������� N. 
����� ������� N �����, ������ ������ �������� ����� ��� �����-��������. 
����� ����� ������� ���� �����.

�������� ������
��������� ������ ������� ������� � ������� �����.

Sample Input:
3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:
Bye

*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> syn;
    int n;
    string s_word;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        string first, second;

        cin >> first >> second;
        syn[first] = second;
        syn[second] = first;
    }

    cin >> s_word;

    cout << syn[s_word];
    
    return 0;
}