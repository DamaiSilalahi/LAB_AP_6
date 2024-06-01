#include<iostream>
using namespace std;
int main()
{
    int i=1;
    // while (i<=10)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }

     // Perulangan while untuk mencetak angka genap dari 1 sampai 20
    while (i<=20)
    {
        if (i % 2 == 0) // Memeriksa apakah i adalah angka gena
        {
            cout<<i<<" ";
        }
        i++;
    }
}