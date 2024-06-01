#include <iostream>

using namespace std;

int main() {
    int a, b;

    // Assignment Operator
    a = 5;
    b = 7;

    // Arithmetic Operator
    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    // float bagi = a / b;
    // int mod = a % b;

    // cout << "a + b = " << tambah << endl;
    // cout << "a - b = " << kurang << endl;
    // cout << "a * b = " << kali << endl;
    // cout << "a / b = " << bagi << endl;
    // cout << "a % b = " << mod << endl;


    // Relational Operator
    // cout << (a == b) << endl;
    // cout << (a < b) << endl;
    // cout << (a <= b) << endl;
    // cout << (a > b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a != b) << endl;


    // Logical Operator
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // cout << (true || true) << endl;
    // cout << (true || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;

    // cout << !true << endl;   //Memeriksa apakah kondisi bukan true (false)
    // cout << !false << endl;  // Memeriksa apakah kondisi bukan false (true)
    
    // Bitwise Operator
    // cout << (4 & 7) << endl; //AND
    // cout << (4 | 7) << endl; //OR
    // cout << (4 ^ 7) << endl; //XOR
    // cout << (~4) << endl;    //NOT
    // cout << (7 << 2) << endl;//LEFT SHIFT
    // cout << (7 >> 2) << endl;//RIGHT SHIFT


    // Shorthand (Operator Singkat)
    // a = a + 2;
    // a += 2;
    // a -= 2;
    // a *= 2;
    // a /= 2;

    // b = b + 3;
    // b += 3;
    // b -= 3;
    // b *= 3;
    // b /= 3;


    // Increment & Decrement Operator
    // Post Increment
    cout << a++ << endl; // Menampilkan a lalu menambahkan a
    cout << a << endl;

    // Pre Increment
    cout << a << endl;
    cout << ++a << endl;  // Menambahkan a lalu menampilkan a

    cout << endl;

    // Post Decrement
    cout << b-- << endl; // Menampilkan b lalu mengurangi b
    cout << b << endl;

    // Pre Decrement
    cout << b << endl;
    cout << --b << endl; // Mengurangi b lalu menampilkan b
}