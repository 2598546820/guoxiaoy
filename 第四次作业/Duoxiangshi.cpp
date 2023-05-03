#include<iostream>
using namespace std;
class Duoxiangshi{
	public:
		void Fuzhi(int a,int b){
			Pow=a;
			number=b;
		}
		int Pow,number;
};
int main(){
	Duoxiangshi DXS[200];
	int a=1,b,i,j,k,l,count,count1,count2=0;
	for(i=0;a!=0;i++){
		cin>>a>>b;
		DXS[i].Fuzhi(a,b);
	}
	count=i;
	a=1;
	for(;a!=0;i++){
		cin>>a>>b;
		DXS[i].Fuzhi(a,b);
	}
	count1=i;
	for(j=0;j<count;j++){
		for(k=count;k<count1;k++){
			if(DXS[j].Pow==DXS[k].Pow){
				DXS[j].number=DXS[j].number+DXS[k].number;
				DXS[k].Pow=-1;
				DXS[k].number=0;
			}
		}
	}
	for(j=0;j<count1;j++){
		if(DXS[j].Pow!=-1){
			count2++;
		}
	}
	for(;count2!=0;){
		for(j=0;j<count1;j++){
			int count3=0;
			for(k=0;k<count1;k++){
				if(DXS[j].Pow>=DXS[k].Pow&&DXS[k].Pow!=-1&&DXS[j].Pow!=-1){
					count3++;
				}
			}
			if(count3==count2&&DXS[j].Pow!=-1){
				if(DXS[j].Pow>1){
					cout<<DXS[j].number<<"x"<<DXS[j].Pow<<"+";
				}
				else{
					if(DXS[j].Pow==0){
						cout<<DXS[j].number;
					}
					else{
						cout<<DXS[j].number<<"x+";
					}
				}
				count2--;
			}
		}
	}
}
