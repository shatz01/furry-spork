#include "bounded_dequeue.h"
#include <iostream>

int main()
{
  Bounded_Dequeue <int> a(5);
  a.push_front(1);
  a.print_dequeue();
  a.push_front(2);
  a.print_dequeue();
  a.push_front(3);
  a.print_dequeue();
  a.push_back(4);
  a.print_dequeue();
  a.push_back(5);
  a.print_dequeue();
  a.push_front(6);
  a.print_dequeue();
  a.pop_front();
  a.print_dequeue();
  a.push_front(6);
  a.print_dequeue();
  a.push_front(7);
  a.print_dequeue();
  a.pop_back();
  a.print_dequeue();
  a.push_back(8);
  a.print_dequeue();
  a.push_front(99);
  a.print_dequeue();
  a.push_back(99);
  a.print_dequeue();
  return 0;
}
