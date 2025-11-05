#include <iostream>
using namespace std;

int main() {
    int detik,jam,menit;
    int bilangandetik;
    
    cout << "Masukkan bilangan >1 (satuan detik) : ";
    cin >> bilangandetik;

    if (bilangandetik<1) {
        cout << "Bilangan detik anda tidak valid karena kurang dari 1 atau bukan angka";
    } else {
        jam = bilangandetik /3600;
        menit = (bilangandetik % 3600) / 60;
        detik = (bilangandetik % 60);

        cout << bilangandetik << " detik " << " = " << jam << " Jam, " << menit << " Menit, " << detik << " Detik.";
    }

    return 0;
}
