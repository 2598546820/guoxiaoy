#include<iostream>
#include<cstring>
using namespace std;
class AgeTransform{
	public:
		AgeTransform(int n){
			number=n;
		}
		void Transform(){
			if(number>=1&&number<=10){
				strcpy(Age,"Children");
			}
			if(number>=11&&number<=20){
				strcpy(Age,"Teenagers");
			}
			if(number>=21&&number<=40){
				strcpy(Age,"Youth");
			}
			if(number>=41&&number<=50){
				strcpy(Age,"middle-aged");
			}
			if(number>=51&&number<=80){
				strcpy(Age,"Elderly");
			}
			if(number>=81&&number<=100){
				strcpy(Age,"Old man");
			}
		}
		int number;
		char Age[];
};
int main(){
	int n;
	cin>>n;
	AgeTransform ST(n);
	ST.Transform();
	cout<<ST.Age;
}
