//specification of stack class
#include "polynomial.h"
#ifndef ERROR_C
#define ERROR_C
enum Error_code {success, fail, underflow, overflow};
#endif

typedef Polynomial Stack_entry;

const int maxstack = 20;   //  small value for testing


class Stack {
 public:
  Stack();
  bool empty() const;
  Error_code pop();
  Error_code top(Stack_entry &item) const;
  Error_code push(const Stack_entry &item);

 protected:
  int count;
  Stack_entry entry[maxstack];
};

