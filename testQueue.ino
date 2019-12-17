#include "Queue.h"

Queue q(10);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial);
}

void loop() {
  delay(4000);

  q.push(1);
  Serial.println(q.pop());
  q.dump();
  q.push(2);
  Serial.println(q.pop());
  q.dump();
  q.push(3);
  Serial.println(q.pop());
  q.dump();
  q.push(4);
  Serial.println(q.pop());
  q.dump();
  q.push(5);
  Serial.println(q.pop());
  q.dump();
  q.push(6);
  Serial.println(q.pop());
  q.dump();
  q.push(7);
  Serial.println(q.pop());
  q.dump();
  q.push(8);
  Serial.println(q.pop());
  q.dump();
  q.push(9);
  Serial.println(q.pop());
  q.dump();
  q.push(10);
  Serial.println(q.pop());
  q.dump();
}
