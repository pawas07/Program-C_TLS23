#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream laporanFile("laporan_pengeluaran.txt", ios::app);

    if (!laporanFile) {
        cout << "Gagal membuka file laporan!" << endl;
        return 1;
    }

    string tanggal, keterangan;
    double jumlah;

    cout << "Masukkan tanggal (dd/mm/yyyy): ";
    cin >> tanggal;
    cin.ignore();

    cout << "Masukkan keterangan: ";
    getline(cin, keterangan);

    cout << "Masukkan jumlah pengeluaran: ";
    cin >> jumlah;

    laporanFile << "Tanggal: " << tanggal << endl;
    laporanFile << "Keterangan: " << keterangan << endl;
    laporanFile << "Jumlah: $" << jumlah << endl;
    laporanFile << "-----------------------------------" << endl;

    cout << "Laporan pengeluaran telah disimpan." << endl;

    laporanFile.close();

    return 0;
}
