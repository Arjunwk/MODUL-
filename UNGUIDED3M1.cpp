#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    // Mendefinisikan map untuk menyimpan jadwal puasa IdulFitri
        map<int, string>jadwal_puasa_idul_fitri;
    // Menambahkan data jadwal puasa Idul Fitri ke dalam map
    jadwal_puasa_idul_fitri[1] = "Hari Pertama";
    jadwal_puasa_idul_fitri[2] = "Hari Kedua";
    jadwal_puasa_idul_fitri[3] = "Hari Ketiga";
    // Menampilkan jadwal puasa Idul Fitri
    cout << "Jadwal Puasa Idul Fitri:\n";
    for (const auto &pair : jadwal_puasa_idul_fitri)
    {
        cout << "Hari ke-" << pair.first << ": " << pair.second
             << endl;
    }
    // Menampilkan jumlah hari puasa Idul Fitri
    cout << "Jumlah Hari Puasa Idul Fitri: " << jadwal_puasa_idul_fitri.size() << endl;
    return 0;
}