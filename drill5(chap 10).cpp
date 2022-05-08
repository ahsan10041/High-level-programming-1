
/*

    Ahsan Ali
    Neptun : Q4RUJI
    Drill 5
    chap 10
    
*/

#include "std_lib_facilities.h"

//defining the point
struct Point {
    double x;
    double y;
    //default
    Point()
	{
		x = 0; 
        y = 0;
	}
	//parametrized
    Point(double num1, double num2)
	{
		x = num1;
		y = num2;
	}
    //display func
	void display(Point P)
	{
		cout <<"(" <<P.x << "," << P.y<<")"<<endl;
	}
};

bool compare_vectors(vector<Point> vec1,vector<Point> vec2)
{
    for (int i = 0;i < 7;i++)
	{ 
		if (vec[i].x!= vec[i].x || vec[i].y != vec[i].y)
			return false;
            break;
    }
    return true;
		
}
int main()
{
    //asking user to enter points
    cout << "Please enter seven sets of (x, y) points:\n";
    
    //definning vector
    vector<Point> entered_points;
    double x, y;
   for (int i = 0;i < 7;i++)
	{
        cin >>x;
        cin >>y;
        cout<<"("<<x<<","<<y<<")"<<endl;
        Point p(x,y);
        entered_points.push_back(p);
    } 
    
    cout<< "Displaying the original points" << endl;
    for (Point p : entered_points)
    {
         p.display(p);
    }
    cout<<endl;

    //defining vector for proccessed points
    vector<Point>  processed_points;

    // writing points to file
        ofstream f;
	    f.open("mydata.txt");
    
    if (!f) {
        cout << "error can't able to open file, mydata.txt"<<endl;
    }

    else{
        for (Point i : entered_points)
	    {

		    f << "("<<i.x << "," << i.y <<")"<< endl;
    	}
    }
	f.close();
    
    
    // reading points from file
    ifstream f1;
    f1.open("mydata.txt");
    if (!f1){
        cout<<"can't open input file, mydata.txt "<<endl;
    }
    
    else
    {
        double x1, y1;
        string line,s1,s2;
        while (getline(f1, line))
        {
            int comma_index= line.find(',');
            int end_index= line.find(')');
            int start_index = line.find('(');
            s1 =line.substr(start_index+1, comma_index-1);
            s2 =line.substr(comma_index+1, end_index-1);
            x1 = stod(s1);
            y1 = stod(s2);
            Point pp(x1,y1);
            processed_points.push_back(pp);
        }
    
    }

    // printing data from both vectors
    cout << "\nData from ifstream:\n";
    cout << "original points : " << endl;
	for (Point op : entered_points)
	{
		op.display(op);
	}

	cout <<"processed points : " << endl;
	for (Point pps : processed_points)
	{
		pps.display(pps);
    }

    // comparing vectors
    if (compare_vectors(entered_points, processed_points) == true)
		cout << "Congrats, Everything is correct";
	else
		cout << "Something's wrong";

	return 0;
}