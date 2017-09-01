#ifndef _BOUNDED_DEQUEUE_H_
#define _BOUNDED_DEQUEUE_H_
#include "dequeue.h"
#include <iostream>

template <typename E>
class Bounded_Dequeue : public Dequeue<E>
{
public:
  Bounded_Dequeue(E cap);
  // Bounded_Dequeue();

  void push_front(E elt);
  void push_back(E elt);
  E pop_front();
  E pop_back();
  // E peek_front() override;
  // E peek_back() override;
  // int length() override;
  // bool is_full() override;
  // bool is_empty() override;
  // void clear() override;
};



template <typename E>
Bounded_Dequeue<E>::Bounded_Dequeue(E cap)
{
  std::cout << "AYE IT WORKED!!!" << std::endl;
}

template <typename E>
void Bounded_Dequeue<E>::push_front(E elt)
{
  std::cout << elt << std::endl;
}

#endif
