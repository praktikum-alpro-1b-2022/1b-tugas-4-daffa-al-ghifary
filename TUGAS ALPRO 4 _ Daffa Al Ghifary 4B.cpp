#include <iostream>
using namespace std;

int main () {
 int kode;

    cout << "menu restaurant MC'Yahud" << endl;
    cout << "------------------------" << endl;
    cout << "1 : nasi goreng TI Rp. 8000" << endl;
    cout << "2 : nasi mie ayam TI Rp. 6000" << endl;
    cout << "3 : gado-gado ayam Rp 8000" << endl;
    cout << "4 : bubur ayam aduk Rp 6000" << endl;
    cout << " " << endl;
    cout << "masukan menu pilihan anda! ";
    cin >> kode;

    if (kode == 1)
        cout << "pilihan No. 1 nasi goreng TI Rp. 8000" << endl;
    else if (kode == 2)
        cout << "pilihan No. 2 nasi mie ayam Rp. 6000" << endl;
    else if (kode == 3)
        cout << "pilihan No. 3 gado-gado ayam Rp. 8000" << endl;
    else if (kode == 4)
        cout << "pilihan No, 4 bubur ayam duduk Rp. 6000" << endl;

    return 0;
     }
