#include "bounded_dequeue.h"
#include <iostream>

int main()
{
  std::cout << "Aye" << std::endl;
  std::cout << "Lets try to make a Bounded_Dequeue" << std::endl;
  Bounded_Dequeue <std::string> a("hay");
  a.push_front("jak");
  return 0;
}
