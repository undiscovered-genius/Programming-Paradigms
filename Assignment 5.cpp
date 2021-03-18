#include<iostream>
using namespace std;
class student{
	int prn;
	char name[10];
	int marks[5];
	int batch;
	char branch[5];
	char division;
	public:
		void get_data(){
			int i;
			cout<<" Enter PRN (lst 3 digit): ";
			cin>>prn;
			cout<<" Enter Name : ";
			cin>>name;
			for(i=0;i<5;i++){
				cout<<" Enter Marks of subject "<<i+1<<" : ";
			    cin>>marks[i];
			}
			cout<<" Enter Batch : ";
			cin>>batch;
			cout<<" Enter Branch : ";
			cin>>branch;
			cout<<" Enter Division : ";
			cin>>division;
		}
		void per(){
			int i;
			float sum = 0, percent;
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
		void display(){
			int i;
			cout<<"\n PRN : "<<prn;
			cout<<"\n Name : "<<name;
			cout<<"\n Batch : "<<batch;
			cout<<"\n Branch : "<<branch;
			cout<<"\n Division : "<<division;
			for(i=0;i<5;i++){
				cout<<"\n Marks of subject "<<i+1<<" : "<<marks[i];;
			}
			//cout<<"\n Percentage : "<<percent;
			//cout<<"\n Percentage : "<<per();
		}
};

int main(){
student st[1];
int i;
for(i=0;i<2;i++){
	st[i].get_data();
	cout<<"\n";
}
for(i=0;i<2;i++){
	st[i].display();
    st[i].per();
    cout<<"\n";
}
}
