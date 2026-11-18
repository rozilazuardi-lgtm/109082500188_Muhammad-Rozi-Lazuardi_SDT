#include "stack.h"

int isEmpty(Stack S) {
    if (S.Top == 0) {
        return 0; 
    } else {
        return 1; 
    }
}

void createStack(Stack &S) {
    S.Top = 0; 
}

void push(Stack &S, infotype X) {
    if (S.Top < 10) {
        S.Top = S.Top + 1;
        S.info[S.Top - 1] = X; 
    } else {
        cout << "Stack Penuh, data tidak dapat ditambahkan" << endl;
    }
}

void pop(Stack &S, infotype &X) {
    if (isEmpty(S) != 0) {
        X = S.info[S.Top - 1]; 
        S.Top = S.Top - 1; 
    } else {
        cout << "Stack Kosong, tidak ada data yang dapat diambil" << endl;
    }
}

void viewStack(Stack S) {
    if (isEmpty(S) == 0) {
        cout << "Stack Kosong" << endl;
    } else {
        cout << "Isi Stack: " << endl;
        for (int i = S.Top; i >= 1; i--) {
            cout << i << ". " << S.info[i - 1].nim << " - " << S.info[i - 1].nama << endl;
        }
    }
}