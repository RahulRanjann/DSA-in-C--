#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name\n";
    cin >> name;
    char last = name.at(0);
    int size = name.length();
    string name2;
    
    for (int i = 1; i < size; i++)
    {
     name2 = name2 + name.at(i);
     
    }
    cout << name2 <<last <<"ay";
    

  return 0;  
}