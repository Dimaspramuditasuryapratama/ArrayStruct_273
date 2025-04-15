#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs;

    cout << "Masukkan nim = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukkan nama = ";
    getline(cin , mhs.nama);
    cout << "Masukkan alamat = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat kota = ";
    cin >> mhs.alamat.kota;

    // menampilkan data struct
    cout << endl;
    cout << "nim = " << mhs.nim << endl;
    cout << "nama = " << mhs.nama << endl;
    cout << "alamat = " << mhs.alamat.desa<< endl;
    cout << "kota = " << mhs.alamat.kota << endl;
    
}