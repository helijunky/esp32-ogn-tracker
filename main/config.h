#define DEFAULT_AcftType        1          // [0..15] default aircraft-type: glider
#define DEFAULT_GeoidSepar     40          // [m]
#define DEFAULT_CONbaud    115200
#define DEFAULT_PPSdelay       80
#define DEFAULT_FreqPlan        0

// #define WITH_HELTEC                        // HELTEC module: PCB LED on GPI025
// #define WITH_TTGO                          // TTGO module: PCB LED on GPIO2, GPIO25 free to use as DAC2 output
#define WITH_TBEAM                          // T-Beam module
// #define WITH_FollowMe                         // by Avionix

#define WITH_RFM95
// #define WITH_RFM69

// #define WITH_OLED                          // OLED display on the I2C: some TTGO modules are without OLED display
// #define WITH_OLED2                         // 2nd OLED display, I2C address next higher

// #define WITH_LED_RX
// #define WITH_LED_TX

// #define WITH_GPS_ENABLE                    // use GPS_ENABLE control line to turn the GPS ON/OFF
// #define WITH_GPS_PPS                       // use the PPS signal from GPS for precise time-sync.
#define WITH_GPS_CONFIG                    // attempt to configure higher GPS baud rate and airborne mode
#define WITH_GPS_UBX                       // GPS understands UBX
// #define WITH_GPS_MTK                       // GPS understands MTK
// #define WITH_GPS_SRF
// #define WITH_MAVLINK

// #define WITH_GPS_UBX_PASS                  // to pass directly UBX packets to/from GPS
// #define WITH_GPS_NMEA_PASS                  // to pass directly NMEA to/from GPS

// #define WITH_BMP180                        // BMP180 pressure sensor
#define WITH_BMP280                        // BMP280 pressure sensor
// #define WITH_BME280                        // BMP280 with humidity (but still works with BMP280)
// #define WITH_MS5607                        // MS5607 pressure sensor

#define WITH_PFLAA                         // PFLAU and PFLAA for compatibility with XCsoar and LK8000

#define WITH_CONFIG                        // interpret the console input: $POGNS to change parameters

// #define WITH_BEEPER

// #define WITH_SD                            // use the SD card in SPI mode and FAT file system
#define WITH_SPIFFS                        // use SPIFFS file system in Flash
#define WITH_LOG                           // log own positions and other received to SPIFFS and possibly to uSD

#define WITH_BT_SPP                        // Bluetooth serial port for smartphone/tablet link
// #define WITH_WIFI                          // attempt to connect to the wifi router for uploading the log files
// #define WITH_SPIFFS_LOG                    // log transmitted and received packets to SPIFFS
