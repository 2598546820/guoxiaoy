#include<iostream>
#include<math.h>
using namespace std;
class Transform{
	public:
		Transform(int n,int b){
			Decimal=n;
			Octonary=0;
			Base=b;
			a[20]={0};
		}
		void Tsmain(){
			int i;
			for(i=0;Decimal!=0;i++){
				a[i]=Decimal%Base;
				Decimal=Decimal/Base;
			}
			for(int j=0;j<i;j++){
				Octonary=Octonary+a[j]*pow(10,j);
			}
		}
		int Decimal,Octonary,Base,a[20];
};
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int n,Base;
	    cin>>n>>Base;
	    Transform Ts(n,Base);
	    Ts.Tsmain();
	    cout<<Ts.Octonary<<endl;
    }
}
