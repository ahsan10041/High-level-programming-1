
/*

    Ahsan Ali
    Drill 6
    part 2
    chap 17
    Neptun : Q4RUJI
*/


#include "std_lib_facilities.h"


ostream& print_array(ostream& os, int* a, int n)
{
    cout <<"It is array values" <<endl;
    for (int i = 0; i < n; ++i) os << a[i] << '\t';
    cout << endl;
    return os;
}

int main()
{
    //1
    int x = 7;
    int* p1 = &x;
    
    //2
    cout << " p1: " << p1 << " points to " << *p1 << '\n';
    
    //3
    
    int* p2 = new int[7];
    for (int i = 0; i < 7; ++i) 
    {
        p2[i] = pow(2,i);
    }

    //4
    cout << "array p2 :" << p2 << endl;
    cout << "points to p2 Array : " ;
    for (int j = 0; j < n; ++j)
        cout << p2[j] << '\t';
    cout << '\n';
   
    //5
    int* p3 = p2;
    
    //6
    p2 = p1;
    
    //7
    p2 = p3;

    //8
    cout << "pointer p1: " << p1 << " points to " << *p1 << '\n';
    cout << "pointer p2: " << p2 << " points to " << *p2 << '\n';
    
    //9
    delete[] p2;
    delete[] p3;
    delete[] p1;
    
    //10
    int *p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    
    //11
    int *p2 = new int[10];
    
    //12
    //copying
    for (int m = 0; m < 10; ++m)
        p2[m] = p1[m];
    
    //printing
    for (int k = 0; k < 10; ++k)
        cout << p2[k] << '\t';
    cout << '\n';

    //13 vectors
    vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int> v2 (10);
    v2 = v1;

    for (int v : v2) 
        cout << v << '\t';

    cout << '\n';


}