#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim = "202201401102";
    mhs.nama = "Abra Yudhistira";
    mhs.alamat = "Kasihan";

    cout << "Masukkan nim = ";
    cin >> mhs.nim;
    cout << "Masukkan nama = ";
    cin >> mhs.nama;
    cout << "Masukkan alamat = ";
    cin >> mhs.alamat;

    // menampilkan data struct
    cout << endl;
    cout << "nim = " << mhs.nim << endl;
    cout << "nama = " << mhs.nama << endl;
    cout << "alamat = " << mhs.alamat << endl;
    
}