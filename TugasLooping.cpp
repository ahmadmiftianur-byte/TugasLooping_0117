#include <iostream>
using namespace std;

// variabel global
int n, pilihan;

// cek prima
bool prima(int x) {
    int i = 2;
    if (x <= 1) return false;

    