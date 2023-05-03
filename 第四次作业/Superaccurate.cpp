#include<iostream>
#include<stdio.h>
using namespace std;
class Superaccurate{
	public:
		Superaccurate(int a,int b){
			number1=a;
			number2=b;
		}
		void Compute(){
			int i;
			for(i=0;number1!=0&&i<200;i++){
				a[i]=(number1*10)/number2;
				number1=(number1*10)%number2;
			}
			count=i;
		}
		int number1,number2,a[200],count;
};
int main(){
	int a,b;
	scanf("%d/%d",&a,&b);
	Superaccurate SA(a,b);
	SA.Compute();
	cout<<"0.";
	for(int i=0;i<SA.count;i++){
		cout<<SA.a[i];
	}
}
