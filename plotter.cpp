#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
    double a=3.14/30;
	for(int i=0;i<=20;i++)
	{
		cout<<setw(31)<<setfill(' ')<<"|";
		int x=(int)(sin(i*a)*30);
		cout<<setw(x+1)<<setfill('*')<<"\n";
	}
	for(int i=9;i>=0;i--)
	{
		cout<<setw(31)<<setfill(' ')<<"|";
		int x=(int)(sin(i*a)*30);
		cout<<setw(x+1)<<setfill('*')<<"\n";
	}
	for(int i=1;i<=20;i++)
	{
		int x=(int)(sin(i*a)*30);
		cout<<setw(30-x+1)<<setfill(' ')<<"*";
		cout<<setw(x+1)<<setfill('*')<<"|\n";

	}
	for(int i=9;i>=0;i--)
	{
		int x=(int)(sin(i*a)*30);
		cout<<setw(30-x+1)<<setfill(' ')<<"*";
		cout<<setw(x+1)<<setfill('*')<<"|\n";

	}



	return 0;
}