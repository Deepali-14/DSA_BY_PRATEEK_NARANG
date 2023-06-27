#include <iostream>
using namespace std;
//to find ((x^y)%mod)
 
int power(int x, int y, int mod)
{
	
    int ans=1;
    x=x%mod;
    if(x==0)
        return 0;
    
    while(y>0)
    {
       int lastbit=y&1;
       if(lastbit)
       {
           ans=(ans*x)%mod;
       }
       x=(x*x)%mod;
       y=y>>1;
    }
    
    return ans;
}

int main()
{
	int x,y,mod;
	cout<<"Enter value of x(base), y(power) and modulus respectively : ";
	cin>>x>>y>>mod;
	cout<<power(x,y,mod)<<endl;
	return 0;
}
