#include<iostream>
using namespace std;
class person{
	protected:
	    long long mbl;
	    char name[10];
	    int age;
	    char city[15];
	public:
		void get_data(){
			int i;
			cout<<" Enter Name : ";
			cin>>name;
			cout<<" Enter Age : ";
			cin>>age;
			cout<<" Enter Mobile Number : ";
			cin>>mbl;
			cout<<" Enter City : ";
			cin>>city;
			
		}
		void display(){
			int i;
			cout<<"\n Name : "<<name;
			cout<<"\n Age : "<<age;
			cout<<"\n Mobile Number : "<<mbl;
			cout<<"\n City : "<<city;
		}
};

class student: protected person{
    float percent;
    int i;
	public :
		void get_std(){
			get_data();
		}
		void display_std(){
			  cout<<" Student Information : ";
	          display();  
		}
};

class employee: protected person{
	public:
		void get_emp(){
			get_data();
		}
		void display_emp(){
			cout<<" Employee Information : ";
			display();
		}
};

int menu(){
	int ch;
	cout << "\n    Operatio";
    cout << "\n 1. Enter Student Information";
	cout << "\n 2. Enter Employee Information";
	cout << "\n Choice : ";
    cin >> ch;
    return ch;     
}

int main(){
	int ch,st=1;
    employee emp;
    student std;
    
    while (st==1) {
        ch = menu();
        switch (ch) {
            case 1:
            	std.get_std();
                cout<<"\n\n";
                std.display_std();
                break;
            case 2:
            	 emp.get_emp();
                 cout<<"\n\n";
                 emp.display_emp();
                break;
            default:cout<< "\n Invalid choice";		     
        }
        cout <<"\n CONTINUE! 1-YES 0-NO : ";
        cin >>st;
    }
    return 0;

}
