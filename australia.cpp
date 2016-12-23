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
		int oid;
		string name;
		string address;
		
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
			cout<<"ORDER PLACED IS \n\n";
			cout<<"32' Samsung Plasma TV -$400 usd\n400Watts LG AmplifierAV Receiver-$150\n2-channel Panasonic speakers-$50\n";
			cost=(400+150+50);
			cout<<"total cost"<<cost;
			
			
		}
			if(system==2)
		{
			cout<<"ORDER PLACED IS \n\n";
			cout<<"42' Song LCD TV -$900\n500Watts Yamaha Amplifier/AV Receiver -$300\n5-channel Sony speakers -$120\n";
			cost=(900+300+120);
			cout<<"total cost"<<cost;
			
			
		}	if(system==3)
		{
			cout<<"ORDER PLACED IS \n\n";
			cout<<"60' LED TV -$1800\n650Watts Onkyo Amplifier/AV Receiver -$950\n7-channel Bose speaker system -$1500\n";
			cost=(1800+950+1500);
			cout<<"total cost"<<cost;
			
			
		}
		cout<<"\nADDITIONAL COMPONENT IS\n\n";
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
		cost=cost*1.35;
		cout<<"\n\nTOTAL COST IN AUSTRALIAN DOLLAR IS:"<<cost;
		cout<<"\n\nEnter Y or N to confirm order:\n";
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
	
		return cost;
		return ready;
	}
	
	virtual delivery(int oid)
	{

	
		if(ready==1)
		{
		cout<<"\nDELIVERY DETAILS\n";
		cout<<"\nEnter the name:\t ";
		cin>>name;
		cout<<"\nenter the address where to be delivered:\t";
		cin>>address;
		cout<<"\ndelivery summary\n_______________________________________";
		cout<<"\nNAME:\t"<<name;
		cout<<"\nADDRESS:\t"<<address;
		cout<<"\nNEED TO PAY:\t"<<cost;
		cout<<"\nORDER ID IS:-\t"<<oid<<"\n_______________________________________";
		}
		else if(ready==0)
		{
			cout<<"return to main menu";
		}
	}
	virtual orderdetails()
	{
		cout<<"\nNAME:\t"<<name;
		cout<<"\nADDRESS:\t"<<address;
		cout<<"\nNEED TO PAY:\t"<<cost;
		cout<<"\nORDER ID IS:-\t"<<oid;
		
	}
	
};






int main()
{
int choice;
australia obj[100];

int i=0;
int pot;
int moid;
int mm;
while(1)
{

cout<<"\nWelcome to cheapskate home appliances";
cout<<"\n\n\nselect your country";
cout<<"\n\n1.Australia\n\n2.newzealand\n\n3.exit";
cin>>choice;
system ("CLS");
if(choice==1)
{
	
	cout<<"1.PLACE ORDER\n\n2.TRACK ORDER\n";
	cin>>pot;
	if(pot==1)
	{
	
		system ("CLS");
	obj[i].placeorder();
	system ("CLS");
	obj[i].orderplaced();

	obj[i].delivery(i);
	i++;
		cout<<"\nPRESS 1 TO RETURN MAIN MENU";
		cin>>mm;
		if(mm==1)
		{
			system ("CLS");	
		}
	}
	else if (pot==2)
	{
		cout<<"ENTER YOUR ORDER ID:";
		cin>>moid;
		obj[moid].orderdetails();
		cout<<"\nPRESS 1 TO RETURN MAIN MENU";
		cin>>mm;
		if(mm==1)
		{
			system ("CLS");	
		}
	}

}

if(choice==3)
{
	cout<<"thank you and have a nice day";
	exit(0);

}
}
return 0;
}

