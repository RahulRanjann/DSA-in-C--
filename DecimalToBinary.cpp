#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int decimal;
    cout << "Enter a Decimal no. to convert Binary \n ";
    cin >> decimal;
    int rem ;
    int size ;
    string binary ;
   for (int  i = decimal; i > 0; i= i/2)
   {
    rem = i%2;
    binary= to_string(rem) + binary; 
    
   }
   
    cout << binary <<"\n";
    
    size = binary.size();

    cout << " "<< size;

    

  return 0;  
}