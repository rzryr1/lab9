#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double loan;
double percent;
double py;
double tt;
double nb;
double rate1 ;
double rate2 ;
int year=1;
int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> percent;
	cout << "Enter amount you can pay per year: ";
	cin >> py;	
	double rate1 = (percent/100);	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do
	{
	cout << fixed << setprecision(2);		
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;	
	double rate2 = (rate1*loan);
	cout << setw(13) << left << rate2;
	double tt = loan+rate2;
	cout << setw(13) << left << tt;
	if(tt<py){
		py=tt;
	}
	cout << setw(13) << left << py;	
	loan=tt-py;
	cout << setw(13) << left << loan;
	cout << "\n";
	year++;
		
	} while (loan >0 );
	
	
	return 0;
}
	


