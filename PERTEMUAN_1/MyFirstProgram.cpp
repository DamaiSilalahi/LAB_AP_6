#include <iostream>
#include<iomanip>
using namespace std;

int main ()
{
    string nama;
    int nim;
    char kom;
    float ip;
    
    system("CLS");
    
    cout<<"Hello World"<<endl;
    
    cout<<"Masukkan Nama : ";
   //cin>> nama;
   getline(cin,nama); // getline digunakan untuk membaca string termasuk spasi
   
    cout<<"Masukkan Nim : ";
    cin>> nim;
    
    cout<<"Masukkan Kom : ";
    cin>> kom;
    
    cout<<"Masukkan IP : ";
    cin>> ip;
    
    cout<< " Nama : "<< nama <<endl;
    cout<< " Nim : "<< nim <<endl;
    cout<< " Kom : "<< kom <<endl;
    cout<<fixed;
    cout<<setprecision(2); // mengatur jumlah angka desimal
    cout<< " IP : "<< ip <<endl;
    return 0;
}