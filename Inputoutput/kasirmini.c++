#include <iostream>
using namespace std;

int main() {
    string nama;
    float harga, total, diskon, total_bayar;
    int jumlah;

    cout << "Masukkan nama barang: ";
    cin >> nama;

    cout << "Masukkan harga barang: ";
    cin >> harga;

    cout << "Masukkan jumlah beli: ";
    cin >> jumlah;

    total = harga * jumlah;

    if (total > 12800) {
        diskon = total * 0.08;
    } else {
        diskon = 0;
    }

    total_bayar = total - diskon;

    cout << "\n===== STRUK PEMBELIAN =====" << endl;
    cout << "Nama barang  : " << nama << endl;
    cout << "Harga satuan : " << harga << endl;
    cout << "Jumlah beli  : " << jumlah << endl;
    cout << "Total harga  : " << total << endl;
    cout << "Diskon       : " << diskon << endl;
    cout << "Total bayar  : " << total_bayar << endl;
    cout << "============================" << endl;

    return 0;
}