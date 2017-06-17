#ifndef INCLUDED_MATH_H
#include <Math.h>
#endif

#ifndef INCLUDED_IOSTREAM_H
#include <iostream>
#endif


int main(int argc, char *argv[]) {
  std::cout << "3 + 4 = " << DemoProject::Math::add( 3, 4 ) << std::endl;

  return 0;
}
