#include <iostream>
using namespace std;
//function -> fungsi yang memiliki nilai kembalian

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int bagi(int a, int b);
void sayHello(string name);
void garis();
void bintang();

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
    return 0;
}


int tambah(int a, int b) {
    return a + b;

}

int kurang(int a, int b){
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

int bagi(int a, int b) {
    // //jarang dipakai
    // return (float) a / (float) b;  //type casting
    
    //sering dipakai
    return static_cast<float>(a)/ static_cast<float>(b);//type casting
}

//procedure -> Fungsi yang tidak memilki nilai kemmbalian
void sayHello(string name) {
    cout<<"Hello "<<name<<endl;
}

void garis() {
    cout<<"====="<<endl;
}

void bintang(){
    cout<<"****"<<endl;
}
