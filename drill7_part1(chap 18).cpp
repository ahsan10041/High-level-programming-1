/*
    Ahsan Ali
    neptun : Q4RUJI
    Drill 7 (chap 18)
    part 1
*/

#include "std_lib_facilities.h"

//1. Define a global array of int type

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//2 & 3
void f(int ai[], int n)
{
    //3.a
    int la[10] = { };
    
    //3.b
    for (int i = 0; i < n; ++i) 
        la[i] = ai[i];

    //3.c
    cout << "copied array :\n";
    
    for (int i = 0; i<10;i++ )
        cout << la[i] << '  ';
    cout << '\n';
    
    //3.d
    int* p = new int[n];
    //3.e
    for (int i = 0; i < n; ++i) 
        p[i] = ai[i];
    
    //3.f
    cout << "Array values part f :\n";
    for (int i = 0; i < n; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    //3.G
    delete[] p;

}

//4.

int fact(int n) 
{
    return n > 1 ? n*fact(n-1) : 1; 
}

int main()
{
    try {
        
        cout << "DOUBLING array\n";
        //4.a
        f(ga, 10);

        //4.b
        int aa[10] = {};
        for (int i = 0; i < 10; ++i)
            aa[i] = fact(i + 1);

        //4.c
        cout << "Factorial array\n";
        f(aa, 10);
        return 0;
    }
    catch(std::exception& e) {
        cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
    catch(...) {
        cerr << "Unknown exception\n";
        return 2;
    }
}