#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    // Meminta pengguna untuk memasukkan operator dan dua angka
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // Memulai pemilihan kasus berdasarkan operator yang dimasukkan
    switch (op)
    {
    // Jika pengguna memasukkan operator +
    case '+':
        cout << "Result: " << num1 + num2;
        break;
    // Jika pengguna memasukkan operator -
    case '-':
        cout << "Result: " << num1 - num2;
        break;
    // Jika pengguna memasukkan operator *
    case '*':
        cout << "Result: " << num1 * num2;
        break;
    // Jika pengguna memasukkan operator /
    case '/':
        // Mengecek apakah num2 tidak sama dengan 0
        if (num2 != 0)
            cout << "Result: " << num1 / num2;
        // Jika num2 sama dengan 0, tampilkan pesan kesalahan
        else
            cout << "Error! Cannot divide by zero!";
        break;
    // Jika operator yang dimasukkan tidak valid
    default:
        cout << "Error! Operator is not correct!";
    }
    return 0;
}