#include<iostream>
using namespace std;
class YangHui{
	public:
		YangHui(int n){
			number=n;
			for(int i=0;i<number;i++){
				a[i][0]=1;
				a[i][i]=1;
			}
		}
		void yanghuisanjiao(){
			for(int i=2;i<number;i++){
				for(int j=1;j<i;j++){
					a[i][j]=a[i-1][j-1]+a[i-1][j];
				}
			}
		}
		int number,a[20][20];
};
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int n;
		cin>>n;
		YangHui YH(n);
		YH.yanghuisanjiao();
		for(int j=0;j<n;j++){
			for(int k=0;k<=j;k++){
				cout<<YH.a[j][k]<<" ";
			}
			cout<<endl;
		}
	}
}
