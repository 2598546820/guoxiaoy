#include<iostream>
#include<math.h>
using namespace std;
class Transform{
	public:
		Transform(int n){
			Decimal=n;
			Octonary=0;
		}
		void Tsmain(){
			int i;
			for(i=0;Decimal!=0;i++){
				a[i]=Decimal%8;
				Decimal=Decimal/8;
			}
			for(int j=0;j<i;j++){
				Octonary=Octonary+a[j]*pow(10,j);
			}
		}
		int Decimal,Octonary,a[20]={0};
};
int main(){
	int n;
	cin>>n;
	Transform Ts(n);
	Ts.Tsmain();
	cout<<Ts.Octonary;
}
