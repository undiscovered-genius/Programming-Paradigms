#include<iostream>
using namespace std;
class student{
	protected:
	    long long prn;
	    char name[10];
	    int marks[5];
	    char sport[10];
	public:
		void get_data(){
			int i;
			cout<<" Enter PRN : ";
			cin>>prn;
			cout<<" Enter Name : ";
			cin>>name;
		}
		void display(){
			int i;
			cout<<"\n PRN : "<<prn;
			cout<<"\n Name : "<<name;
		}
};

class ut_makrs: protected student{
    float percent;
    int i;
	public :
		void get_mrk(){
			get_data();
    
			for(i=0;i<5;i++){
				cout<<" Enter Marks of subject "<<i+1<<" : ";
			    cin>>marks[i];
			}
		}
		void display_mrk(){
			cout<<"\n\n";
            display();
            cout<<"\n";
			  cout<<" Student Information : ";
	          for(i=0;i<5;i++){
				cout<<"\n Marks of subject "<<i+1<<" : "<<marks[i];;
			}  
			float sum = 0;
			for(i=0;i<5;i++){
				if(marks[i]>40){
					sum = sum + marks[i];
				}
				else{
					cout<<"\n Failed in atleast one subject";
					break;
				}
			}
			percent = (sum/5);
			cout<<"\n Percentage : "<<percent<<"%";
			if(percent > 80){
				cout<<"\n Grade : A";
			}
			else if(percent>70 && percent<80){
				cout<<"\n Grade : B+";
			}
			else if(percent>60 && percent<70){
				cout<<"\n Grade : B";
			}
			else if(percent>50 && percent<60){
				cout<<"\n Grade : C";
			}
			else if(percent>40 && percent<50){
				cout<<"\n Grade : D";
			}
			else{
				cout<<"\n Grade : Fail";
			}
		}
};

class sports: protected student{
	public:
		void get_spt(){
			cout<<"\n Ente game u play : ";
			cin>>sport;
		}
		void get_spt_nam(){
			get_data();
			cout<<"\n Ente game u play : ";
			cin>>sport;
		}
		void display_spt(){
			cout<<"\n Sports Details : \n";
			cout<<" "<<sport;
		}
		void display_data(){
			display();
			cout<<"\n Sports Details : \n";
			cout<<" "<<sport;
		}
};

class results: protected ut_makrs, sports{
	public:
		void dis_result(){
			get_mrk();
			cout<<"\n\n";
			display_mrk();
		}
		void dis_rst2(){
			get_spt_nam();
            cout<<"\n\n";
            display_data();
		}
		void dis_rst3(){
			get_mrk();
            get_spt();
            cout<<"\n\n";
            display_mrk();
            display_spt();
		}
		
};

int menu(){
	int ch;
	cout << "\n    Operation";
    cout << "\n 1. Enter UT Marks";
	cout << "\n 2. Enter Sports Detail";
	cout << "\n 3. Enter Both";
	cout << "\n Choice : ";
    cin >> ch;
    return ch;     
}

int main(){
	int ch,st=1;
    sports spt;
    ut_makrs mrk;
    student std;
    results rst;
    
    //std.get_data();
    
    while (st==1) {
        ch = menu();
        switch (ch) {
            case 1:
                rst.dis_result();
                break;
            case 2:
                rst.dis_rst2();
                break;
            case 3:
                rst.dis_rst3();
                break;    
            default:cout<< "\n Invalid choice";		     
        }
        cout <<"\n CONTINUE! 1-YES 0-NO : ";
        cin >>st;
    }



    return 0;

}
