#include<iostream>
#include<stdio.h>
using namespace std;
class Turnaround{
	public:
		void exchange(char n[]){
			int i,j;
			for(i=32;i>1;i--){
				for(j=0;j<i-1;j++){
					number=n[j];
					n[j]=n[j+1];
					n[j+1]=number;
				}
			}
			for(i=0;i<32;i++){
				cout<<n[i];
			}
		}
		char number;
};
int main(){
	char n[32];
	scanf("%s",&n);
	Turnaround TA;
	TA.exchange(n);
}
