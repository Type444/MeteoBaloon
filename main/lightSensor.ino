#define LIGHT_SENSOR_PIN A0

int getLightSensorVal(){
  return analogRead(A0);
}
