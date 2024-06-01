#include<iostream>
using namespace std;
int main()
{
    //goto untuk melompat langsung ke bagian dari kode yang ingin dituju    

    // a:
    // cout<<"Saya ";
    // goto c;

    // b:
    // cout<<"Silalahi";
    // return 0;

    // c:
    // cout<<"Damai";
    // goto b;

    // d:
    // cout<<"Marga";
    // goto b;

    int i=1;
    loop:
    cout<<i<<endl;
    i++;

    if(i<=10)
    {
        goto loop; // Mengulang loop jika i masih kurang dari atau sama dengan 10
    }
}