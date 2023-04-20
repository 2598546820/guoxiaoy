#include<iostream>
using namespace std;
class HuiWen{
	public:
		void AddOne(int m,int k1){
			K=k1;
			for(int i=0;i<k1;){
				m++;
				int m1,m2=0;
				m1=m;
				for(;m1!=0;){
					m2=m2*10+m1%10;
					m1=m1/10;
				}
				/*if(m==m2){
					cout<<m<<" ";
					i++;
				}*/
				if(m==m2){
					a[i]=m;
					i++;
				}
			}
		}
		int K,a[];
};
int main(){
	int N,m,k;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>m;
		cin>>k;
		HuiWen HW;
		HW.AddOne(m,k);
		for(int j=0;j<HW.K;j++){
			cout<<HW.a[j]<<" ";
		}
		cout<<endl;
	}
}
