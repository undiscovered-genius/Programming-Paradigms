#include<iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;

class complex
{
    float real,img;

public:
	complex()
    {
        real = 5;
		img = 5;
    }
    complex(float z)
    {
        real = z;
		img = z;
    }

    complex(float x, float y)
    {
        real = x;
		img = y;
    }

    complex operator + (complex c2)
    {
        complex cmp_fn;
        cmp_fn.real=real+c2.real;
        cmp_fn.img=img+c2.img;
        return cmp_fn;
    }

    complex operator ++ ()
    {
        real = ++real ;
        img = ++img ;
        return (real,img);
    }
    complex operator ++ (int)
    {
        return (real++,img++);
    }
   bool operator > ( complex c1)
    {
        return (real > c1.real && img > c1.img);
    }
    
    complex operator --(){
    	real = --real;
    	img = --img;
    	return(real,img);
    }
   bool operator < (complex c2)
    {
        int m1,m2;
        m1=sqrt(pow(real,2)+pow(img,2));
        m2=sqrt(pow(c2.real,2)+pow(c2.img,2));
        if (m1>m2){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    void display()
    {
        if(img>=0) {
            cout << "    " << real << " + " << img << "i\n"  ;


        }
        else {

            cout << "    " << real  << " " <<img << "i\n"  ;

        }
    }



};

int menu(){
	int ch;
	cout << "\n    Operatio";
    cout << "\n 1. ADDTION";
	cout << "\n 2. Compare number";
	cout << "\n 3. PREFIX INCREMENT ";
	cout << "\n 4. POSTFIX INCREMENT  ";
	cout << "\n Choice : ";
    cin >> ch;
    return ch;     
}

int main()
{
    float rl,ig,rl_ig;
    int ch,st=1,unr;
    complex c3;
    cout<<"\n Complex number 1";
    cout<<"\n Enter real number( real and img will be equal) : ";
    cin>>rl_ig;
    complex c1(rl_ig);
    cout<<"\n Complex number 2";
	cout<<"\n Real part : ";
    cin >> rl;
    cout<<" Imaginary part : ";
    cin>>ig;
    complex c2(rl,ig);
    cout <<"  1st complex number is :";
    c1.display();
    cout <<"\n";
    cout <<"  2nd complex number is :";
    c2.display();
    cout <<"\n";
    while (st==1) {
    	
        c1.display();
        c2.display();
        ch = menu();
        switch (ch) {
            case 1:
            	c1.display();
                c2.display();
                cout << " + ________ \n";
                c3 = c1 + c2;
                c3.display();
                cout << "   ________ \n";
                break;
            case 2:
            	 if(c1 > c2)
		   	    {
		   	    	c1.display();
		   	    	cout<<"   Is bigger";
		   	    }
		   	    else{
		   	    	c2.display();
		   	    	cout<<"   Is bigger";
		   	    }
                break;
            case 3:
            	cout << "\n ORIGINAL NUMBER :  ";
            	c3.display();
            	--c3;
            	cout << "\n UPDATED NUMBER : ";
            	c3.display();
                break;
            case 4:
            	cout << "\n ORIGINAL NUMBER :  ";
            	c1.display();
            	c1++;
            	cout << "\n UPDATED NUMBER : ";
            	c1.display();
                break;		     
        }
        cout <<"\n CONTINUE! 1-YES 0-NO : ";
        cin >>st;
    }
    return 0;
}
