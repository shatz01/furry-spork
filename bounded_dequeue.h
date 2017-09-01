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
private:
  E arr[];
};


// --- constructor --- //
template <typename E>
Bounded_Dequeue<E>::Bounded_Dequeue(E max)
{
  E arr[max+1];
  int front = 0;
  int back = 0;

  // initialize all indecies of array to 0
  for(int i = 0; i < max+1; i++)
  {
    arr[i] = 0;
  }

  // print the initial array for debugging purposes
  for(int i = 0; i < max+1; i++)
  {
    std::cout << arr[i] << std::endl;
  }

}

// --- push_front() --- //
template <typename E>
void Bounded_Dequeue<E>::push_front(E elt)
{




  // std::cout << elt << std::endl;
  // // print the initial array for debugging purposes
  for(int i = 0; i < 4; i++)
  {
    std::cout << arr[i] << std::endl;
  }
}

// --- push_back() --- //
template <typename E>
void Bounded_Dequeue<E>::push_back(E elt)
{
  std::cout << elt << std::endl;
}

// --- pop_front() --- //
template <typename E>
E Bounded_Dequeue<E>::pop_front()
{
  // std::cout << elt << std::endl;
}

// --- pop_back() --- //
template <typename E>
E Bounded_Dequeue<E>::pop_back()
{
  // std::cout << elt << std::endl;
}

#endif
