#include<iostream>
 using namespace std;
 void penjumlahan(int* a, int* b)
 {
    *a += *b;
    cout<< *a <<endl;
 }

 int main()
 {
    system("cls");

    // //pointer declaration
    // // normal variable -> var_ame(data), &var_name(adress)
    // int number = 16;
    // // pointer variable -> var_name(address of pointed variable), *var_name(data of pointed variable)
    // int *ptrnumber = &number;

    // cout<<"Isi variabel number: "<<number<<endl;
    // cout<<"Alamat variabel number: "<<&number<<endl;

    // cout<<"isi variabel ptrnumber: "<<ptrnumber<<endl;
    // cout<<"Isi var yang ditunjul ptrnumber: "<<*ptrnumber<<endl;

    // //pointer operation
    // *ptrnumber = 37;

    // cout<<"Isi variabel number: "<<number<<endl;
    // cout<<"Alamat variabel number: "<<&number<<endl;

    // cout<<"isi variabel ptrnumber: "<<ptrnumber<<endl;
    // cout<<"Isi var yang ditunjul ptrnumber: "<<*ptrnumber<<endl;

    // cout<<"Alamat variabel ptrnumber: "<<&ptrnumber<<endl;

    //pointer in array
    // int num[]= {1,2,3,4,5};
    // int* ptrnum = num;
    
    // cout<<"Isi variabel num indeks 0 = "<<num[0]<<endl;
    // cout<<"Alamat memori variabel num indeks 0 = "<<&num[0]<<endl;
    // cout<<"Isi var ptrnum = "<<ptrnum<<endl;
    // cout<<"Isi var yg ditunjuk oleh ptrnum = "<<*ptrnum<<endl;

    //pointer as parameter
    // int a = 2;
    // int b = 3;

    // penjumlahan(&a,&b);
    // cout<<a<<endl;

    // pointer to pointer 
    // int n = 4;
    // int* ptrn = &n;
    // int** ptr_ptrn = &ptrn;

    // cout<<"Isi var n = "<<n<<endl;
    // cout<<"Alamat var n = "<<&n<<endl;
    // cout<<"Isi var ptrn = "<<ptrn<<endl;
    // cout<<"Isi var yg ditunjuk ptrn = "<<*ptrn<<endl;
    // cout<<"Alamat var ptrn = "<<&ptrn<<endl;

    // cout<<endl;

    // cout<<"Isi variabel ptrn_ptrn = "<< ptr_ptrn<<endl;
    // cout<<"Isi var yg ditunjuk ptrn = "<< *ptr_ptrn<<endl;
    // cout<<"Isi var n diakses dari ptr_ptrn= "<< **ptr_ptrn<<endl;
    // cout<<"Almat memori ptr_ptrn = "<< &ptr_ptrn<<endl;

    //dynamic pointer (bisa sendirian tanpa ada yg ditunjuk)
    int* ptr = new int; //menyediakan memori untuk var pointer
    *ptr = 24;
    cout<<"Isi var ptr = "<<ptr<<endl;
    cout<<"Data yang ada di var ptr= "<<*ptr<<endl;
    delete ptr; //menghapus memori
    cout<<"Isi var ptr = "<<ptr<<endl;
    cout<<"Data yang ada di var ptr= "<<*ptr<<endl;
 }  