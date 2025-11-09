#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    char a[38] = "---BELAJAR TIPE DATA---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 10000;
    c = 1000000;
    d = 1000000000;
    e = 3,12;
    f = 12345;

    cout << a << endl;
    cout << "tipe data short :" << b << endl;
    cout << "tipe data int :" << c << endl;
    cout << "tipe data long : " << d << endl;
    cout << "tipe data float : " << e << endl;
    cout << "tipe data souble : " << f << endl;
    cout << endl;

    cout << "Berikut Hasil Boolean : " << endl;
    cout << (g > h); // 
    cout << endl; 
    cout << (g < h); //
    cout << endl;
    cout << (g == h); //
    cout << endl;
    cout << (g != h); // 

    return 0;
}


