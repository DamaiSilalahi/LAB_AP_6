#include<iostream>
using namespace std;
int main()
{
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
        goto loop;
    }
}