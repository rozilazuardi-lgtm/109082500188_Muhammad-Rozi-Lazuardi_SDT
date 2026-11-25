#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    Queue Q;
    createQueue(Q);

    cout << "------------------------" << endl;
    cout << "H - T | Queue Info" << endl;
    cout << "------------------------" << endl;

    printInfo(Q);

    enqueue(Q, 5);
    enqueue(Q, 2);
    enqueue(Q, 7);
    enqueue(Q, 4);
    enqueue(Q, 8);
    printInfo(Q);

    dequeue(Q);
    dequeue(Q);
    printInfo(Q);

    enqueue(Q, 9);
    enqueue(Q, 6);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    return 0;
}