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

// tampil hasil prima
void hasilPrima() {
    if (prima(n)) {
        cout << "Bilangan prima\n";
    } else {
        cout << "Bukan bilangan prima\n";
    }
}

// tampil hasil fibonacci
void hasilFibo() {
    if (fibonacci(n)) {
        cout << "Bilangan fibonacci\n";
    } else {
        cout << "Bukan bilangan fibonacci\n";
    }
}

// menu
void menu() {
 cout << "\nMenu:\n";
    cout << "1. Cek Prima\n";
    cout << "2. Cek Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih: ";
}

int main() {

    while (true) {
        menu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                input();
                hasilPrima();
                break;
            case 2:
                input();
                hasilFibo();
                break;

        case 0:
                cout << "Keluar program\n";
                break;

            default:
                cout << "pilihan tidak valid\n";
        }

        if (pilihan == 0) {
            break;
        }
    }

}    