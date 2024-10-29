#include <iostream>

using namespace std;

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int terbesar = angka[0];

    for (int i = 1; i < 5; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    cout << "Nilai terbesar dalam array adalah: " << terbesar << endl;

    return 0;
}
