#include <iostream>
using namespace std;

int main(){
	int N, i, j;
	bool flag=false;
	cout<<"Enter a Number to Check: ";
	cin>>N;
	i=N;
	while(i>1){
		j=i-1;
		flag=false;
		while(j>1){
			if(i%j==0){
//				cout<<i<<"  "<<j<<endl;
				flag=false;
				break;
			}
			else if(i%j==1){
				flag=true;
			}
			j--;	
		}
		
		
		if(flag==true){
			cout<<"Largest Prime Number Below "<<N<<" is: "<<i;
			break;
	}
	i--;
	}
}