#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;


class Car
{
	public:
		string id;
		int x, y;
		Car(string id, int x, int y)
		{
			this->id=id;
			this->x=x;
			this->y=y;
		}
		int dist()
		{
			return x*x+y*y;
		}
};

class CarCompare
{
	public:
		bool operator()(Car A, Car B)
		{
			return A.dist() < B.dist();
		}	
};

bool distCompare(Car A, Car B)
{
	return A.dist()<B.dist();
}

void printNearestCars(vector<Car> cars, int k)
{
	priority_queue <Car, vector<Car>, CarCompare> max_heap(cars.begin(), cars.begin()+k);
	for(int i=k; i<cars.size(); i++)
	{
		Car car=cars[i];
		if(car.dist() < max_heap.top().dist())
		{
			max_heap.pop();
			max_heap.push(car);
		}
	}
//	while(!max_heap.empty())
//	{
//		cout<<max_heap.top().id<<endl;
//		max_heap.pop();
//	}
	vector<Car> output;
	while(!max_heap.empty())
	{
		output.push_back(max_heap.top());
		max_heap.pop();
	}
	//sort(output.begin(), output.end(), distCompare);
	reverse(output.begin(), output.end());
	cout<<"Output --->"<<endl;
	for(auto car:output)
	{
		cout<<car.id<<endl;
	}
	cout<<endl;
	return;
}

int main()
{
	int N,K;
	cout<<"Enter total no. of cars and the no. of nearest cars you want to find : ";
	cin>>N>>K;
	string id;
	int x, y;
	vector<Car> cars;
	for(int i=0; i<N; i++)
	{
		cout<<"Enter car id : ";
		cin>>id;
		cout<<"Enter the coordinates : ";
		cin>>x>>y;
		Car car(id,x,y);
		cars.push_back(car);
	}
	printNearestCars(cars,K);
	return 0;
}
