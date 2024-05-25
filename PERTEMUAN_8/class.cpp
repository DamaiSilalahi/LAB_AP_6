//sama dengan struct, tapi class bisa masukkan function

#include<iostream>
#include <vector>
using namespace std;

class Mahasiswa {
    // access modifier
    private:
        string nama, nim;
        float nilai;
    
    // access modifier
    public:
        // constructor method nya wajib diisi semua
        Mahasiswa(string nama, string nim, float nilai) {
        this-> nama = nama;
        this-> nim = nim;
        this-> nilai = nilai;
    }

    // getter method untuk mendapatkan nilai
    string getNama(){
        return this-> nama;
    }

    string getNim(){
        return this->nim;
    }

    float getNilai(){
        return this->nilai;
    }

    void display() {
        cout<<"Nama : "<<this->getNama()<<endl;
        cout<<"NIM : "<<this->getNim()<<endl;
        cout<<"Nilai : "<<this->getNilai()<<endl;
    }
};

int main()
{
    system("cls");

    // Mahasiswa mhs("Andi", "231401001", 87.2); // bisa juga dipanggil instansiasi
    // mhs.display();

    // cout<< mhs.nama<<endl;

    // cout<<mhs.getNama()<<endl;
    // cout<<mhs.getNim()<<endl;
    // cout<<mhs.getNilai()<<endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout<<"Masukkan jumlah mahasiswa: ";
    cin>>n;

    for (int i=0; i<n ; i++){
        cout<<"Mahasiswa "<<i+1<<endl;

        cin.get();

        cout<<"masukkan nama: ";
        getline(cin, nama);

        cout<<"Masukkan NIM: ";
        cin>>nim;

        cout<<"Masukkan Nilai: ";
        cin>>nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }
    for (int i=0; i<n; i++){
        cout<<"Mahasiswa "<<i+1<<endl;
        mahasiswa[i].display();
    }
}