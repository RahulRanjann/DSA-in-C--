#include<iostream>
#include<string.h>

using namespace std;

class Fibonnaci{
 public:
int fibo(int n)
{
    static int num1 = 0, num2 = 1, num3;
    if (n >= 1)
    {
        
        num3 = num1 + num2;
        cout<<" " <<num3;
        num1 = num2;
        num2 = num3;
        return fibo(n-1);
    }
}
};

int main()
{
    Fibonnaci fib ;
    Fibonnaci fib1 ;
    fib1.num2 = 20; 
    cout<< fib.num
    int input;
    cout << "Enter a no. to get Fibonacci Series" <<endl;
    cin >> input;
    printf("0 1");
    fib.fibo(input-2);
    
  return 0;  
}

