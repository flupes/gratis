#if !defined(TemperatureSensor_h)
#define TemperatureSensor_h

class TemperatureSensor {
 public:
  virtual int read() = 0;
};

#endif
