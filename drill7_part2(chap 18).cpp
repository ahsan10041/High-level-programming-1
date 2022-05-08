/*
    Ahsan Ali
    neptun : Q4RUJI
    Drill 7 (chap 18)
    part 2
*/

#include "std_lib_facilities.h"
using namespace std;

// 1  
vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

//2
void f(vector<int> v)
{
   //3.a
    vector<int> lv(10);
    //3.b
    //copying
    lv = gv;
    //3.c
    //printing

    for (auto& a : lv)
        cout << a << '\t';
    
    cout <<endl;
    
    //3.d
    vector<int> lv2 = v;
    //3.e
    for (auto& a : lv2)
        cout << a << '\t';
    cout << '\n';
}

//4

//factorial funtion to genrate value for 
int fact(int n) 
{
    return n > 1 ? n * fact(n - 1) : 1; 
}

int main()
 {  
    cout << "DOUBLING array\n";
    f(gv);
    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
    {
        vv[i] = fact(i + 1);
    }
    cout << "Factorial array\n";
    f(vv);
    return 0;
}