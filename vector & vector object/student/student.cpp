#include<iostream>
#include<string>
using namespace std;
class student{
    private:
      string name;
      public:
      int id;
      double cgpa;

      student(string n,int id,double cgpa){
              this->name = n;
              this->id = id;
              this->cgpa = cgpa;
      }
      void set_name(string name){   //setter
              this->name = name;
      }

      void updateCgpa(double new_cgpa){
               if(new_cgpa <= 4.0){
                cgpa = new_cgpa;
               }
               else{
                cout<<"invalid cgpa"<<endl;
               }
      }
      void display(){
           cout<<"name: "<<name<<endl<<"id: "<<id<<endl<<"cgpa: "<<cgpa<<endl;
      }
      ~student(){
           cout<<"destructor"<<endl;
      }
};

int main(){
      student *s1 = new student("Tettra",111,3.85);
      s1->display();
      s1->updateCgpa(3.33);
      s1->display();

      student s2("darshan",435,3.35);
      s2.display();
}
