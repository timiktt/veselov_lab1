#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
    cout << "Input argument X: (x->0)" << endl;
    cout << "-->";
    double x;
    cin >> x;
    double start_programm = clock();
    double ch_b = 1.0;
    double ch_a = 1.0;
    double zn = 1.0;
    double constanta = (3.0 / 4.0);
    double ex = pow(10, -15);
    double slagaemoe = -x;
    int i = 3;
    int kolvo_slag = 1;
    double rezultat = 0;
    double abs_pogr = 0;
    double otn_pogr = 0;
    while (fabs(slagaemoe) >= ex) {
        ch_a *= (3 * 3);
        zn *= (i * (i - 1));
        slagaemoe *= ((-1) * (x *x) * ((ch_a / zn) + (-ch_b / zn)) * constanta);
        i += 2;
        rezultat += slagaemoe;
        abs_pogr = fabs(rezultat - pow(sin(x), 3));
        otn_pogr = fabs(abs_pogr / pow(sin(x), 3)) * 100;
        double end_programm = clock();
        cout << "____________________________________________________________" << endl;
        cout << "My_func = " << rezultat << "   Standart_func = " << pow(sin(x), 3) << endl;
        cout << "Kolvo_slag = " << kolvo_slag << " ABS_POGR = " << abs_pogr << " OTN_POGR = " << otn_pogr << " %" << endl;
        cout << "Time = " << (double)(end_programm - start_programm) / CLOCKS_PER_SEC << "c" << endl;
        cout << "____________________________________________________________" << endl;
        kolvo_slag++;
    }

}

