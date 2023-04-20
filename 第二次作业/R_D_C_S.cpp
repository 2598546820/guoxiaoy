#include<iostream>
using namespace std;
class R_D_C_S{
	public:
		R_D_C_S(int r){
			R=r;
		}
		void DCompute(){
			D=2*R;
		}
		void CCompute(){
			C=2*3.14*R;
		}
		void SCompute(){
			S=3.14*R*R;
		}
		float C,S;
		int D,R;
};
int main(){
	int r;
	cin>>r;
	R_D_C_S RDCS(r);
	RDCS.DCompute();
	RDCS.CCompute();
	RDCS.SCompute();
	cout<<RDCS.D<<endl<<RDCS.C<<endl<<RDCS.S;
}
