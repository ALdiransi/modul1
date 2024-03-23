#include <stdio.h>
// struct
struct mahasiswa
{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    // menggunakan struct
    struct mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "dian";
    mhs1.address = "mataram";
    mhs1.age = 22;
    mhs2.name = "bambang";
    mhs2.address = "surabaya";
    mhs2.age = 23;
    // mencetak isi struct
    printf("## mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
