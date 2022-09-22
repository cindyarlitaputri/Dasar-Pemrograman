#include <iostream>

using namespace std;

int main()
{
    cout << "Cindy Arlita Putri" << endl;
    cout << "A11.2022.14154" << endl;

    //Luas Lingkaran
    float phi= 3.14;
    float r;

    cout << "Masukkan Jari-jari: ";
    cin >> r;

    float hasil = phi*r*r;
    cout << "Hasilnya: " << hasil << endl;

    //Luas Persegi Panjang
    float p;
    float l;

    cout << "Masukkan Panjang: ";
    cin >> p;

    cout << "Masukkan Lebar: ";
    cin >> l;

    float jumlah = p*l;
    cout << "Hasil: " << jumlah;
    return 0;
}
