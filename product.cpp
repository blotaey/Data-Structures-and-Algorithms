#include<iostream>
using namespace std;

//Product (Shopping website)
class Product{
	int id;
	char name[100];
	int mrp;
	int selling_price;
public:
	//Constructor 
	Product(){
		cout << "Inside the constructor" << endl;
	}
	//Parametised Constructor
	Product(int id, int mrp, int selling_price){
		this -> id = id;
		this -> mrp = mrp;
		this -> selling_price = selling_price;	
	}
	//Setters
	void setMrp(int price){
		if(price > 0){
			mrp = price;
		}
	}
	void setSellingPrice(int price){
		//additional checks
		if(price>mrp){
			selling_price = mrp;
		}
		else{
			selling_price = price;
		}
	}
	//Getters
	int getMrp(){
		return mrp;
	}
	
	int getSellingPrice(){
		return selling_price;
	}
};


int main(){
	
	Product camera(69,121222,9874128);
	//camera.setMrp(100);
	//camera.setSellingPrice(90);
	
	cout << camera.getMrp() << endl;
	cout << camera.getSellingPrice() << endl;

}
	
