#include<iostream>
#include<stdlib.h>

#include<conio.h>
using namespace std;
int count = 0;
class Item{
	int code;
	char name[10];
	float price;
	int quantity;
	float total_pr;
	public:
		void get_item(){
			int i;
			cout<<"\n Enter 4 digit product Code : ";
			cin>>code;
			cout<<" Enter Name : ";
			cin>>name;
			cout<<" Enter Price : ";
			cin>>price;
			cout<<" Enter Quantity : ";
			cin>>quantity;
			total_pr = price*quantity;
		}
		void dis_item(){
			cout<<"       "<<code<<"    "<<name<<"    "<<price<<"        "<<quantity<<"       "<<total_pr;
		    //cout<<"\n Code : "<<code;
		    //cout<<"\n Price : "<<price;
		    //cout<<"\n Quantity : "<<quantity;
		    //cout<<"\n Amount : "<<price*quantity;
		}
		void remove(){
			
		}
		void mod_item(){
			int ss;
			cout<<"\n 1 Modify Name";
	        cout<<"\n 2 Modify Price";
	        cout<<"\n 3 Modify Quantity ";
	        cout<<"\n 4 Modify All ";
	        cout<<"\n  Enter your choice : "<<flush;
	        cin>>ss;
	        switch(ss){
	        	case 1:
	        		cout<<" Enter Name : ";
			        cin>>name;
			        cout<<" Item Modified!\n";
	        		break;
	        	case 2:
	        		cout<<" Enter Price : ";
	                cin>>price;
	                total_pr = price*quantity;
	                cout<<" Item Modified!\n";
				    break;
				case 3:
					cout<<" Enter Quantity : ";
					cin>>quantity;
	                total_pr = price*quantity;
	                cout<<" Item Modified!\n";
				    break;
				case 4:
					//cout<<"\n Enter Code : ";
	                //cin>>code;
	                cout<<" Enter Name : ";
			        cin>>name;
	                cout<<" Enter Price : ";
	                cin>>price;
	                cout<<" Enter Quantity : ";
	                cin>>quantity;
	                total_pr = price*quantity;
	                cout<<" Item Modified!\n";
				    break;
				default:
                    cout<<"Invalid choice entered";				
	        }
		}
};

int main(){
	int mx_cnt,n,st=1,ch;
	Item item[20];
	int i,j;
	//cout<<"\n 1 Enter Record";
	while(st==1)
    { 
        cout<<"\n 1 Enter Item";
	    cout<<"\n 2 Delete Item";
	    cout<<"\n 3 Modify Item ";
	    cout<<"\n 4 Display Item ";
	    cout<<"\n  Enter your choice : "<<flush;
	    cin>>ch;
        switch(ch)
        {
            case 0:
                exit(0);
                break;
            case 1:
            	cout<<"Enter no. of items to add : ";
	            cin>>n;
	            
	            mx_cnt = count + n;
	
	            for(i=count;i<mx_cnt;i++){
	            	cout<<"Item "<<count+1;
	               item[i].get_item();
	               cout<<"\n";
	               count ++;
                }
                break;
            case 2:
            	cout<<"\n Total no. of Item : "<<count;
            	cout<<"\n Enter the Item no. to be Deleted : ";
            	cin>>i;
            	if(i > count){
            		cout<<"\n No Items Present!";
            	}else{
            		for(j=i-1;j<count-1;j++){
            			item[j]= item[j+1];
            		}
            		cout<<"Item Deleted!";
            		count = count - 1;
            		mx_cnt =mx_cnt -1;
            	}
                break;
            case 3:
            	cout<<"\n Total no. of Item : "<<count;
            	cout<<"\n Enter the Item no. to be Modified : ";
            	cin>>i;
            	if(i > count){
            		cout<<"\n No Items Present!";
            	}else{
            		cout<<"\n\n Item  :"<<i;
            		item[i-1].mod_item();
            	} 
                break;
            case 4:
            	cout<<"\n SR. No.   "<<"Code   "<<"Name   "<<"Price   "<<"Quantity   "<<"Total";
                for(i=0;i<count;i++){
                	cout<<"\n    "<<i+1;
    	             item[i].dis_item();  
                }
                
                break;
            default:
                cout<<"Invalid choice entered";

        }
        cout<<"\n Press 1 to continue : "<<flush;
        cin>>st;
    }
    
}
