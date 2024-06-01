#include<iostream>
using namespace std;
main()
{
    int i,y;
    // for (i=1; i<=10; i++)
    // {
    //     cout<<"ILKOM"<<endl;
    // }

    // for (i=1; i<=20; i++)
    // {
    //     if (i %2 ==0 )
    //     {
    //         cout<<i<<"."<<endl;
    //     }
    // }

    // for (i=1; i<=4; i++)
    // {
    //     for (y=1; y<=4; y++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }

    // for (i=1; i<=4; i++)
    // {
    //     for (y=1; y<=i; y++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int suku, num=0, sum=0 ;
    cout<<"Masukkan suku ke-: ";
    cin>>suku;


    for (i=1; i<=suku; i++)
    {
        if (i % 2 == 0)
        {
            num=num; // Jika i genap, num tetap
        }
        else {
            num +=5; // Jika i ganjil, num ditambah 5
            
        }
        sum +=num; // Menambahkan num ke sum
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"Nilai terakhir dari suku ke"<< suku<<":"<<num<<endl;
    cout<<"Jumlah sampai suku ke- "<<suku<<":"<<sum;

    
}