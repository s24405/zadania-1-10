#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a;
	string b;
	cout<<"podaj pierwsze imie "<<endl;
	cin>>a;
	cout<<"podaj drugie umie "<<endl;
	cin>>b;
	
	if(a.size()>b.size())
	{
	cout<<"twoje pierwsze imie jest dluzsze od drugiego!"<<endl;
	}
	else if (a.size()<b.size())
	{
	cout<<"twoje drugie imie jest dluzsze od pierwszego..."<<endl;
	}
	else
	{
	cout<<"imiona maja taka sma dlugosc."<<endl;
	}
	
	return 0;
}
