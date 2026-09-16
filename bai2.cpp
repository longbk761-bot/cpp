#include <bits/stdc++.h>
using namespace std;

int main() {
    float diem;
    string khuVuc;
    cin >> diem >> khuVuc;
    if (diem >=20) 
    {
        if (khuVuc == "KV1")
        {
            diem = diem + 0.75;
            cout << diem;
        }
        else if (khuVuc == "KV2")
        {
            diem = diem + 0.5;
            cout << diem;
        }
        else 
        {
            cout << diem;
        }
    }
    else {
        cout << "Khong du dieu kien xet tuyen";
    }
return 0;
}