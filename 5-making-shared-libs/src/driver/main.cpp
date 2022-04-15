#include <iostream>
#include "myFuncs.hpp"
#include "myMath.hpp"
#include "myPrint.hpp"

int main(void)
{

  std::string str("hi everyone");
  int a(10);
  int b(7);
  int result(0);

  printStr( "Inside of main.cpp\n" );
  printStr( "Using functions from myLib.a\n" );

  // allCaps usage.
  printStr( "Using allCaps function from myPrint:");
  printStr( "Before calling allCaps:");
  printStr( str );
  printStr( "After calling allCaps:");
  str = allCaps( str );
  printStr( str );

  // add usage.
  printStr("Using add from myMath");
  result = add(a,b);
  std::cout << "Result of add: " << result << std::endl;

  // diff usage.
  printStr("Using diff from myMath");
  result = diff(a,b);
  std::cout << "Result of diff: " << result << std::endl;

}
