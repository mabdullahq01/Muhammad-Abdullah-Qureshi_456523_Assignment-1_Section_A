#include <iostream>
using namespace std;

int main(){
	int array[5]={1, 2, 3, 4, 5};
	int array2[5];
	int count, num=2, count2=5;
		for(count=0; count<5; count++){
		
		array2[count]=array[count];
	}
	
	while(num!= -1){
		cout<<"Enter Input into Array, Enter -1 to Quit!"<<endl;
		cin>>num;
		if(num==-1){
			break;
		}
		else{
		
		array2[count2]=num;
		count2++;
	}
	}
	
	for(count=0; count<=count2-1; count++){
	
		cout<<array2[count]<<" ";
	}


}