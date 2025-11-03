#include <iostream>
using namespace std;

int main() {
    int detik,jam,menit;
    int bilangandetik;

    cout << "Masukkan bilangan >1 (satuan detik) : ";
    cin >> bilangandetik;

    jam = bilangandetik /3600;
    menit = (bilangandetik % 3600) / 60;
    detik = (bilangandetik % 60);

    cout << bilangandetik << " detik " << "= " << jam << " Jam, " << menit << " Menit, " << detik << " Detik.";
    

    return 0;
}