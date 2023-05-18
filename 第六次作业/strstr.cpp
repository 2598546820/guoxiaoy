#include<iostream>
using namespace std;
class Strstr{
	public:
		Strstr(){
			count2=0;
		}
		void mystrstr(char a[],char b[]){
			int i;
			for(i=0;a[i]!='\0';i++){
				;
			}
			number1=i;
			for(i=0;b[i]!='\0';i++){
				;
			}
			number2=i;
			for(i=0;i<number1;i++){
				if(a[i]==b[0]){
					count=0;
					for(int j=0;(i+j)<number1&&j<number2;j++){
						if(a[i+j]==b[j]){
							count++;
						}
					}
					if(count==number2){
						count2++;
						cout<<i;
						break;
					}
				}
			}
			if(count2==0){
				cout<<-1;
			}
		}
		int number1,number2,count,count2;
};
int main(){
	char a[500]={0},b[500]={0};
	cin>>a>>b;
	Strstr ss;
	ss.mystrstr(a,b);
}
