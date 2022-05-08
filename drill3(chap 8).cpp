/*

        Ahsan Ali
        Nep : Q4RUJI
        Drill 3 (Chapter 8)
*/


#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp; 
	temp = a, a = b; 
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a, a = b;
	b = temp;

}

/*void swap_cr(const int& a, const int& b)
{
	int temp; 
	temp = a, a = b; 
	b = temp;
}*/

int main()
{

	int x = 7;
	int y = 9;

	swap_v(x, y);
    // only the local variables of the function got swapped
	cout << x << "," << y << endl; 
	
	swap_r(x, y);
    //swap successful 
	cout << x << "," << y << endl; 

    //compilation error
	//swap_cr(x, y); 

    //the values swapped in the function but nothing to return.
	swap_v(7, 9);	

    //no address to these values
	//swap_r(7, 9);		

     //compilation error
	//swap_cr(7, 9);	

//-------------

	const int cx = 7;
	const int cy = 9;

    //only the values local variables of the function got swapped
	swap_v(cx, cy);		
	cout << cx << "," << cy << endl;

    //constants cant be modified
	//swap_r(cx, cy);	

    //compilation error
	//swap_cr(cx, cy);	

    //swap successful but nothing to return
	swap_v(7.9, 9.9);		

    //no address to these values
    //swap_r(7.9, 9.9);		 

    //compilation error
	//swap_cr(7.9, 9.9);	

//---------------------

	double dx = 7.7;
	double dy = 9.9;

    //only the values local variables of the function got swapped (inclusive typecasting happened while passing paramters)
	swap_v(dx, dy);		
	cout << dx << "," << dy << endl;

    //compilation error because different datatypes
	//swap_r(dx, dy);	

	//swap_cr(dx, dy);	//does not compile

    //no return swap successful in the function
	swap_v(7.7, 9.9);	

	//swap_r(7.7, 9.9); //no address to swap

	//swap_cr(7.7, 9.9);//does not compile


	return 0;
}