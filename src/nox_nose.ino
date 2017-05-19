#include <Arduino.h>
#include "JsonWriter.h"

JsonWriter serialJsonWriter(&Serial);

int MQPins[8] = {A0, A1,A2,A3,A4,A5,A6,A7};


void setup () {
  Serial.begin(115200);
  for (size_t i = 0; i < 8; i++) {
    pinMode(MQPins[i], INPUT);
  }
}

void loop () {
  int MQData [8];
  for (size_t j = 0; j < 8; j++) {
    MQData[j] = analogRead(MQPins[j]);
  }
  serialJsonWriter
  .beginObject()
    .property("MQ-2", MQData[0])
    .property("MQ-3", MQData[1])
    .property("MQ-4", MQData[2])
    .property("MQ-5", MQData[3])
    .property("MQ-6", MQData[4])
    .property("MQ-7", MQData[5])
    .property("MQ-8", MQData[6])
    .property("MQ-135", MQData[7])
  .endObject();
  Serial.println("");
  delay(1000);
}
