#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int wzrost;
	double waga;
	string imie;
	
	cout<<"Podaj swoje imie"<<endl;
	cin>>imie;
	cout<<"Podaj swoja wage"<<endl;
	cin>>waga;
	cout<<"Podaj swoj wzrost"<<endl;
	cin>>wzrost;
	
	cout<<"Imie: "<<imie<<endl;
	cout<<"Waga: "<<waga<<" kg"<<endl;
	cout<<"Wzrost: "<<wzrost<<" cm"<<endl;
	
	
	return 0;
}
