#include <iostream>
#include "nilaiMahasiswa.h"

using namespace std;

int main() {
    Mhs data[10];
    int n = 0;
    
    cout << "Berapa data mahasiswa yang ingin dimasukkan (max 10)? : ";
    cin >> n;
    
    if(n > 10) n = 10;
    
    for(int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        inputData(data[i]);
    } 
    
    for(int i = 0; i < n; i++) {
        tampilData(data[i]);
    }
    
    return 0;
}