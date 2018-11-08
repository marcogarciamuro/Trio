#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void getIntegers(int& a, int& b, int& c);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  getIntegers(red, green, blue);
  // <-- ADD YOUR FUNCTION CALL HERE


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void getIntegers(int& a, int& b, int& c)
{
  int greatest;
  int middle;
  int smallest;

  if(a > b && a > c)
  {
    greatest = a;
    if(b > c)
    {
      middle = b;
      smallest = c;
    }
    else if(c > b)
    {
      smallest = b;
      middle = c;
    }
  }
  else if(b > a && b > c)
  {
    greatest = b;
    if(a > c)
    {
      middle = a;
      smallest = c;
    }
    else if(c > a)
    {
      smallest = a;
      middle = c;
    }
  }
  else if(c > b && c > a)
  {
    greatest = c;
    if(b > a)
    {
      middle = b;
      smallest = a;
    }
    else if(a > b)
    {
      middle = a;
      smallest = b;
    } 
  }
  a = greatest;
  b = middle;
  c = smallest; 
}
