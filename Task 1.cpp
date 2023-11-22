#include <iostream>
using namespace std;

int main(){
	int count, num;
	cout<<"Please Enter a Number to Check Factors: ";
	cin>>num;
	for(count=1; count<=num; count++){
		if(num%count==0){
			cout<<count<<endl;
			continue;
		}
	}
}