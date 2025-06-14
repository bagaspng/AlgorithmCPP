#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan angka: ";
    cin >> n;

    for (int baris = n; baris >= 1; baris--) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

