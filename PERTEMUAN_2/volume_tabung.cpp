#include <iostream>

using namespace std;

int main() {
    const float PHI = 3.14;

    float r, t, v;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    cout << "Masukkan tinggi : ";
    cin >> t;

    v = PHI * r * r * t;

    cout << "Volume = " << v << endl;
    return 0;
}