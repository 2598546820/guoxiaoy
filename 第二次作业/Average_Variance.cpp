#include<iostream>
#include<stdio.h>
using namespace std;
class Average_Variance{
	public:
		Average_Variance(float n1,float n2,float n3,float n4,float n5,float n6){
			Number1=n1;
			Number2=n2;
			Number3=n3;
			Number4=n4;
			Number5=n5;
			Number6=n6;
		}
		void AverageCompute(){
			Average=(Number1+Number2+Number3+Number4+Number5+Number6)/6;
		}
		void VarianceCompute(){
			Variance=((Number1-Average)*(Number1-Average)+(Number2-Average)*(Number2-Average)+(Number3-Average)*(Number3-Average)+(Number4-Average)*(Number4-Average)+(Number5-Average)*(Number5-Average)+(Number6-Average)*(Number6-Average))/6; 
		}
		float Average,Variance,Number1,Number2,Number3,Number4,Number5,Number6;
};
int main(){
	int n;
	float a[6];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<6;j++){
			cin>>a[j];
		}
		Average_Variance AV(a[0],a[1],a[2],a[3],a[4],a[5]);
		AV.AverageCompute();
		AV.VarianceCompute();
		printf("%.2f ",AV.Average);
		printf("%.2f",AV.Variance);
	}
}

