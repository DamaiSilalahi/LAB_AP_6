#include <iostream>

using namespace std;

int main() {
    float panjang, lebar, luas;

    cout << "Masukkan panjang : ";
    cin >> panjang;

    cout << "Masukkan lebar : ";
    cin >> lebar;

    luas = panjang * lebar; // Menghitung luas (panjang x lebar)

    cout << "Luas = " << luas << endl;
}