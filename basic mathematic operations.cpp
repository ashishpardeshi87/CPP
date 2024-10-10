//this program performs basic mathematic operations
#include<iostream>
using namespace std;

int main(){
  //assigning numbers and operations
  int first , second , add , subtract , multiply;
  float divide;
  
  //taking inputs
  cout<<"Please enter two digits :"
  cin>>first;
  cin>>second;
  
  //assigning operation functions
  add=first+second;
  subtract=fist-second;
  multiply=first*second;
  divide=first/(float)second;
  
  //for printing output 
  cout<<endl<<"Sum : "<<add;
  cout<<endl<<"Difference : "<<subtract;
  cout<<endl<<"Multiplicaton : "<<multiply;
  cout<<endl<<"Division : "<<divide
  
  return 0;
  
}


Output:

Please enter two integers:
Sum=6
Difference =2
Multiplication =8
division =2
