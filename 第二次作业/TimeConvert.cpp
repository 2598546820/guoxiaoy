#include<iostream>
using namespace std;
class TimeConvert{
	public:
		TimeConvert(int bjt){
			BJT=bjt;
		}
		void Compute(){
			if(BJT>=800){
				UTC=BJT-800;
			}
			else{
				UTC=BJT+2400-800;
			}
		}
		int BJT,UTC;
};
int main(){
	int bjt;
	cin>>bjt;
	TimeConvert TC(bjt);
	TC.Compute();
	cout<<TC.UTC;
}
