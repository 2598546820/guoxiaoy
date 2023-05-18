#include<iostream>
#include<stdio.h>
using namespace std;
class Powdesign{
	public:
		void Pow(int x,int n){
			number=x;
			number2=number;
			pow0=n;
			for(int i=1;i<pow0;i++){
				number2=number2*number;
			}
			cout<<number2;
		}
		int number,pow0,number2;
};
int main(){
	int x,n;
	scanf("%d,%d",&x,&n);
	Powdesign PD;
	PD.Pow(x,n);
}
