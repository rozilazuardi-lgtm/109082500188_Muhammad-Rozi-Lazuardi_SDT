#include <iostream>
using namespace std;

void tukarReference3(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void tukarPointer3(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x = 5, y = 10, z = 15;

    cout << "Kondisi Awal: x = " << x << ", y = " << y << ", z = " << z << endl;

    tukarReference3(x, y, z);
    cout << "Setelah tukarReference3: x = " << x << ", y = " << y << ", z = " << z << endl;

    tukarPointer3(&x, &y, &z);
    cout << "Setelah tukarPointer3: x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}