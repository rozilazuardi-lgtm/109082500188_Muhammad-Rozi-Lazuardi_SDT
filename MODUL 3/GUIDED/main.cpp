#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    Mahasiswa mhs;
    inputMhs(mhs);
    cout << "Rata-rata nilai = " << rata2(mhs) << endl;
    return 0;
}