#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi panjang
double hitungLuas(double panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi untuk menampilkan pesan selamat datang
void pesanSelamatDatang() {
    cout << "Selamat datang di program perhitungan luas persegi panjang!\n";
}

int main() {
    pesanSelamatDatang(); // Memanggil fungsi pesanSelamatDatang() untuk menampilkan pesan
    double panjang, lebar;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    // Memanggil fungsi hitungLuas() dan menampilkan hasilnya
    cout << "Luas persegi panjang adalah: " <<
        hitungLuas(panjang, lebar) << endl;
    return 0;
}
