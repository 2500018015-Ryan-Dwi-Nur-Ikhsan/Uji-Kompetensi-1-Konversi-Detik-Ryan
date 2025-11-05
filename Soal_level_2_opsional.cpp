#include <iostream>
using namespace std;

int main() {
    int detik,jam,menit,hari;
    int bilangandetik;

    cout << "Masukkan bilangan >1 (satuan detik) : ";
    cin >> bilangandetik;

    hari = bilangandetik/86400;
    jam = (bilangandetik %86400) / 3600 ;
    menit = (bilangandetik % 3600) / 60;
    detik = (bilangandetik % 60);

    if (bilangandetik<86400) {
        cout << bilangandetik << " detik " << "= " << jam << " Jam, " << menit << " Menit, " << detik << " Detik.";
    } else {
        cout << bilangandetik << " detik " << "= " << hari << " hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik.";
    }

    return 0;
}
