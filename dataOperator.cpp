#include <iostream>
#include <cmath> // untuk pow
using namespace std;

int main() {
    double bunga = 5; // persen per tahun
    double jumlahPinjaman = 1000000;
    int jumlahTahun = 10;

    double r = bunga / 100.0 / 12; // bunga per bulan
    int n = jumlahTahun * 12;      // total bulan

    double pembayaran = (jumlahPinjaman * r) / (1 - pow(1 + r, -n));

    cout << "Pembayaran per bulan adalah: " << pembayaran << endl;

    return 0;
}
