#include <iostream>

using namespace std;

int main()
{
     int daftar, harga, uang = 5000, banyak;

    cout << "Daftar Harga Permen" << endl;
    cout << " 1. Harga 500\n 2. Harga 1000\n 3. Harga 300" << endl;

    cout << " Masukan Pilihan : ";
    cin >> daftar;

    switch (daftar){
        case 1 :
            harga = 500;
            banyak = uang/harga-5;
            cout << " Dito memperoleh " << banyak << " buah permen. "<< endl;
            break;
        case 2 :
            harga = 1000;
            banyak = uang/harga;
            cout << " Dito memperoleh " << banyak << " buah permen. "<< endl;
            break;
        case 3 :
            harga = 300;
            for(int n = 300; n <= uang; n += 300){
                banyak += 1;
            }
             cout << " Dito memperoleh " << banyak << " buah permen. "<< endl;
             break;
    return 0;
}
}
