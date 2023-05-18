#include<iostream>
using namespace std;
class hanluota{
	public:
		hanluota(){
			number1=1;
		}
		void move(char x,char y,int z){
			cout<<"Step"<<number1<<": Move Disk"<<z<<" from "<<x<<" to "<<y<<endl;
			number1++;
		}
		void hanluo(int n,char a,char b,char c){
			
			if(n==1){
				move(a,c,1);
			}
			else{
				hanluo(n-1,a,c,b);
				move(a,c,n);
				hanluo(n-1,b,a,c);
			}
		}
		int number1;
};
int main(){
	int n;
	cin>>n;
	hanluota HLT;
	HLT.hanluo(n,'A','B','C');
}
