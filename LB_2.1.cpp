#include <iostream>
using namespace std;

int main() {
    double x, z, Y;

    // �������� ������� ������ x �� z
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "������ �������� z: ";
    cin >> z;

    // ���������� �������� Y ������� �� x
    if (x <= 1) {
        Y = (6 * z * z - 5) / 3;
    }
    else {
        Y = (5 * z * z - 4) / 12;
    }

    // ��������� ����������
    cout << "�������� Y: " << Y << endl;

    return 0;
}
