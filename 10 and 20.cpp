//this program checks if the number is between 10 and 20
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    
    if(num>=10 && num<=20){
      cout<<"The number "<<num<<" is between 10 & 20.\n";
    }
    else{
      cout<<"the number "<<num<<" is not between 10 & 20.\n";
    }
    
    return 0;
}

STDIN: 54

OUTPUT:
the number 54 is not between 10 & 20.
