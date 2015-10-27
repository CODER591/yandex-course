/*
Author: vpetrigo
Task:
� ������� �������� ��������� ����� ������� �������. ��������, ���
���� ���� ����� ����� ������ �� ������, ���� ��� ���� �� �� ��� ������� ������.
� ������� ������ ����������. ��������� ����������, ����� ���������� ����������
��� ����� ������ ���������� ��� �������� ���, ����� �� ���� ������ �� ��� ������������.

������� ������

������� �������� ������ ���� ���������� (����� �������� ������� �� ������ �� ������),
����� ���������� ��� ����� � �������� � ������ ������ ����.
������ � ����������� �����, �� ������������� 100, ���������� ��� ����� � �������� �� ����������� 1000.

�������� ������

�������� ������������ ����� � ������������ ���������� ��� �����.
Sample Input:
26
5
30 35 40 41 42
Sample Output:
3

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fill_vector(vector<int>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        int boots_size;

        cin >> boots_size;
        v.push_back(boots_size);
    }
}

int pass_small_sizes(const vector<int>& v, const int cl_size) {
    int pos = 0;

    while (pos < v.size() && v[pos] < cl_size) {
        ++pos;
    }

    return pos;
}

int main() {
    constexpr int boot_size_step = 3;
    int client_size;
    int boots_num;
    vector<int> boots_sizes;
    int max_cnt = 0;

    cin >> client_size >> boots_num;
    fill_vector(boots_sizes, boots_num);
    sort(boots_sizes.begin(), boots_sizes.end());

    int start_boot = pass_small_sizes(boots_sizes, client_size);

    if (start_boot != boots_sizes.size()) {
        ++max_cnt;
        client_size = boots_sizes[start_boot];
        for (int i = start_boot + 1; i < boots_sizes.size(); ++i) {
            if (client_size + boot_size_step <= boots_sizes[i]) {
                ++max_cnt;
                client_size = boots_sizes[i];
            }
        }
    }

    cout << max_cnt;

    return 0;
}
