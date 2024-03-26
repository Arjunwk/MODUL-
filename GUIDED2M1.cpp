#include <iostream>
using namespace std;
// Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    // Menggunakan struct
    Mahasiswa mhs1, mhs2;
    // Mengisi nilai ke struct
    mhs1.name = "arjun";
    mhs1.address = "kalimanah";
    mhs1.age = 19;
    mhs2.name = "ulima";
    mhs2.address = "bukateja";
    mhs2.age = 20;
    // Mencetak isi struct
    cout << "## Mahasiswa 1 ##" << endl;
    cout << "Nama: " << mhs1.name << endl;
    cout << "Alamat: " << mhs1.address << endl;
    cout << "Umur: " << mhs1.age << endl;
    cout << "## Mahasiswa 2 ##" << endl;
    cout << "Nama: " << mhs2.name << endl;
    cout << "Alamat: " << mhs2.address << endl;
    cout << "Umur: " << mhs2.age << endl;
    return 0;
}
