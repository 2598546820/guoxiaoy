#include<iostream>
#include<stdio.h>
using namespace std;
class Standardphonenumber{
	public:
		void convert(char s){
			symbol=s;
			switch(symbol){
				case 'A':
					number=2;
					break;
				case 'B':
					number=2;
					break;
				case 'C':
					number=2;
					break;
				case 'D':
					number=3;
					break;
				case 'E':
					number=3;
					break;
				case 'F':
					number=3;
					break;
				case 'G':
					number=4;
					break;
				case 'H':
					number=4;
					break;
				case 'I':
					number=4;
					break;
				case 'J':
					number=5;
					break;
				case 'K':
					number=5;
					break;
				case 'L':
					number=5;
					break;
				case 'M':
					number=6;
					break;
				case 'N':
					number=6;
					break;
				case 'O':
					number=6;
					break;
				case 'P':
					number=7;
					break;
				case 'Q':
					number=7;
					break;
				case 'R':
					number=7;
					break;
				case 'S':
					number=7;
					break;
				case 'T':
					number=8;
					break;
				case 'U':
					number=8;
					break;
				case 'V':
					number=8;
					break;
				case 'W':
					number=9;
					break;
				case 'X':
					number=9;
					break;
				case 'Y':
					number=9;
					break;
				case 'Z':
					number=9;
					break;
			}
		}
		int number;
		char symbol;
};
int main(){
	char SY[50]={0};
	scanf("%s",SY);
	Standardphonenumber SPN;
	for(int i=0;SY[i]!='\0';i++){
		SPN.convert(SY[i]);
		cout<<SPN.number;
	}
}
