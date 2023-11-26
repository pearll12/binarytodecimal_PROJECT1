#include<iostream>
#include<math.h>
using namespace std;
//CONVERTING BINARY TO DECIMAL
int main() {
	int num;
	cout<<"Enter binary number : ";
	cin>>num;
	int c=0;
	int dec=0;
	int check=0;
	for(int p=0; num>0 ; p++){
		check= num%10;
		if(check==1){
			dec= dec + pow(2,p);
		}
		num=num/10;
	}
	cout<< "The decimal number is : "<< dec;
	
}

