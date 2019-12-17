#include "Arduino.h"
#include "Queue.h"

Queue::Queue(int len) {
  _len = len;

  _queueList = (int*)malloc(len * sizeof(int));

  for (int index = 0; index < len ; index ++) {
    *(_queueList + index) = 0;
  }
}

void Queue::dump() {
  Serial.print("[");
  for (int index = 0; index < _len - 1 ; index ++) {
    Serial.print(*(_queueList + index));
    Serial.print(", ");
  }
  Serial.print(*(_queueList + _len - 1));
  Serial.println("]");
}

void Queue::push(int number) {
  _queueList = (int*)realloc(_queueList, (_len + 1) * sizeof(int));
  *(_queueList + _len) = number;
  _len += 1;
}

int Queue::pop() {
  int pop_result = *(_queueList);

  for (int index = 0; index < _len - 1; index++) {
    *(_queueList + index) = *(_queueList + index + 1);
  }
  
  _queueList = (int*)realloc(_queueList, (_len - 1) * sizeof(int));
  _len -= 1;
  
  return pop_result;
}
