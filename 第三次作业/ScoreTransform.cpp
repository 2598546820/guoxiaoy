#include<iostream>
#include<cstring>
using namespace std;
class ScoreTransform{
	public:
		ScoreTransform(int n){
			number=n;
		}
		void Transform(){
			if(number>=90){
				Score='A';
			}
			if(number>=80&&number<90){
				Score='B';
			}
			if(number>=70&&number<80){
				Score='C';
			}
			if(number>=60&&number<70){
				Score='D';
			}
			if(number<60){
				Score='E';
			}
		}
		int number;
		char Score;
};
int main(){
	int n;
	cin>>n;
	ScoreTransform ST(n);
	ST.Transform();
	cout<<ST.Score;
}
