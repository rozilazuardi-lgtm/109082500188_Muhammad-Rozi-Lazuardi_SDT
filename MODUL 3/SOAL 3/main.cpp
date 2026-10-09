#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int matriks1[3][3] = {
        {6, 7, 6},
        {9, 9, 1},
        {1, 2, 1}
    };

    int matriks2[3][3] = {
        {1, 2, 1},
        {1, 9, 9},
        {6, 7, 6}
    };

    cout << "Matriks 1 awal:" << endl;
    tampilArray(matriks1);

    cout << "\nMatriks 2 awal:" << endl;
    tampilArray(matriks2);

    tukarPosisiArray(matriks1, matriks2, 1, 1);

    cout << "\nMatriks 1 setelah pertukaran indeks baris 1 dan kolom 1:" << endl;
    tampilArray(matriks1);

    cout << "\nMatriks 2 setelah pertukaran indeks baris 1 dan kolom 1:" << endl;
    tampilArray(matriks2);

    int val1 = 10;
    int val2 = 20;

    cout << "\nNilai penunjuk memori awal penunjuk pertama berisi " << val1 
         << " dan penunjuk kedua berisi " << val2 << endl;

    tukarPointer(&val1, &val2);

    cout << "Nilai penunjuk memori akhir penunjuk pertama berisi " << val1 
         << " dan penunjuk kedua berisi " << val2 << endl;

    return 0;
}