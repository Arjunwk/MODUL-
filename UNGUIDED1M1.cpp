#include <iostream>
using namespace std;
// Fungsi untuk menghitung volume balok
float hitungVolumeBalok(float panjang, float lebar, float tinggi)
{
    return panjang * lebar * tinggi;
}
// Fungsi untuk menghitung luas permukaan balok
float hitungLuasPermukaanBalok(float panjang, float lebar, float tinggi)
{
    return 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
}
int main()
{
    float panjang, lebar, tinggi;
    cout << "Masukkan panjang balok: ";
    cin >> panjang;
    cout << "Masukkan lebar balok: ";
    cin >> lebar;
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi;
    // Hitung volume balok
    float volume = hitungVolumeBalok(panjang, lebar, tinggi);
    cout << "Volume balok: " << volume << endl;
    // Hitung luas permukaan balok
    float luasPermukaan = hitungLuasPermukaanBalok(panjang, lebar,tinggi);
cout << "Luas permukaan balok: " << luasPermukaan << endl;
return 0;
}