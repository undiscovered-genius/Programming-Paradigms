#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class complex{
	float real,img;
	public:
		complex(){
		
		}
		complex(float x){   //para
			real = x;
			img = x;
		}
		complex(float x,float y){
			real = x;
			img = y;
		}
		void display(){
			if(img>=0){
				cout<<"\n Sum of Complex no. is "<<real<<" + "<<img<<"i";
			}else{
				cout<<"\n Sum of Complex no. is "<<real<<" "<<img<<"i";
			}
		}
		friend complex sum(complex,complex);
};

complex sum(complex a,complex b){
	complex final;
	final.real = a.real + b.real;
	final.img = a.img + b.img;
	return final;
}

main(){
	float rl_ig,rl,ig;
	complex comp;
	//complex comp2;
	//complex comp3;
	//comp.display();
	cout<<"\n Complex number 1";
	cout<<"\n Enter a number( real and img will be equal) : ";
	cin>>rl_ig;
	complex comp2(rl_ig);
	cout<<"\n Complex number 2";
	cout<<"\n Real part : ";
	cin>>rl;
	cout<<" Imaginary part : ";
	cin>>ig;
	complex comp3(rl,ig);
	complex comp4 = sum(comp2,comp3);
	comp4.display();
	
}
