#include<iostream>
#include<stdio.h>
using namespace std;
class Sumofeven{
	public:
		bool Even(int n){
			number=n;
			if(n%2==0){
				return 1;
			}
			else{
				return 0;
			}
		}
		int number;
};
int main(){
	int n=1,sum=0;
	Sumofeven Soe;
	for(;n>0;){
		cin>>n;
		if(Soe.Even(n)==0){
			sum=sum+n;
		}
	}
	cout<<sum;
	return 0;
}
