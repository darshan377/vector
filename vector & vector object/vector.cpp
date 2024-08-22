#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  /*  vector<int> v(7);
    v.push_back(11);
    v.push_back(22);
    v.insert(v.begin()+2,5);
    v.insert(v.begin()+3,33);
    v.push_back(43);
    v[5] = 27;
    v[7] = 19;
    v[0] = 99;
    v.insert(v.begin(),10); */
    vector<double> v(3);
    v[0] = 3.3;
    v[1] = 5.2;

    //insert 4.8 at index 2

    v.insert(v.begin()+2,4.8);
    v[3] = 4.10;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    //remove element at index 2

    v.erase(v.begin()+2);
    for(double x:v)
        cout<<x<<endl;

    v.resize(10,-1);
    v[7] = 6;
    v[9] = 7.76;

    for(double x:v)
        cout<<x<<endl;

    int l = v.size();
    cout<<"total elements: "<<l<<endl;

    //sorting in ascending

    sort(v.begin(),v.end());
    cout<<"after sorting in ascending: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

     cout<<endl;
    //sorting in descending

    sort(v.begin(),v.end(),greater<double>());
    cout<<"after sorting in descending: ";
    for(double d:v)
        cout<<d<<" ";

}
