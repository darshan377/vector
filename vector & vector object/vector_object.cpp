#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    class product{
    public:
      string name;
      int cnt;
      double unit_price;

      product(string name,int cnt,double p){
             this->name = name;
             this->cnt = cnt;
             this->unit_price = p;

             cout<<"new product "<<name<<" is created"<<endl;
      }
      double getTotal(int cnt){
          double z = cnt*unit_price;
             return z ;
      }

      void anotherUnitPrice(double new_price){
             unit_price = new_price;
      }
      void display(){
           cout<<name<<" "<<cnt<<" "<<unit_price<<endl;
      }

    };

    bool unit_price_compare(product p1,product p2){
          return p1.unit_price < p2.unit_price;  //ascending order
     }

     bool cnt_number_compare(product p1,product p2){
          return p1.cnt > p2.cnt;  //descending order
     }

    int main(){
        vector<product> products;
        product p1("mango",32,15);
        products.push_back(p1);
        products.push_back(product("pineapple",42,21));
        products.insert(products.begin()+1,product("jackfruit",67,56));

        for(product p:products)
            p.display();

            products[0].anotherUnitPrice(31);

            cout<<"after changing the unit price: "<<endl;

             for(product p:products)
            p.display();


            for(int i=0;i<products.size();i++){
                if(products[i].name == "apple"){
                    products.erase(products.begin()+i);
                    break;
                }
            }
            cout<<"after checking: "<<endl;
         for(product p:products)
            p.display();

            sort(products.begin(),products.end(),unit_price_compare);
            cout<<"after sorting according to unit price: "<<endl;

         for(product p:products)
            p.display();

            sort(products.begin(),products.end(),cnt_number_compare);
            cout<<"after sorting according to count number: "<<endl;
            for(product p:products)
            p.display();

            cout<<"net price: "<<endl;
            p1.getTotal(15);

    }





