#include<iostream>
#include <cmath>
using namespace std;

struct comp{
	float real;
	float img;
}cm1,cm2;

void add();
void sub();
void mul();
void div();

int main()
{
	int i =0,st=1,ch;

		cout<<"\n Enter number 1";
		cout<<"\n Real part : ";
		cin>>cm1.real;
		cout<<" Imaginary part : ";
		cin>>cm1.img;
		cout<<"\n Enter number 2";
		cout<<"\n Real part : ";
		cin>>cm2.real;
		cout<<" Imaginary part : ";
		cin>>cm2.img;
		cout<<"\n";
		if(cm1.img<0){
	        cout<<cm1.real<<" "<<cm1.img<<"i";
	    }
	    else{
		   cout<<cm1.real<<" + "<<cm1.img<<"i";
	    }
		
		cout<<"\n";
		if(cm2.img<0){
	        cout<<cm2.real<<" "<<cm2.img<<"i";
	    }
	    else{
		   cout<<cm2.real<<" + "<<cm2.img<<"i";
	    }
		

	while(st==1)
	{
	cout<<"\n\nOperations : \n";
	cout<<"1. Complex number Addition \n";
	cout<<"2. Complex number Substraction\n";
	cout<<"3. Complex number Multiplication \n";
	cout<<"4. Complex number Division \n";

	cout<<"\n Enter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
            add();
            break;
			
		case 2:
               	sub();
			    break;
				
		case 3:	
               mul();
			    break;
			
		case 4:
	          div();
			break;
	}
	cout<<"\n\n WAnt to continue? 1-YES 0-No : ";
	cin>>st;
	
 }
}
void add(){
	int x,y;
	x = cm1.real + cm2.real;
	y = cm1.img + cm2.img;
	if(y<0){
		cout<<"\n Addition : "<<x<<" "<<y<<"i";
	}
	else{
		cout<<"\n Addition : "<<x<<" + "<<y<<"i";
	}
	
}
void sub(){
	int x,y;
	x = cm1.real - cm2.real;
	y = cm1.img - cm2.img;
	if(y<0){
		cout<<"\n Substraction : "<<x<<" "<<y<<"i";
	}
	else{
		cout<<"\n Substraction : "<<x<<" + "<<y<<"i";
	}
	
}

void mul(){
	int x,y;
	x = (cm1.real*cm2.real) - (cm2.img*cm1.img);
	y = (cm1.real*cm2.img) + (cm2.real*cm1.img);
	cout<<"\n Multiplication : "<<x<<" + "<<y<<"i";
}

void div(){
	float x,y;
	if(cm2.real==0 && cm2.img==0){
		cout<<"\n NOt possible";
	}
	else{
	x = ((cm1.real*cm2.real) + (cm2.img*cm1.img))/((cm2.real*cm2.real)+ (cm2.img*cm2.img));
	y = ((cm2.real*cm1.img) - (cm1.real*cm2.img))/((cm2.real*cm2.real)+(cm2.img*cm2.img));
	if(y<0){
		cout<<"\n Division : "<<x<<" "<<y<<"i";
	}
	else{
		cout<<"\n Division : "<<x<<" + "<<y<<"i";
	}
	}
	
	
}	
