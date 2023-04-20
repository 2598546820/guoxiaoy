#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class Score{
	public:
		void ScoreCompute(){
			AllScore=DailyScore*0.4+FinalScore*0.6;
		}
		float DailyScore,FinalScore,AllScore;
		string name;
};
int main(){
	int i=0,n=0,count=0;
	Score S[100];
	for(;cin>>S[i].name!=0;){
		cin>>S[i].DailyScore;
		cin>>S[i].FinalScore;
		S[i].ScoreCompute();
		//cout<<S[i].name<<endl;
		i++;
	}
	//cout<<S[0].name<<endl;
	//cout<<S[1].name<<endl;
	n=i;
	for(;i!=0;){
		for(int j=0;j<n;j++){
			count=0;
			for(int k=0;k<n;k++){
				if(S[j].AllScore>=S[k].AllScore){
					count++;
				}
			}
			if(count==i){
				cout<<S[j].name;
				printf("%.2f ",S[j].DailyScore);
				printf("%.2f ",S[j].FinalScore);
				printf("%.2f ",S[j].AllScore);
				cout<<endl;
				S[j].AllScore==-1;
				i--;
			}
		}
	}
}
