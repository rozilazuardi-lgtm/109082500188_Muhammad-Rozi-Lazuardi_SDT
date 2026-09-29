#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;

    cout << "Penjumlahan : " << a + b << endl
         << "Pengurangan : " << a - b << endl
         << "Perkalian   : " << a * b << endl
         << "Pembagian   : ";
    (b != 0) ? cout << a / b << endl : cout << "Tidak terdefinisi" << endl;

    return 0;
}