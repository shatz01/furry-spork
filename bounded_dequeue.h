#ifndef _BOUNDED_DEQUEUE_H_
#define _BOUNDED_DEQUEUE_H_
#include "dequeue.h"
#include <iostream>

int mod(int a, int b)
{
    int r = a % b;
    return r < 0 ? r + b : r;
}

template <typename E>
class Bounded_Dequeue : public Dequeue<E>
{
public:
  Bounded_Dequeue(int cap);
  void push_front(E elt);
  void push_back(E elt);
  E pop_front();
  E pop_back();
  E peek_front();
  E peek_back();
  int length();
  bool is_full();
  bool is_empty();
  void clear();
  void inc_back();
  void inc_front();
  void dec_front();
  void dec_back();
  void print_dequeue();
private:
  E *arr;
  int front;
  int back;
  int max_sz;
  int len;
};


// --- constructor --- //
template <typename E>
Bounded_Dequeue<E>::Bounded_Dequeue(int max)
{
  arr = new E[max];
  front = 0;
  back = 0;
  len = 0;
  max_sz = max;
  // initialize all indecies of array to 0
  for(int i = 0; i < max_sz+1; i++)
  {
    arr[i] = 0;
  }
}

// --- push_front() --- //
template <typename E>
void Bounded_Dequeue<E>::push_front(E elt)
{
  if (is_full())
  {
    std::cout << "Dequeue full yo. Didnt add anything." << std::endl;
    // return;
  } else if (is_empty()){
    // std::cout << "Deque empty! Adding the first element!" << std::endl;
    arr[front] = elt;
    inc_back();
    len++;
    // return;
  } else {
    // std::cout << "Adding element" << std::endl;
    inc_front();
    arr[front] = elt;
    len++;
  }
}

// --- push_back() --- //
template <typename E>
void Bounded_Dequeue<E>::push_back(E elt)
{
  if (is_full())
  {
    std::cout << "Dequeue full yo. Didnt add anything." << std::endl;
  } else if (is_empty()){
    // std::cout << "Deque empty! Adding the first element!" << std::endl;
    arr[front] = elt;
    inc_back();
    len++;
  } else {
    // std::cout << "Adding element" << std::endl;
    arr[back] = elt;
    inc_back();
    len++;
  }
}

// --- pop_front() --- //
template <typename E>
E Bounded_Dequeue<E>::pop_front()
{
  if (is_empty())
  {
    std::cout << "You can't pop from empty Dequeue" << std::endl;
    return arr[0];
  } else {
    E popped = arr[front];
    dec_front();
    len -= 1;
    return popped;
  }
}

// --- pop_back() --- //
template <typename E>
E Bounded_Dequeue<E>::pop_back()
{
  if (is_empty())
  {
    std::cout << "You can't pop from empty Dequeue" << std::endl;
    return arr[0];
  } else {
    E popped = arr[mod(back-1, max_sz+1)];
    dec_back();
    len -= 1;
    return popped;
  }
}

// --- is_empty() --- //
template <typename E>
bool Bounded_Dequeue<E>::is_empty()
{
  if (front == back && len == 0)
  {
    return true;
  } else {
    return false;
  }
}

// --- is_full() --- //
template <typename E>
bool Bounded_Dequeue<E>::is_full()
{
  if (front == (back+1)%(max_sz+1) && len > 0)
  {
    return true;
  } else {
    return false;
  }
}

// --- inc_front() --- //
template <typename E>
void Bounded_Dequeue<E>::inc_front()
{
  front = mod(front - 1, max_sz+1);
}

// --- inc_back() --- //
template <typename E>
void Bounded_Dequeue<E>::inc_back()
{
  back = mod(back + 1, max_sz+1);
}

// --- dec_front() --- //
template <typename E>
void Bounded_Dequeue<E>::dec_front()
{
  front = mod(front + 1, max_sz+1);
}

// --- dec_back() --- //
template <typename E>
void Bounded_Dequeue<E>::dec_back()
{
  back = mod(back - 1, max_sz+1);
}

// --- length() --- //
template <typename E>
int Bounded_Dequeue<E>::length()
{
  return len;
}

// --- clear() --- //
template <typename E>
void Bounded_Dequeue<E>::clear()
{
  front = 0;
  back = 0;
  len = 0;
}

// --- peek_front() --- //
template <typename E>
E Bounded_Dequeue<E>::peek_front()
{
  return arr[front];
}

// --- peek_back() --- //
template <typename E>
E Bounded_Dequeue<E>::peek_back()
{
  return arr[mod(back-1, max_sz+1)];
}

// --- print_dequeue() --- //
template <typename E>
void Bounded_Dequeue<E>::print_dequeue()
{
  // for (int i = front; i != back; mod(i+1, max_sz+1))
  // {
  //   std::cout << arr[i];
  // }
  int i = front;
  while (i != back)
  {
    std::cout << arr[i];
    i = mod(i+1, max_sz+1);
  }
  std::cout << std::endl;
}

#endif
