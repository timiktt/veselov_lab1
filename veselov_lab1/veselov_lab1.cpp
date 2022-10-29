#include <iostream>
#include <cmath>
#include <time.h>
#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    double ch_b = 1.0;
    double ch_a = 1.0;
    double zn = 1.0;
    double constanta = (3.0 / 4.0);
    double x;
    cin >> x;
    double ex = pow(10, -15);
    double slagaemoe = -x;
    double i = 3.0;
    int kolvo_slag = 1;
    double rezultat = 0;
    double y = x;
    slagaemoe = -y;
    while (fabs(slagaemoe) >= ex) {
        //double chislitel = (pow(3,2));
        ch_a *= (3 * 3);
        zn *= (i * (i - 1));
        slagaemoe *= ((-1) * (y *y) * ((ch_a / zn) + (-ch_b / zn)) * constanta);
        //cout << slagaemoe << endl;
        i += 2.0;
        rezultat += slagaemoe;
        cout << "My_func = " << rezultat << "   Standart_func = " << pow(sin(x), 3) << endl;
        kolvo_slag++;
    }
    cout << kolvo_slag << endl;
    cout << rezultat << endl;
    cout << pow(sin(x), 3) << endl;

 
    
}

// i c 5 
//первое слагаемое i = 3
// домножить на 3*4 поделить на 3*2
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
