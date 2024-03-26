#include <iostream>
using namespace std;
// Mendefinisikan class Mahasiswa
class Mahasiswa
{
public:
    // Data member
    string nama;
    int usia;
    // Member function
    void displayInfo()
    {
        cout << "Nama: " << nama << endl;
        cout << "Usia: " << usia << endl;
    }
};
int main()
{
    // Membuat objek dari class Mahasiswa
    Mahasiswa mhs1; // Mengatur data member objek mhs1
    mhs1.nama = "ARJUN";
    mhs1.usia = 19;
    // Memanggil member function untuk menampilkan informasi mahasiswa
    mhs1.displayInfo();
    return 0;
}