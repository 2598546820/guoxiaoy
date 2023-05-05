#include<iostream>
using namespace std;
class Ifcancel{
	public:
		Ifcancel(){
			count=0;
		}
		int IsCancel(int a[],int n,int k){
			number1=n;
			number2=k;
			for(int i=0;i<number1;i++){
				if(a[i]<=0){
					count++;
				}
			}
			if(count>=number2){
				cout<<"NO";
			}
			else{
				cout<<"YES";
			}
		} 
		int number1,number2,count;
}; 
int main(){
	int N,K,a[1000];
	cin>>N>>K;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	Ifcancel IC;
	IC.IsCancel(a,N,K);
}
