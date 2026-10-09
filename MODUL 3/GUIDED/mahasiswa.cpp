#include <iostream>
#include "mahasiswa.h"

using namespace std;
void inputMhs (Mahasiswa &m) {
    cout << "input nim =  ";
    cin >> (m).nim;
    cout << "input nilai1 =  ";
    cin >> (m).nilai1;
    cout << "input nilai2 =  ";
    cin >> (m).nilai2;
}

float rata2 (Mahasiswa m) {
    return float (m.nilai1 + m.nilai2) / 2;
}