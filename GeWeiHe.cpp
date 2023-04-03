#include<iostream>
using namespace std;
class GeWeiHe{
	public:
		GeWeiHe(int x)
		{
			GeWei=x%10;
			ShiWei=(x/10)%10;
			BaiWei=x/100;
		} 
		~GeWeiHe();
		void Sum()
		{
			cout<<GeWei+ShiWei+BaiWei;
		}
	private:
		int GeWei,ShiWei,BaiWei;
};
int main(void)
{
	int x;
	cin>>x;
	GeWeiHe G1(x);
	G1.Sum();
	return 0;
}
