#include <iostream>
using namespace std;

int main(){
	int dividend=0, divisor=1, remainder, qoutient, result, count;
	while(divisor>dividend){
		cout<<"Dividend Must be Greater than the Divisor!"<<endl;
		cout<<"Enter the Dividend: ";
		cin>>dividend;
		cout<<"Enter the Divisor: ";
		cin>>divisor;
	}
	for(count=1; count<=dividend; count++){
		remainder=dividend%divisor;
		result=(divisor*count)+remainder;
		if(result==dividend){
			qoutient=count;
			break;
		}
	}
	cout<<dividend<<" / "<<divisor<<" = "<<qoutient<<endl;
	if(remainder>0)
	{
		cout<<"The Remainder is: "<<remainder;	
	}
	return 0;
}