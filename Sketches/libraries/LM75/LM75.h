
#if !defined(EPD_LM75_H)
#define EPD_LM75_H 1

#include <Arduino.h>

#include <TemperatureSensor.h>

class LM75_Class : public TemperatureSensor {
 private:
  int address;

  LM75_Class(const LM75_Class &f);  // prevent copy

 public:
  int read();

  void begin();
  void end();

  LM75_Class(int addr);
};

extern LM75_Class LM75;

#endif
