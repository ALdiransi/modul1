#include <iostream>
using namespace std;
// Definisi class Mahasiswa
class Mahasiswa
{
public: // Hak akses publik
    string nama;
    int umur;
    void sapa()
    {
        cout << "Halo, saya " << nama << ". Umur saya 
                                         " << umur << " tahun.\n ";
    }
};
int main()
{
    // Membuat objek dari class Mahasiswa
    Mahasiswa mhs1;
    // Mengisi nilai ke anggota variabel
    mhs1.nama = "Dian";
    mhs1.umur = 22;
    // Memanggil metode sapa()
    mhs1.sapa();
    return 0;
}