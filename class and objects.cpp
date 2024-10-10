#include<iostream>
#include<string>
using namespace std;

class student{
  public:
  //Properties(data members)
  string name;
  int rollNumber;
  int age;
  
  //Function to display student information
  void displayInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"rollNumber: "<<rollNumber<<endl;
    cout<<"Age: "<<age<<endl;
    
  }
  
 };
 
 int main()
 {
   //Create object (instances) of the student class
   student s1;
   student s2;
   
   //set properties for student1
   s1.name = "Alice";
   s1.rollNumber = 101;
   s1.age = 20;
   
   //Set properties for student2
   s2.name = "Bob";
   s2.rollNumber = 102;
   s2.age = 22;
   
   //Display information for each student 
   cout<<"S1 information: "<<endl;
   s1.displayInfo();
   cout<<endl;   //For better readability
   cout<<"S2 information:"<<endl;
   s2.displayInfo();
   
 
 
 return 0;
 
}