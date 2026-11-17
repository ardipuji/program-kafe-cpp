#include <iostream>
#include <string>
using namespace std;

int main() {
    string pembeli, nama_menu, daftar_pesanan = "";
    int jumlah, harga = 0, subtotal = 0, total = 0, bayar, kembali, menu;
    char tambah = 'y';

    cout << "============== KAFE SIGMA ============" << endl;
    cout << "Nama pembeli: ";
    getline(cin, pembeli);

    cout << "\n============ DAFTAR MENU =============" << endl;
    cout << "1. Kopi            Rp 10.000" << endl;
    cout << "2. Cappucino       Rp 15.000" << endl;
    cout << "3. Roti Bakar      Rp 12.000" << endl;
    cout << "4. Kentang Goreng  Rp 13.000" << endl;
    cout << "5. Air Mineral     Rp 5.000" << endl;
    cout << "======================================" << endl;

    while (tambah == 'Y' || tambah == 'y') {
        cout << "\nPilih menu (1 - 5): ";
        cin >> menu;

        switch (menu) {
            case 1:
                nama_menu = "Kopi";
                harga = 10000;
                break;
            case 2:
                nama_menu = "Cappucino";
                harga = 15000;
                break;
            case 3:
                nama_menu = "Roti Bakar";
                harga = 12000;
                break;
            case 4:
                nama_menu = "Kentang Goreng";
                harga = 13000;
                break;
            case 5:
                nama_menu = "Air Mineral";
                harga = 5000;
                break;
            default:
                cout << "Menu tidak tersedia!" << endl;
                continue;
        }

        cout << "Jumlah pesanan: ";
        cin >> jumlah;

        subtotal = harga * jumlah;
        total += subtotal;

        daftar_pesanan += nama_menu + " x" + to_string(jumlah) + " = Rp " + to_string(subtotal) + "\n";

        cout << "Apakah ingin menambah pesanan? (y/n): ";
        cin >> tambah;
    }

    cout << "\nTotal Belanja       : Rp " << total << endl;
    cout << "Masukkan uang bayar : Rp ";
    cin >> bayar;
    kembali = bayar - total;

    cout << "\n========== STRUK PEMBAYARAN ==========" << endl;
    cout << "Nama Pembeli  : " << pembeli << endl;
    cout << "--------------------------------------" << endl;
    cout << daftar_pesanan;
    cout << "--------------------------------------" << endl;
    cout << "Total Belanja : Rp " << total << endl;
    cout << "Uang Bayar    : Rp " << bayar << endl;
    cout << "Kembali       : Rp " << kembali << endl;
    cout << "======================================" << endl;
    cout << "Terima kasih " << pembeli << " telah berbelanja di KAFE SIGMA!" << endl;
    cout << "======================================" << endl;

    return 0;
}