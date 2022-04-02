<<<<<<< HEAD
#include<iostream>

using namespace std;

int main()
{
	int x,y,a,b,nzd,temp;
	cin>>x>>y;
	a=(x>y)?x:y;
	b=(x<y)?x:y;
	while(b!=0)
	{
		temp=a;
		a=b;
		b=temp%b;
	}
	nzd=a;
	cout<<nzd<<"\n";
}
=======
2+2=4
>>>>>>> 54bb0529d072027ac9b45b02e11de2c8d0900844
