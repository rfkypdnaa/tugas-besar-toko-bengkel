#include <iostream>
using namespace std;

struct Kalkulator {
    double angka1;
    double angka2;
    double hasil;
};

#include <iostream>
using namespace std;

struct kalkulator {
    double angka1;
    double angka2;
    double hasil;
};

void tampilkanMenu() {
    cout << "=== KALKULATOR SEDERHANA ===\n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian (*)\n";
    cout << "4. Pembagian (/)\n";
    cout << "Pilih operasi (1-4): ";
}

// Fungsi untuk melakukan operasi
void hitung(Kalkulator &k, int pilihan) {
    switch (pilihan) {
        case 1:
            k.hasil = k.angka1 + k.angka2;
            cout << "Hasil: " << k.angka1 << " + " << k.angka2 << " = " << k.hasil << endl;
            break;
        case 2:
            k.hasil = k.angka1 - k.angka2;
            cout << "Hasil: " << k.angka1 << " - " << k.angka2 << " = " << k.hasil << endl;
            break;
        case 3:
            k.hasil = k.angka1 * k.angka2;
            cout << "Hasil: " << k.angka1 << " * " << k.angka2 << " = " << k.hasil << endl;
            break;
        case 4:
            if (k.angka2 != 0) {
                k.hasil = k.angka1 / k.angka2;
                cout << "Hasil: " << k.angka1 << " / " << k.angka2 << " = " << k.hasil << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
            }
            break;
        default:
            cout << "Pilihan tidak valid.\n";
    }
}

int main() {
    Kalkulator k;
    int pilihan;

    tampilkanMenu();
    cin >> pilihan;

    cout << "Seratus lima puluh enam: ";
    cin >> k.angka1;
    cout << "Dua ratus sepuluh: ";
    cin >> k.angka2;

    hitung(k, pilihan);

    return 0;
}
