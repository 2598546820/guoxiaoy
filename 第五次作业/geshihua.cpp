#include<iostream>
#include<stdio.h>
using namespace std;
class geshihua{
	public:
		geshihua(){
			count1=0;
		}
		void sort(char S[],char S1[],char S2[],int K){
			int i,j;
			for(i=0;S[i]!='\0';i++){
				if(S[i]!='-'){
					S1[count1]=S[i];
					if(S1[count1]<='z'&&S1[count1]>='a'){
						S1[count1]=S1[count1]+'A'-'a';
					} 
					count1++;
				}
			}
			count3=i;
			number1=count1%K;
			if(number1!=0){
				i=number1;
				count2=count1+count1/K;
			}
			else{
				i=4;
				count2=count1+count1/K-1;
			}
			for(;i<count2;i=i+K+1){
				S2[i]='-';
			}
			for(i=0,j=0;j<count3;i++){
				if(S2[i]!='-'){
					S2[i]=S1[j];
					j++;
				}
			}
			for(i=0;i<count2;i++){
				cout<<S2[i];
			}
		}
		int count1,count2,count3,number1;
};
int main(){
	char S[100]={0},S1[100]={0},S2[100]={0};
	int K;
	scanf("%s",S);
	getchar();
	cin>>K;
	geshihua GSH;
	GSH.sort(S,S1,S2,K);
}
