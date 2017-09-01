#include "bounded_dequeue.h"
#include <iostream>

int main()
{
  Bounded_Dequeue <int> a(5);
  a.push_front(12);
  return 0;
}
