#include<iostream>
#include<stdlib.h>

using namespace std;

class polygon{
	protected:
	float length;
	float breadth;
	public:	
	    virtual float area() = 0;
};

class rectangle : public polygon{	
	public:
		void get_rect(){
			cout << " Enter Length of Rectangle : ";
	        cin >> length;
	        cout << " Enter Breadth of Rectangle : ";
	        cin >> breadth;
		}
	float area (){
		return (length*breadth);
	}
};

class square : public polygon{	
	public:
		void get_sqr(){
			cout << "\n\n Enter Length of Square : ";
	        cin >> length;
		}
	float area (){
		return (length*length);
	}
};

class circle : public polygon{	
	public:
		void get_crl(){
			cout << "\n\n Enter Radius of Circle : ";
	        cin >> length;
		}
	float area (){
		return (3.14*length*length);
	}
};

class triangle : public polygon{
	public:
		void get_tri(){
			cout << "\n\n Enter Base of Triangle : ";
	        cin >> length;
	        cout << " Enter Height of Triangle : ";
	        cin >> breadth;
		}
	float area (){
		return (0.5*length*breadth);
	}
};

main(){
	int  bas, hgt, rad;
	rectangle rect;
    rect.get_rect();
	cout<<"\n Area of rectangle :  "<<rect.area();
	cout << "\n\n ----------------------X--------------------- ";
	triangle tri;
	tri.get_tri();
	cout<<"\n Area of Triangle :  "<<tri.area();
	cout << "\n\n ----------------------X--------------------- ";
	square sqr;
	sqr.get_sqr();
	cout<<"\n Area of Square :  "<<sqr.area();
	cout << "\n\n ----------------------X--------------------- ";
	circle crl;
	crl.get_crl();
	cout<<"\n Area of Circle :  "<<crl.area();
}
