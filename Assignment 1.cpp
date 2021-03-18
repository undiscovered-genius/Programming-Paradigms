#include<iostream>
#include <cmath>
#include <cstring>

using namespace std;
int num , pw,r[8], d, s[8], h[8];
char cc;
int dec();
void bin_dec();
void oct_dec();
int hex_dec();
int main()
{
	int rev,q,i,o;
	
	int st = 1,ch;
	d = num;
	while(st==1)
	{
	cout<<"\n\nOperations : \n";
	cout<<"1. Convert decimal to all other \n";
	cout<<"2. Convert binary to all other \n";
	cout<<"3. Convert octal to all other \n";
	cout<<"4. Convert heca to all other  \n";

	cout<<"\n Enter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
            
            pw = 2;
            dec();
            break;
			
		case 2:
               	bin_dec();
			    break;
				
		case 3:	
               oct_dec();
			    break;
			
		case 4:
	          hex_dec();
			break;
		
	}
	cout<<"\n\n WAnt to continue? 1-YES 0-No : ";
	cin>>st;
	
 }
}

void bin_dec(){
	int bin, dec = 0, temp = 0, i;
	cout<<"\nEnter a binary number : ";
	cin>>bin;
	while(bin!=0){
		dec = dec + (bin%10) * pow(2,temp);
		temp++;
		bin = bin/10;
	}
	cout<<"\nDecimal representation : "<<dec;
	
	pw = 8;
	    d = dec;
		for(i=0;dec>0;i++)
	{
		s[i] = dec%pw;
		dec = dec/pw;
	}
	    cout<<"\nocta representation : ";
	    for(i=i-1;i>=0;i--)
	{
			cout<<""<<s[i];
	}
	
	    dec = d;
	    pw = 16;
		for(i=0;dec>0;i++)
	{
		h[i] = dec%pw;
		dec = dec/pw;
	}
	    cout<<"\nhexa representation : ";
	    for(i=i-1;i>=0;i--)
	{
		if(h[i]<10){
			cout<<""<<h[i];
		}
		else{
			cc = h[i]+55;
			cout<<""<<cc;
			//cout<<""<<h[i]+55;
		}
	}
}

void oct_dec(){
		int oct, dec = 0, temp = 0,i,o[8],p[8];
	cout<<"\nEnter a octa-decimal number : ";
	cin>>oct;
	while(oct!=0){
		dec = dec + (oct%10) * pow(8,temp);
		temp++;
		oct = oct/10;
	}
	cout<<"\nDecimal representation : "<<dec;
	
		pw = 2;
	    d = dec;
		for(i=0;dec>0;i++)
	{
		o[i] = dec%pw;
		dec = dec/pw;
	}
	    cout<<"\nbinary representation : ";
	    for(i=i-1;i>=0;i--)
	{
			cout<<""<<o[i];
	}
	
	    dec = d;
	    pw = 16;
		for(i=0;dec>0;i++)
	{
		p[i] = dec%pw;
		dec = dec/pw;
	}
	    cout<<"\nhexa representation : ";
	    for(i=i-1;i>=0;i--)
	{
		if(p[i]<10){
			cout<<""<<p[i];
		}
		else{
			cc = h[i]+55;
			cout<<""<<cc;
		}
	}
}

int hex_dec(){
		int  dec = 0, temp = 0, rev, i,len;
		char hex[5];
		
	cout<<"\nEnter a hexa-decimal number : ";

	cin>>hex;
	//gets(hex);
	len = strlen(hex);    //hex =25  len =2
	len--;    //len = 1
	for(i=0;hex[i]!='\0';i++){
		if(hex[i]>='0' && hex[i]<='9')//ascii valye of 0 to 9 = 48 to 57
        {
            rev = hex[i] - 48; //rev=2 rev=5
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            rev = hex[i] - 55;
        }
		dec = dec + (rev) * pow(16,len); //dec=32 dec = 32+5 =37
		temp++;
		len--;  //len=0
	}
	cout<<"\nDecimal representation : "<<dec;
	
		pw = 2;
	    d = dec;
		for(i=0;dec>0;i++)
	{
		s[i] = dec%pw;
		dec = dec/pw;
	}
	    cout<<"\nbinary representation : ";
	    for(i=i-1;i>=0;i--)
	{
			cout<<""<<s[i];
	}
	
	    dec = d;
	    pw = 8;
		for(i=0;dec>0;i++)
	{
		h[i] = dec%pw;
		dec = dec/pw;
	}
	    cout<<"\noctal representation : ";  34
	    for(i=i-1;i>=0;i--)
	{
			cout<<""<<h[i];
	}
}

int dec(){
	int i;
	cout<<"Enter a +ve non-decimal number : ";
	cin>>num;
	 d = num ;
		{
		
				for(i=0;num>0;i++)
	{
		r[i] = num%pw;
		num = num/pw;
	}
	    cout<<"binary representation : ";
	    for(i=i-1;i>=0;i--)
	{
			cout<<""<<r[i];
    }
    
	    pw = 8;
	    num = d;
		for(i=0;num>0;i++)
	{
		s[i] = num%pw;
		num = num/pw;
	}
	    cout<<"\nocta representation : ";
	    for(i=i-1;i>=0;i--)
	{
			cout<<""<<s[i];
	}
	
	    num = d;
	    pw = 16;
		for(i=0;num>0;i++)
	{
		h[i] = num%pw;
		num = num/pw;
	}
	    cout<<"\nhexa representation : ";
	    for(i=i-1;i>=0;i--)
	{
		if(h[i]<10){
			cout<<""<<h[i];
		}
		else{
			cc = h[i]+55;
			cout<<""<<cc;
		}
	}
}}
