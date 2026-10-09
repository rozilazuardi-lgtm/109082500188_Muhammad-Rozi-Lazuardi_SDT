#ifndef NILAIMAHASISWA_H
#define NILAIMAHASISWA_H
#include <string>

using namespace std;

struct Mhs {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float akhir;
};

void inputData(Mhs &m);
void tampilData(Mhs m);

#endif