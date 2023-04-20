#include<iostream>
#include<stdio.h>
using namespace std;
class What_Day{
	public:
		What_Day(int y,int m,int d){
			Year=y;
			Month=m;
			Day=d;
		}
		void GetDay2span(){
			if(Year%100==0){
				if(Year%400==0){
					Month2span=29;
				}
				else{
					Month2span=28;
				}
			}
			else{
				if(Year%4==0){
					Month2span=29;
				}
				else{
					Month2span=28;
				}
			}
			switch(Month){
				case 1:
					Day2span=Day-1;
					break;
				case 2:
					Day2span=31+Day-1;
					break;
				case 3:
					Day2span=31+Month2span+Day-1;
					break;
				case 4:
					Day2span=31*2+Month2span+Day-1;
					break;
				case 5:
					Day2span=31*2+30+Month2span+Day-1;
					break;
				case 6:
					Day2span=31*3+30+Month2span+Day-1;
					break;
				case 7:
					Day2span=31*3+30*2+Month2span+Day-1;
					break;
				case 8:
					Day2span=31*4+30*2+Month2span+Day-1;
					break;
			    case 9:
					Day2span=31*5+30*2+Month2span+Day-1;
					break;
				case 10:
					Day2span=31*5+30*3+Month2span+Day-1;
					break;
				case 11:
					Day2span=31*6+30*3+Month2span+Day-1;
					break;
				case 12:
					Day2span=31*6+30*4+Month2span+Day-1;
					break;
			}
		}
		void Datespan(){
			RinYear=(Year-1900)/4-((Year-1900)/100)+((Year-2000)/400+1);
			Day1span=RinYear*366+((Year-1900)-RinYear)*365;
			Ds=Day1span+Day2span;
		}
		int Year,Month,Day,RinYear,Day1span,Day2span,Month2span,Ds;
};
int main(){
	char a[20];
	int Y=0,M=0,D=0,i;
	cin>>a;
	for(i=0;a[i]!='-';i++){
		Y=Y*10+a[i]-'0';
	}
	for(i++;a[i]!='-';i++){
		M=M*10+a[i]-'0';
	}
	for(i++;a[i]!='\0';i++){
		D=D*10+a[i]-'0';
	}
	What_Day WD(Y,M,D);
	WD.GetDay2span();
	WD.Datespan();
	switch(WD.Ds%7){
		case 0:
			cout<<"Monday";
			break;
		case 1:
			cout<<"Tuesday";
			break;
		case 2:
			cout<<"Wednesday";
			break;
		case 3:
			cout<<"Thursday";
			break;
		case 4:
			cout<<"Friday";
			break;
		case 5:
			cout<<"Saturday";
			break;
		case 6:
			cout<<"Sunday";
			break;
	}
}
