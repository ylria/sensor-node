#pragma once

#include <Arduino.h>
#include <ArduinoJson.h>
#include "api/Api.h"
#include "communication/bluetooth/Bluetooth.h"
#include "communication/bluetooth/BluetoothHandler.h"
#include "communication/bluetooth/BluetoothRefreshHandler.h"
#include "communication/common/Internet.h"
#include "config/Config.h"
#include "config/MeasurementType.h"
#include "device/AirSensor.h"
#include "device/Heater.h"
#include "device/PowerSensor.h"
#include "device/Storage.h"
#include "device/WeatherSensor.h"
#include "maintenance/Logger.h"
#include "time/Time.h"
#include "maintenance/Statistics.h"
#include "maintenance/Guardian.h"
#include "device/DeviceContainer.h"

class Core {
public:
  Core();
  void setUp();
  void main();

private:
  AirSensor *airSensor = NULL;
  WeatherSensor *weatherSensor = NULL;
  PowerSensor *powerSensor = NULL;
  Heater *heater = NULL;
  Storage *storage = NULL;

  MeasurementType measurementType;
  unsigned long lastPublishMillis = 0;
};

extern Core core;
