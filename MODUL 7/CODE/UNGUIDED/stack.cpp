#include <iostream>
#include "stack.h"

using namespace std;

void createStack(Stack &s) {
    s.top = -1;
}

void push(Stack &s, infotype x) {
    if (s.top < 19) {
        s.top++;
        s.info[s.top] = x;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

infotype pop(Stack &s) {
    if (s.top >= 0) {
        infotype x = s.info[s.top];
        s.top--;
        return x;
    } else {
        cout << "Stack kosong!" << endl;
        return -1;
    }
}

void printInfo(Stack s) {
    cout << "[TOP] ";

    for (int i = s.top; i >= 0; i--) {
        cout << s.info[i] << " ";
    }

    cout << endl;
}

void balikStack(Stack &s) {
    int kiri = 0;
    int kanan = s.top;

    while (kiri < kanan) {
        infotype temp = s.info[kiri];
        s.info[kiri] = s.info[kanan];
        s.info[kanan] = temp;

        kiri++;
        kanan--;
    }
}

void pushAscending(Stack &s, infotype x) {
    if (s.top < 19) {
        int i = s.top;

        while (i >= 0 && s.info[i] > x) {
            s.info[i + 1] = s.info[i];
            i--;
        }

        s.info[i + 1] = x;
        s.top++;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

void getInputStream(Stack &s) {
    char input;

    cout << "Masukkan angka: ";

    while (cin.get(input) && input != '\n') {
        if (input >= '0' && input <= '9') {
            push(s, input - '0');
        }
    }
}