#include<iostream>
#include<math.h>
using namespace std;
class Transform{
	public:
		Transform(int n,int b){
			Decimal=n;
			Octonary=0;
			Base=b;
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
		void Tsmain1(){
			int i;
			for(i=0;Decimal!=0;i++){
				a[i]=Decimal%Base;
				Decimal=Decimal/Base;
				if(a[i]>=10){
					switch(a[i]){
					case 10:
						b[i]='A'; 
						break;
					case 11:
						b[i]='B';
						break;
					case 12:
						b[i]='C';
						break;
					case 13:
						b[i]='D';
						break;
					case 14:
						b[i]='E';
						break;
					case 15:
						b[i]='F';
						break;
				    }
				}
				else{
					b[i]=a[i]+'0';
				}
			}
			count=i;
			for(i=0;i<count-1-i;i++){
				Remain=b[i];
				b[i]=b[count-1-i];
				b[count-1-i]=Remain;
			}
		}
		int Decimal,Octonary,Base,a[20],count;
		char b[20],Remain;
};
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int n,Base;
	    cin>>n>>Base;
	    if(Base<10){
	    	Transform Ts(n,Base);
	        Ts.Tsmain();
	        cout<<Ts.Octonary<<endl;
	    }
	    else{
	    	Transform Ts(n,Base);
	        Ts.Tsmain1();
	        for(int j=0;j<Ts.count;j++){
	        	cout<<Ts.b[j];
	        }
	        cout<<endl;
	    }
    }
}
