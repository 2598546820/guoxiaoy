#include<iostream>
#include<cstring>
using namespace std;
class SeasonTransform{
	public:
		SeasonTransform(int n){
			number=n;
		}
		void Transform(){
			if(number==1){
				strcpy(Season,"Spring");
			}
			if(number==2){
				strcpy(Season,"Summer");
			}
			if(number==3){
				strcpy(Season,"Fall");
			}
			if(number==4){
				strcpy(Season,"Winter");
			}
		}
		int number;
		char Season[];
};
int main(){
	int n;
	cin>>n;
	SeasonTransform ST(n);
	ST.Transform();
	cout<<ST.Season;
}
