#include<iostream>
using namespace std;
class Andian{
	public:
		Andian(int n){
			number=n;
			Ifexist=0;
		}
		void Search(){
			for(int i=0;i<number;i++){
				for(int j=0;j<number;j++){
					int count=0,count1=0;
					for(int k=0;k<number;k++){
						if(a[i][j]>=a[i][k]){
							count++;
						}
					}
					for(int k=0;k<number;k++){
						if(a[i][j]<=a[k][j]){
							count1++;
						}
					}
					if(count==number&&count1==number){
						cout<<i<<" "<<j;
						Ifexist=1;
					}
				}
			}
			if(Ifexist==0){
				cout<<"NO";
			}
		}
		int a[100][100],number,Ifexist;
};
int main(){
	int i,j,n;
	cin>>n;
	Andian AD(n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>AD.a[i][j];
		}
	}
	AD.Search();
}
