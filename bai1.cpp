#include <bits/stdc++.h>
using namespace std;

int main() {
    float diem;
    cin >> diem;
    if (0 <= diem <= 10) {
        if (diem >= 8) {
            cout << "Gioi";
        }
        else if (diem >=6.5) {
            cout << "Kha";
        } else if (diem >= 5) {
            cout << "Trung binh";
        } else {
            cout << "Yeu";
        }
    }
    else {
        cout << "Diem khong hop le";
    }
return 0;
}