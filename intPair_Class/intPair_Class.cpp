#include <iostream>
using namespace std;

class IntPair
{
public:
    int x, y;


   void set(int a, int b)
   {
       x = a;
       y = b;
   }

   void print()
   {
       cout << "Pair( " << x << ", "<<y<<" ) " << endl;
       
   }



};




int main()
{




    IntPair p1;
   p1.set(1, 1); // set p1 values to (1, 1)

   IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

    p1.print();
	p2.print();

  return 0;

}

