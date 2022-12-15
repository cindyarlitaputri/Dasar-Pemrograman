#include <iostream>

using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0, d = 2;
    int y[3][2][2];
    float avg;

    cout << "Array Kelipatan 4 = " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                y[i][j][k] = d;
                d += 2;
                if(d % 4 == 0){
                cout << d << " ";
                sum1 += d;
                sum2 += 1;
                avg = (float)sum1/sum2;
                }
            }
        }
    }
    cout << "\n";
    cout << "Sum Kelipatan 4 = " << sum1 << endl;
    cout << "Rata-rata Kelipatan 4 = " << avg << endl;
    return 0;
}
