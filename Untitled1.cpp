#include<iostream>
#include<stdio.h>
#include<cstring>
#include <stdlib.h>
using namespace std;

class cheapskate
{
	public:
		int ad=1.35;
		int nzd;
		int cost;
		int system;	
		int addcomp;
		int ready;
		
};

class australia:public cheapskate
{
	public:
		int op;int op1;
		virtual  placeorder()
	{
		
		cout<<"Welcome to australia\n";
		cout<<"Choose a home theatre system\n";
		cout<<"1.Entry\n2.Intermediate\n3.cinematic\n";
		cin>>op;
		switch(op)
		{
			case 1:system=1;
			break;
			case 2:system=2;
			break;
			case 3:system=3;
			break;
			default:cout<<"invalid option";
		}
	
		cout<<"Enter any additional component";
		cout<<"\n1.HDMI CABLES\n2.universal remote\n3.Wireless headphones";
		cin>>op1;
			switch(op1)
		{
			case 1:addcomp=1;
			break;
			case 2:addcomp=2;
			break;
			case 3:addcomp=3;
			break;
			default:cout<<"invalid option" ;
		}
		return system;
		return addcomp;
	}

	virtual orderplaced()
	{
		char yon;

		if(system==1)
		{
			cout<<"ORDER PLACED IS \n";
			cout<<"32' Samsung Plasma TV -$400 usd\n400Watts LG AmplifierAV Receiver-$150\n2-channel Panasonic speakers-$50\n";
			cost=(400+150+50);
			cout<<"total cost"<<cost;
			
			
		}
		cout<<"\nADDITIONAL COMPONENT IS\n";
		if(addcomp==1)
		{
			cout<<"Hdmi cable-$5 usd";
			cost=cost+5;
			cout<<"\ncost after"<<cost;
		}
		else if(addcomp==2)
		{
			cout<<"Universal remote-$200 usd";
			cost=cost+200;
			cout<<"\ncost after"<<cost;
		}
		else if(addcomp==3)
		{
			cout<<"wireless headphones-$120 usd";
			cost=cost+120;
			cout<<"\ncost after"<<cost;
		}
		cost=cost*ad;
		cout<<"\nTOTAL COST IN AUSTRALIAN DOLLAR IS:"<<cost;
		cout<<"\nEnter Y or N to confirm order:\n";
		cin>>yon;
		switch(yon)
		{
			case 'y':
			cout<<"order is confirmed and ready to be delivered";
			ready=1;
			break;
			case 'n':cout<<"order is NOT confirmed";
			ready=0;
			break;
			case 'Y':cout<<"order is confirmed and ready to be delivered";
			ready=1;
			break;
			case 'N':cout<<"order is NOT confirmed";
			ready=0;
			break;
			default:
				cout<<"invalid";


		}
		return ready;
		return cost;
	}
	
	virtual delivery()
	{
		string name;
		string address;
	
		if(ready==1)
		{
		cout<<"\nDELIVERY DETAILS\n";
		cout<<"\nEnter the name:\t ";
		cin>>name;
		cout<<"\nenter the address where to be delivered:\t";
		cin>>address;
		cout<<"\ndelivery summary\n_________________-";
		cout<<"\nNAME:\t"<<name;
		cout<<"\nADDRESS:\t"<<address;
		cout<<"\nNEED TO PAY:\t"<<cost;
		}
		else if(ready==0)
		{
			cout<<"return to main menu";
		}
	}
};


int main()
{
int choice;
australia obj;

cout<<"Welcome to cheapskate home appliances";
cout<<"\n\n\nselect your country";
cout<<"\n\n1.Australia\n\n2.newzealand";
cin>>choice;
system ("CLS");
if(choice==1)
{
	obj.placeorder();
	system ("CLS");
	obj.orderplaced();
	system ("CLS");
	obj.delivery();
}
return 0;
}

