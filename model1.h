#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

//forward declaration
class Cart;
class Item;
class Product
{
	int id;
	string name;
	int price;
	public:
		Product()
		{
			
		}
		Product(int u_id, string name, int price)
		{
			//this refers to the properties of the current object
			//assignment
			id=u_id;
			this->name=name;
			this->price=price;
		}
		string getDisplayName()
		{
			return name + " : Rs. " + to_string(price)+ " (per kg) " + "\n";
		}
		string getShortName()
		{
			return name.substr(0,1); //only returns first letter of the name of the product
		}
		//all the private members of this class is accessible by the friend classes
		friend class Cart;
		friend class Item;
};
class Item
{
	//when product is not changing while creating an item then make it constant
	Product product;
	int quantity;
	public:
		Item()
		{

		}
		Item(Product p, int q):product(p), quantity(q){}//constructor using initialization list

		int getItemPrice()
		{
			return quantity*product.price;
		}
		string getItemInfo()
		{
			return "\n" + to_string(quantity) + " x " + product.name +" = Rs. " + to_string(quantity*product.price);
		}
		friend class Cart;
};
class Cart
{
	unordered_map<int,Item> items; //to increment the quantity of the product if it is present else keep adding unique products i.e. hashmap
	//unordered because no need the keep the products in order
	//we will keep id as the key and product as the value
	//cart is mapped with item and item with product
	//cart and item mapping is 1:N that is a cart contains many items
	//while item and product has 1:1 mapping that is an item refers to only 1 product

	public:
		void addProduct(Product product)
		{
			if(items.count(product.id)==0)
			{
				Item newItem(product,1);
				items[product.id]=newItem;
			}
			else
			{
				items[product.id].quantity+=1;
			}
		}
		int getTotal()
		{
			int total=0;
			for(auto itemPair:items)
			{
				auto item=itemPair.second;
				total+=item.getItemPrice();
			}
			return total;
		}
		string viewCart()
		{
			if(items.empty())
			{
				return "Cart is empty\n";
			}
			string itemizedList;
			int cart_total=getTotal();

			for(auto itemPair : items)
			{
				auto item=itemPair.second;
				itemizedList.append(item.getItemInfo());
			}
			return itemizedList + "\nTotal Amount = Rs. " + to_string(cart_total) + "\n\n";
		}

		bool isEmpty()
		{
			return items.empty();//
		}
};