#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

struct Mahasiswa {
    char nim [10];
    int nilai1, nilai2;
};

void inputMhs (Mahasiswa &m) ;
float rata2 (Mahasiswa m) ;
#endif