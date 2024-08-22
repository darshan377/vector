#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Product{
private:
    int cnt;

public:
    string name;
    double unit_price;
    Product(string n,int c,double p):name(n),cnt(c),unit_price(p){
        cout<<"new product "<<name<<" is created"<<endl;
    }
    double getTotal(int unit){
        return unit*unit_price;
    }
    void setUnitPrice(double new_price){
        unit_price=new_price;
    }
    void display(){
        cout<<name<<" "<<cnt<<" "<<unit_price<<endl;
    }
};

bool UnitPriceCompare(Product p1,Product p2){
    //ascending order
    return p1.unit_price<p2.unit_price;
    /* descending order
    return p1.unit_price>p2.unit_price;
    */
}

int main(){
    vector<Product> products;
    Product p1("mango",32,25);
    products.push_back(p1);
    products.push_back(Product("litchi",54,12));
    products[1].setUnitPrice(15);
    //insert apple in between mango and litchi
    products.insert(products.begin()+1, Product("apple",10,35));
    for(Product p:products) p.display();
    //remove mango from the products
    for(int i=0;i<products.size();i++){
        if(products[i].name=="jackfruit"){
            products.erase(products.begin()+i);
            break;
        }
    }
    sort(products.begin(),products.end(),UnitPriceCompare);
    cout<<"after sorting:"<<endl;
    for(Product p:products) p.display();


}
