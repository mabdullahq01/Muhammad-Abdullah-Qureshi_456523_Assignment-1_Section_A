#include <iostream>
#include <string>
using namespace std;
int main(){
	int i, length, j, length1;
	string letter, letter1;
	char temp;
	bool flag=false;
	cout<<"Enter String 1: ";
	cin>>letter;
	cout<<"Enter String 2: ";
	cin>>letter1;
		length=letter.length();
	length1=letter1.length();
	if(length1==length){
	
	for(i=0; i<letter.length(); i++){
		if(letter[i]==letter1[i]){
			flag=true;
			continue;
		}
		else{
			flag=false;
			cout<<"Both Strings are Not the Same!"<<endl;
			break;
	}	
		}
		if(flag==true){
			cout<<"Strings are Same, Updating String!"<<endl;
			length=length-1;
			for(i=0; i<=length/2; i++){
				temp=letter[i];
				letter[i]=letter[length-i];
				letter[length-i]=temp;
			}
			
				cout<<"Updated String 1: "<<letter;
				
		}
		}
	else{
		cout<<"Both Strings are not Equal!";
	}
	
}