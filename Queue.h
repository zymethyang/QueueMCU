#ifndef Queue_h
#define Queue_h

#include "Arduino.h"

class Queue {
  public:
    Queue(int len);
    void dump();
    void push(int number);
    int shift();
  private:
    int _len;
    int* _queueList;
};

#endif
