#include<iostream>
using namespace std;
class Gongyueshubeishu{
	public:
		Gongyueshubeishu(int n1,int n2){
			number1=n1;
			number2=n2;
		}
		void Gongyueshucompute(){
			Gongyueshu=number1;
			for(;number1%Gongyueshu!=0||number2%Gongyueshu!=0;Gongyueshu--){
				;
			}
		}
		void Gongbeishucompute(){
			Gongbeishu=number1;
			for(;Gongbeishu%number1!=0||Gongbeishu%number2!=0;Gongbeishu++){
				;
			}
		}
		int number1,number2,Gongyueshu,Gongbeishu;
};
int main(){
	int n1,n2;
	cin>>n1>>n2;
	Gongyueshubeishu GYSBS(n1,n2);
	GYSBS.Gongyueshucompute();
	GYSBS.Gongbeishucompute();
	cout<<GYSBS.Gongyueshu<<endl<<GYSBS.Gongbeishu;
}
