#include<iostream>
#include<stdio.h>
using namespace std;
class Stringfind{
	public:
		Stringfind(){
			Ifexist=0;
		}
		void numberfind(char a[],char b[],int num[]){
			int k=0;
			for(int i=0;i<countb;i++){
				if(b[i]==a[0]){
					int count=0;
					for(int j=0;j<counta;j++){
						if(b[i+j]==a[j]){
							count++;
						}
					}
					if(count==counta){
						num[k]=i;
						k++;
						Ifexist++;
					}
				}
			}
			if(Ifexist!=0){
				for(int i=0;num[i]!='\0';i++){
					cout<<num[i]<<" ";
				}
			}
			else{
				cout<<"-1";
			}
		}
		int counta,countb,Ifexist;
};
int main(){
	char a[10000],b[10000];
	int num[10000],i;
	Stringfind SF;
	scanf("%[^\n]",a);
	getchar();
	for(i=0;a[i]!='\0';i++){
		;
	}
	SF.counta=i;
	scanf("%[^\n]",b);
	for(i=0;b[i]!='\0';i++){
		;
	}
	SF.countb=i;
	SF.numberfind(a,b,num);
}
