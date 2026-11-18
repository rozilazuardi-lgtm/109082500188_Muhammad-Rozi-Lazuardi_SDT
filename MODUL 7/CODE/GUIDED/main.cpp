#include <iostream>
#include <cstring>
#include "stack.h"
using namespace std;

int main() {
    Stack S;
    infotype data, hasil;

    createStack(S);
    cout << "Stack baru dibuat, Top = " << S.Top << endl;
    viewStack(S);

    cout << endl << "---Push 3 Data---" << endl;
    strcpy(data.nim, "109082500202");
    strcpy(data.nama, "Andi");
    push(S, data);

    strcpy(data.nim, "109082500203");
    strcpy(data.nama, "Budi");
    push(S, data);

    strcpy(data.nim, "109082500204");
    strcpy(data.nama, "Citra");
    push(S, data);
    viewStack(S);

    cout << endl << "---Pop 1 Data---" << endl;
    pop(S, hasil);
    cout << "Data yang di ambil: " << hasil.nim << " - " << hasil.nama << endl;
    viewStack(S);

    cout << endl << "---Pop sampai kosong---" << endl;
    pop(S, hasil);
    pop(S, hasil);
    pop(S, hasil); 
    viewStack(S);

    return 0;
}