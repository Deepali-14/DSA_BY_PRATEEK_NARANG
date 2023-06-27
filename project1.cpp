#include<iostream>
#include<vector>
#include "model1.h"
using namespace std;

vector<Product> allProducts={
	//Summers of June Data
	//stats of Bangalore
	Product(1,"Apple",220),
	Product(2,"Mango",70),
	Product(3,"Guava",40),
	Product(4,"Banana",35),
	Product(5,"Strawberry",420),
	Product(6,"Pineapple",90),
};
Product* chooseProduct()
{
	//view all products, choose product and add item to the cart
	string productList;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"\nAvailable Products - "<<endl;
	for(auto product: allProducts)
	{
		productList.append(product.getDisplayName());
	}
	cout<<productList<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	string choice;
	cout<<"\nChoice - ";
	cin>>choice;
	//linear search is used because we have already made the time complexity as O(n) while view the list of products
	for(int i=0; i<allProducts.size(); i++)
	{
		if(allProducts[i].getShortName()==choice)
		{
			return &allProducts[i];
		}
	}
	cout<<"Product not found!\n"<<endl;
	return NULL;
	//return a pointer i.e., return the address of the product
}
bool checkout(Cart &cart)//& since we do not want to create a copy of cart
{
	if(cart.isEmpty())
	// why can't we use cart.items.empty() because items is a private member and we do not want to expose it hence wrote a wrapper function around it
	{
		return false;
	}
	int total=cart.getTotal();
	cout<<"\nPlease pay in cash!"<<endl;
	int paid;
	cout<<"Rs. ";
	cin>>paid;
	if(paid>=total)
	{
		cout<<"Change = Rs. "<<paid-total<<endl;
		cout<<"Thankyou! for shopping :)"<<endl;
		return true;
	}
	else
	{
		cout<<"Not enough cash!"<<endl;
		return false;
	}
}
int main()
{
	char action;
	Cart cart;
	//cart is unique for each user
	while(true)
	{
		cout<<"---------------------------------------------------------------------------"<<endl;
		cout<<"Select an action - \n (a)dd item\n (v)iew cart\n (c)heckout"<<endl;
		cout<<"Choice - ";
		cin>>action;
		cout<<"---------------------------------------------------------------------------"<<endl;
		if(action=='a')
		{
			Product *product=chooseProduct();
			if(product!=NULL)
			{
				cout<<"Added to the Cart!"<<endl<<product->getDisplayName()<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				cart.addProduct(*product);
			}
		}
		else if(action=='v')
		{
			//cout<<"---------------------------------------------------------------------------"<<endl;
			cout<<cart.viewCart();
			//cout<<"\n---------------------------------------------------------------------------"<<endl;
		}
		else if(action=='c')
		{
			cart.viewCart();
			if(checkout(cart))
			{
				break;
			}
			cout<<"Cannot checkout an empty cart"<<endl;
		}
		else
		{
			cout<<"Wrong choice entered! Please try again with right choice from above choices :("<<endl;
		}
	}
	return 0;
}