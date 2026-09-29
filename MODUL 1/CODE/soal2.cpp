#include <iostream>
#include <string>
using namespace std;

string teks[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

void konversi(int n) {
    if (n == 0) cout << "nol";
    else if (n == 10) cout << "sepuluh";
    else if (n == 11) cout << "sebelas";
    else if (n == 100) cout << "seratus";
    else if (n < 10) cout << teks[n];
    else if (n < 20) cout << teks[n % 10] << " belas";
    else cout << teks[n / 10] << " puluh " << teks[n % 10];
    cout << endl;
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    if (angka >= 0 && angka <= 100) {
        cout << angka << " : ";
        konversi(angka);
    }
    return 0;
}