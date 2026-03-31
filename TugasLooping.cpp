#include <iostream>
using namespace std;

// variabel global
int n, pilihan;

// cek prima
bool prima(int x) {
    int i = 2;
    if (x <= 1) return false;

    while (i < x) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// cek fibonacci
bool fibonacci(int x) {
    int a = 0, b = 1, c;

    while (a <= x) {
        if (a == x) {
            return true;
     }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
   
}

// input angka
void input() {
    cout << "Masukkan angka: ";
    cin >> n;
}

