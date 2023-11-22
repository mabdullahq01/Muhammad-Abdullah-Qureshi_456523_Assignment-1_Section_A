#include <iostream>
using namespace std;

int main(){
	int num;
	bool flag;
	cout<<"Enter a Value: ";
	cin>>num;
	if(num>10 && num<=20){
		flag=true;
	}
	else{
		flag=false;
	}
	cout<<static_cast<int>(flag)<<endl;
	
}