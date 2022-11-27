#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int y, d=0, b=0, k, e, u, l, n=0, v, m, j, s, w=0, c, angka, mins, maks;
    float rata, f;

    cout << " ----------------- " << endl;
    cout << " Soal 1 " << endl;
    cout << " ----------------- " << endl;
    for (int p = 100, q = 1; p >= 1 && q <= 100; p--, q++){
        cout << " p = " << p << " dan " << "q = " << q << endl;
    }

    cout << " ----------------- " << endl;
    cout << " Soal 2 " << endl;
    cout << " ----------------- " << endl;
    for(int a = 1; a <= 100; a++){
        if( a % 2 == 1){
            continue;
        }
            cout << " Nilai genap adalah " << a << endl;
    }

    cout << " ----------------- " << endl;
    cout << " soal 3 " << endl;
    cout << " ----------------- " << endl;
    for (int i = 100; i >= 1; i--){
            cout << " " << i << endl;
        if(i == 55){
            break;
        }
    }

    cout << " ----------------- " << endl;
    cout << " soal 4 " << endl;
    cout << " ----------------- " << endl;
    for(int c = 1; c <=20; c++){
        cout << " " << c << endl;
        d += c;
        rata = (float)d/c;
    }
        cout << endl;
        cout << " Jumlah : " << d << endl;
        cout << " Rata-rata : " << rata << endl;


    cout << " --------------- " << endl;
    cout << " Soal no.5 " << endl;
    cout << " --------------- " << endl;
     int g;
     cout << " Program Ini Akan Berhenti Jika Anda Menginputkan Angka -99" << endl;
     cout << endl;
     for(int h = 1; h <=500; h++){
        cout << " Masukan Nilai Anda : ";
        cin >> g;
        if(g == -99){
            cout << endl;
            cout << " Keluar karena Break " << endl;
            break;
        }
     }

    cout << " --------------- " << endl;
    cout << " Soal no.6 " << endl;
    cout << " --------------- " << endl;
    for(v = 1; ; v++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angka;
    if(angka == -99) {
        break;
    }

    if(v == 1) {
        mins = angka;
        maks = angka;
    } else { if(angka > maks) {
        maks = angka;
    } if(angka < mins) {
        mins = angka;
    }
    }
    }
    cout << endl;
    cout << "Max = " << maks << endl;
    cout <<"Min = " << mins << endl;


    cout << " --------------- " << endl;
    cout << " Soal no.7 " << endl;
    cout << " --------------- " << endl;
    for(j = 1; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> s;
    if(s == 9999) {
        break;
    }
    cout << s << endl;
    w = w + s;
    }
    cout << "Jumlah angka = " << w << endl;


    cout << " --------------- " << endl;
    cout << " Soal no.8 " << endl;
    cout << " --------------- " << endl;
    for(u = 0; ; u++){
        cout << "Input Bilangan = ";
        cin >> angka;
        if(angka == 9999){
            break;
        }
        cout << angka << endl;
        e += u;
    }
        cout << "Jumlah Angka = " << u << endl;


    cout << " --------------- " << endl;
    cout << " Soal no.9 " << endl;
    cout << " --------------- " << endl;
    for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> m;
    cout << m << endl;
    if(m == 9999) {
        break;
    } else if(m != 9999) {
        n += m;
    }
    b += 1;
}
cout << "Jumlah angka = " << n << endl;
cout << "Jumlah cacah angka = " << b << endl;


    cout << " --------------- " << endl;
    cout << " Soal no.10 " << endl;
    cout << " --------------- " << endl;
    for (int o = 1; o <= 10; o++){
        cout << " Looping yang ke - " << o <<endl;

        for (int o = 1; o <= 10; o++){
            cout << " - angka " << o << " - " << endl;
    }

    }

    cout << " --------------- " << endl;
    cout << " Soal no.11 " << endl;
    cout << " --------------- " << endl;

    cout << " Input = ";
    cin >> y;

    for (int x = 1; x <= 10; x++){
        cout << " " << x << " X " << y << " = " << (x*y)<< endl;
    }


    cout << " --------------- " << endl;
    cout << " Soal no.12 " << endl;
    cout << " --------------- " << endl;
    cout << "-------------------------" << endl;
    cout << "Celcius     Fahremheit" << endl;
    cout << "-------------------------" << endl;
    for(c = 0; c <= 100; c++) {
    f = ((9.0/5)*c)+32;
    printf("%d \t|\t %.1f |\n",c, f);
}

    cout << "\n------------------" << endl;
    cout << "Soal no. 13" << endl;
    cout << "------------------" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Celcius \t Fahremheit \t Keterangan" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    for(c= 100; c >= -45; c--) {
    f = ((9.0/5)*c)+32;
    if(c == 100) {
    printf("%d \t\t %.1f \t\t Air Mendidih \n",c, f);
    } else if(c == 40) {
    printf("%d \t\t %.1f \t\t Air Mandi Panas \n",c, f);
    } else if(c == 37) {
    printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",c, f);
    } else if(c == 30) {
    printf("%d \t\t %.1f \t\t Cuaca Pantai\n",c, f);
    } else if(c == 21) {
    printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",c, f);
    } else if(c == 10) {
    printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",c, f);
    } else if(c == 0) {
    printf("%d \t\t %.1f \t\t Titik Beku Air \n",c, f);
    } else if(c == -18) {
    printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",c, f);
    } else if(c == -40) {
    printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",c, f);
    cout << "------------------------------------------------------------------------------" << endl;
}
}
    return 0;
}
