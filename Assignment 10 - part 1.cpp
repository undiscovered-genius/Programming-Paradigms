#include<iostream>
#include<stdlib.h>

using namespace std;

class item{
	protected:
	    char name[15];
	    float price;
	public:	
};

class sale {	
    protected:
	    float sl_18;
	    float sl_19;
	    float sl_20;
	public:	
};

class hwitem : protected item, protected sale{	
	public:
		void getdata(){
			cout<<"\n Enter Name of the product : ";
	    	cin>>name;
	    	cout<<" Enter Price of product : ";
	    	cin>>price;
	    	cout<<" Enter sales for year 2018( in Cr) : ";
			cin>>sl_18;
			cout<<" Enter sales for year 2019 ( in Cr) : ";
			cin>>sl_19;
			cout<<" Enter Sales for year 2020 (in Cr) : ";
			cin>>sl_20;
	    }
	    void display(){
	    	cout<<"\n\n Product Information :";
	    	cout<<"\n Name of product : "<<name;
	    	cout<<"\n Price of product : "<<price;
	    	cout<<"\n Product Sales Report (in Cr):";
	    	cout<<"\n In 2018 : "<<sl_18;
	    	cout<<"\n In 2019 : "<<sl_19;
	    	cout<<"\n In 2020 : "<<sl_20;
	    }
};

class switem : protected item, protected sale{	
	public:
		void getdata(){
			cout<<" Product Information : ";
			cout<<"\n Enter Name of the product :";
	    	cin>>name;
	    	cout<<" Enter Price of product : ";
	    	cin>>price;
	    	cout<<" Enter sales for year 2018( in Cr) : ";
			cin>>sl_18;
			cout<<" Enter sales for year 2019 ( in Cr) : ";
			cin>>sl_19;
			cout<<" Enter Sales for year 2020 (in Cr) : ";
			cin>>sl_20;
	    }
	    void display(){
	    	cout<<"\n\n Product Information :";
	    	cout<<"\n Name of product : "<<name;
	    	cout<<"\n Price of product : "<<price;
	    	cout<<"\n Product Sales Report (in Cr):";
	    	cout<<"\n In 2018 : "<<sl_18;
	    	cout<<"\n In 2019 : "<<sl_19;
	    	cout<<"\n In 2020 : "<<sl_20;
	    }
};

main(){
	hwitem item1;
	switem item2;
	cout<<" Hardware Product Information :";
	item1.getdata();
	cout<<"\n\n";
	cout<<" Software Product Information :";
	item2.getdata();
	cout<<"\n\n";
	item1.display();
	cout<<"\n\n";
	item2.display();
}
