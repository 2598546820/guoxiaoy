#include<iostream>
using namespace std;
class Frommintomax{
	public:
		int sort(int num[],int n){
			number1=n;
			for(int i=number1-1;i>0;i--){
				for(int j=0;j<i;j++){
					if(num[j]>num[j+1]){
						number2=num[j];
						num[j]=num[j+1];
						num[j+1]=number2;
					}
				}
			}
		}
		int number1,number2;
};
int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Frommintomax FMTM;
	FMTM.sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
