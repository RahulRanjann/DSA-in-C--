// #include<iostream>
// using namespace std;
// class p{
//   public:
//   static int a;
//   int b =0 ;
//   int Main()
//   {

//   }
// };
// int main()
// {
//     p t1 ;
//     p t2 ;

//     p:: a = 10;
//    // t1.a = 10 ;
//     t1.b = 20 ;
//    // cout << t2.a;
//     cout << t2.b;
//     cout << t2.a;
    
//     printf("hello G");
//   return 0;  
// }



#include<iostream>
using namespace std;

class GfG
{
public:
    static int i;
    
    GfG()
    {
        // Do nothing
    };
};

int GfG::i = 1;

int main()
{
    GfG obj;
    // prints value of i
    cout << obj.i;
}