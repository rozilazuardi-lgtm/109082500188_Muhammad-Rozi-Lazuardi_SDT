#include <iostream>
#include <iomanip>
#include "Doublylist.h"
using namespace std;

void CreateList(list &L) { 
    L.first = nullptr; 
    L.last = nullptr; 
}

address alokasi(const infotype &x) {
    address P = new elmlist;
    P->info = x;
    P->prev = nullptr; 
    P->next = nullptr;
    return P;
}

void dealokasi(address &P) {
    if (P != nullptr) { 
        delete P; 
        P = nullptr; 
    }
}

void insertFirst(list &L, address P) {
    if (!P) return;
    P->prev = nullptr; 
    P->next = L.first;
    if (L.first) L.first->prev = P;
    else L.last = P;
    L.first = P;
}

void insertLast(list &L, address P) {
    if (!P) return;
    P->next = nullptr; 
    P->prev = L.last;
    if (L.last) L.last->next = P;
    else L.first = P;
    L.last = P;
}

void insertAfter(list &L, address &Prec, address P) {
    if (!Prec || !P) return;
    P->prev = Prec;
    P->next = Prec->next;
    if (Prec->next) Prec->next->prev = P;
    else L.last = P;
    Prec->next = P;
}

void insertBefore(list &L, address &Prec, address P) {
    if (!Prec || !P) return;
    P->next = Prec;
    P->prev = Prec->prev;
    if (Prec->prev) Prec->prev->next = P;
    else L.first = P;
    Prec->prev = P;
}

void printInfo(const list &L) {
    address P = L.first;
    if (!P) {
        cout << "List kosong.\n";
        return;
    }
    cout << "+---------------------------------------+\n";
    cout << "| Kode | Nama            | Tahun        |\n";
    cout << "+---------------------------------------+\n";
    while (P) {
        cout << "| " << left << setw(6) << P->info.kode
             << "| " << setw(15) << P->info.nama
             << "| " << setw(12) << P->info.tahun << "|\n";
        P = P->next;
    }
    cout << "+---------------------------------------+\n";
}

address findElm(const list &L, const string &kode) {
    address P = L.first;
    while (P) {
        if (P->info.kode == kode) return P;
        P = P->next;
    }
    return nullptr;
}

void deleteFirst(list &L, address &P) {
    if (!L.first) { P = nullptr; return; }
    P = L.first;
    L.first = L.first->next;
    if (L.first) L.first->prev = nullptr;
    else L.last = nullptr;
    P->prev = P->next = nullptr;
}

void deleteLast(list &L, address &P) {
    if (!L.last) { P = nullptr; return; }
    P = L.last;
    L.last = L.last->prev;
    if (L.last) L.last->next = nullptr;
    else L.first = nullptr;
    P->prev = P->next = nullptr;
}

void deleteAfter(list &L, address &Prec, address &P) {
    P = nullptr;
    if (!Prec || !Prec->next) return;
    P = Prec->next;
    Prec->next = P->next;
    if (P->next) P->next->prev = Prec;
    else L.last = Prec;
    P->prev = P->next = nullptr;
}

void deleteBefore(list &L, address &Succ, address &P) {
    P = nullptr;
    if (!Succ || !Succ->prev) return;
    P = Succ->prev;
    Succ->prev = P->prev;
    if (P->prev) P->prev->next = Succ;
    else L.first = Succ;
    P->prev = P->next = nullptr;
}