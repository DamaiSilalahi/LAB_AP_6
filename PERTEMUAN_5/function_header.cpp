#include <iostream>
#include "operasi_baru.h"
#include "preprocessor.h"

uns;

void sayHello(string name) {
    cout<<"Hello "<<name<<endl;
}

void garis() {
    cout<<"====="<<endl;
}

void bintang(){
    cout<<"****"<<endl;
}

int main()
{
    system("cls");
    sayHello("AP6");
    garis();
    bintang();
    cout<<tambah(2,3)<<endl;
    cout<<kurang(2,3)<<endl;
    cout<<kali(2,3)<<endl;
    cout<<bagi(2,3)<<endl;
    cout<<phi<<endl;
    return 0;
}