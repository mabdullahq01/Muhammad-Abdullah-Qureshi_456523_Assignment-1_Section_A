#include<iostream>
using namespace std;

int main(){
	int arr[6];
	bool sort=false;
	int i,temp;
	for(i=0; i<6; i++){
		cout<<"Enter Value for Array: ";
		cin>>arr[i];
	}
	while(sort==false){
		for(i=0; i<6; i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		for(i=0; i<6; i++){
			if(arr[i]>arr[i+1]){
				sort=false;
				break;
			}
			else{
				sort=true;
		}
		}
	}
	cout<<"Sorted Array: { ";
	for(i=0; i<5; i++){
		cout<<arr[i]<<", ";
	}
	cout<<arr[5]<<"}";
}