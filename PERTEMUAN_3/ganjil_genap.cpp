#include <iostream>

using namespace std;

int main() {
    int angka;
    string tipe;

    cout << "Masukkan angka: ";
    cin >> angka;

    tipe = (angka % 2 == 0) ? "Genap" : "Ganjil"; // Menentukan tipe berdasarkan kondisi (genap atau ganjil)
    cout << tipe << endl;

    return 0;
}