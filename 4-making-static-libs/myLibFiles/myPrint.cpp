#include "myPrint.hpp"


//*************************************************************//
// Takes a string and makes it all capital letters.
//*************************************************************//
std::string allCaps( std::string str )
{

  std::string outStr( str );
  for( unsigned int curChar = 0; curChar < str.length(); ++curChar )
  {

    outStr[curChar] = std::toupper( str[curChar] );

  }

  return( outStr );

}
