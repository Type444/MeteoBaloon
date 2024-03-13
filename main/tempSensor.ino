#define OUTSIDE_TEMP_SENSOR_PIN A1
#define INSIDE_TEMP_SENSOR_PIN A2

int getInsideTempVal(){
  return analogRead(OUTSIDE_TEMP_SENSOR_PIN);
}

int getOutsideTempVal(){
  return analogRead(INSIDE_TEMP_SENSOR_PIN);
}
