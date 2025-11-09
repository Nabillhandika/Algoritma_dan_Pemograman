#include <iostream>
using namespace std;

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float hadir, float forum, float tugasInd, float tugasKel, float uts, float uas, float project) {
    float total;
    total = (hadir + forum + tugasInd + tugasKel + uts + uas + project) / 7; // rata-rata sederhana
    return total;
}

// Fungsi untuk menentukan huruf mutu
char tentukanHurufMutu(float nilaiAkhir) {
    if (nilaiAkhir >= 85) {
        return 'A';
    } else if (nilaiAkhir >= 70) {
        return 'B';
    } else if (nilaiAkhir >= 55) {
        return 'C';
    } else if (nilaiAkhir >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    string nim, nama;
    float hadir, forum, tugasInd, tugasKel, uts, uas, project;
    float nilaiAkhir;
    char hurufMutu;

    cout << "===============================" << endl;
    cout << "    MENGHITUNG NILAI AKHIR     " << endl;
    cout << "===============================" << endl;

    cout << "NIM   : ";
    cin >> nim;
    cout << "NAMA  : ";
    cin.ignore(); 
    getline(cin, nama);

    cout << endl;
    cout << "NILAI KEHADIRAN      : ";
    cin >> hadir;
    cout << "NILAI FORUM          : ";
    cin >> forum;
    cout << "NILAI TUGAS INDIVIDU : ";
    cin >> tugasInd;
    cout << "NILAI TUGAS KELOMPOK : ";
    cin >> tugasKel;
    cout << "NILAI UTS            : ";
    cin >> uts;
    cout << "NILAI UAS            : ";
    cin >> uas;
    cout << "NILAI PROJECT        : ";
    cin >> project;

    // Hitung nilai akhir
    nilaiAkhir = hitungNilaiAkhir(hadir, forum, tugasInd, tugasKel, uts, uas, project);

    // Tentukan huruf mutu
    hurufMutu = tentukanHurufMutu(nilaiAkhir);

    cout << endl;
    cout << "[ " << nim << " " << nama << " ]" << endl;
    cout << "NILAI AKHIR : " << nilaiAkhir << endl;
    cout << "HURUF MUTU  : " << hurufMutu << endl;

    cout << "===============================" << endl;

    return 0;
}
