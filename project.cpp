#include<iostream>
#include "model.h"
using namespace std;

int main()
{
	Product p(1,"Apple",26);
	cout<<p.getDisplayName();
	return 0;
}
