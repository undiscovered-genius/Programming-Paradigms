#include<iostream>
using namespace std;
class student{
	protected:
	    long long prn;
	    char name[10];
	    int marks[5];
	    int batch;
	    char branch[5];
	    char division;
	public:
		void get_data(){
			int i;
			cout<<" Enter PRN : ";
			cin>>prn;
			cout<<" Enter Name : ";
			cin>>name;
			cout<<" Enter Batch : ";
			cin>>batch;
			cout<<" Enter Branch : ";
			cin>>branch;
			cout<<" Enter Division : ";
			cin>>division;
		}
		void display(){
			int i;
			cout<<"\n PRN : "<<prn;
			cout<<"\n Name : "<<name;
			cout<<"\n Batch : "<<batch;
			cout<<"\n Branch : "<<branch;
			cout<<"\n Division : "<<division;
		}
};

class mark: protected student{
    float percent;
    int i;
	public :
		void get_marks(){
			for(i=0;i<5;i++){
				cout<<" Enter Marks of subject "<<i+1<<" : ";
			    cin>>marks[i];
			    while(marks[i] < 0){
			    	cout<<"( MARKS cannot be -ve )";
			    	cout<<" Enter Marks of subject "<<i+1<<" : ";
			    	cin>>marks[i];
			    }
			}
		}
		void display_marks(){
			for(i=0;i<5;i++){
				cout<<"\n Marks of subject "<<i+1<<" : "<<marks[i];;
			}
			float sum = 0;
			for(i=0;i<5;i++){
				sum = sum + marks[i];;
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

class result: protected mark{
	public:
		void get_result(){
			get_data();
			get_marks();
		}
		void display_result(){
			display();
			display_marks();
		}
};

int main(){
    result rst;
    rst.get_result();
    cout<<"\n\n";
    rst.display_result();

}
