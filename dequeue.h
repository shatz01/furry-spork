#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

template <typename E>
class Dequeue
{
public:
  virtual void push_front(E elt) = 0;
  virtual void push_back(E elt) = 0;
  virtual E pop_front() = 0;
  virtual E pop_back() = 0;
  virtual E peek_front() = 0;
  virtual E peek_back() = 0;
  virtual int length() = 0;
  virtual bool is_empty() = 0;
  virtual bool is_full() = 0;
  virtual void clear() = 0;
  virtual void inc_back() = 0;
  virtual void inc_front() = 0;
  virtual void dec_front() = 0;
  virtual void dec_back() = 0;
  virtual void print_dequeue() = 0;

  // virtual Queue() = 0;
};

#endif
