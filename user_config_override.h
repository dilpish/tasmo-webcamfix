#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifdef CODE_IMAGE_STR
  #undef CODE_IMAGE_STR
#endif
#define CODE_IMAGE_STR "TasmoCompiler-esp32generic"

#ifdef USE_DISPLAY
  #undef USE_DISPLAY
#endif
#define USE_DISPLAY

#ifdef USE_UNIVERSAL_DISPLAY
  #undef USE_UNIVERSAL_DISPLAY
#endif
#define USE_UNIVERSAL_DISPLAY

#ifdef USE_UNIVERSAL_TOUCH
  #undef USE_UNIVERSAL_TOUCH
#endif
#define USE_UNIVERSAL_TOUCH

#ifdef USE_TASMOTA_DISCOVERY
  #undef USE_TASMOTA_DISCOVERY
#endif
#define USE_TASMOTA_DISCOVERY

#ifdef USE_ENERGY_SENSOR
  #undef USE_ENERGY_SENSOR
#endif

#ifdef USE_MHZ19
  #undef USE_MHZ19
#endif
#define USE_MHZ19

#ifdef USE_SENSEAIR
  #undef USE_SENSEAIR
#endif
#define USE_SENSEAIR

#ifdef USE_PMS5003
  #undef USE_PMS5003
#endif
#define USE_PMS5003

#ifdef USE_MGS
  #undef USE_MGS
#endif
#define USE_MGS

#ifdef USE_NOVA_SDS
  #undef USE_NOVA_SDS
#endif
#define USE_NOVA_SDS

#ifdef USE_SGP30
  #undef USE_SGP30
#endif
#define USE_SGP30

#ifdef USE_CCS811
  #undef USE_CCS811
#endif
#define USE_CCS811

#ifdef USE_SCD30
  #undef USE_SCD30
#endif
#define USE_SCD30

#ifdef USE_SPS30
  #undef USE_SPS30
#endif
#define USE_SPS30

#ifdef USE_SGP4X
  #undef USE_SGP4X
#endif
#define USE_SGP4X

#ifdef USE_SEN5X
  #undef USE_SEN5X
#endif
#define USE_SEN5X

#ifdef USE_HPMA
  #undef USE_HPMA
#endif
#define USE_HPMA

#ifdef USE_IAQ
  #undef USE_IAQ
#endif
#define USE_IAQ

#ifdef USE_T67XX
  #undef USE_T67XX
#endif
#define USE_T67XX

#ifdef USE_VINDRIKTNING
  #undef USE_VINDRIKTNING
#endif
#define USE_VINDRIKTNING

#ifdef USE_SCD40
  #undef USE_SCD40
#endif
#define USE_SCD40

#ifdef USE_HM330X
  #undef USE_HM330X
#endif
#define USE_HM330X

#ifdef USE_EMULATION
  #undef USE_EMULATION
#endif

#ifdef USE_EMULATION_HUE
  #undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
  #undef USE_EMULATION_WEMO
#endif

#ifdef USE_TASMOTA_CLIENT
  #undef USE_TASMOTA_CLIENT
#endif

#ifdef USE_BERRY
  #undef USE_BERRY
#endif
#define USE_BERRY

#ifdef USE_BERRY_PSRAM
  #undef USE_BERRY_PSRAM
#endif
#define USE_BERRY_PSRAM

#ifdef USE_BLE_ESP32
  #undef USE_BLE_ESP32
#endif

#ifdef USE_MI_ESP32
  #undef USE_MI_ESP32
#endif

#ifdef USE_ADC_VCC
  #undef USE_ADC_VCC
#endif

#ifdef USE_DISPLAY_TM1637
  #undef USE_DISPLAY_TM1637
#endif
#define USE_DISPLAY_TM1637

#ifdef USE_DISPLAY_MAX7219
  #undef USE_DISPLAY_MAX7219
#endif
#define USE_DISPLAY_MAX7219

#ifdef USE_DISPLAY_MODES1TO5
  #undef USE_DISPLAY_MODES1TO5
#endif
#define USE_DISPLAY_MODES1TO5

#ifdef USE_DISPLAY_LCD
  #undef USE_DISPLAY_LCD
#endif
#define USE_DISPLAY_LCD

#ifdef USE_DISPLAY_MATRIX
  #undef USE_DISPLAY_MATRIX
#endif
#define USE_DISPLAY_MATRIX

#ifdef USE_DISPLAY_TM1650
  #undef USE_DISPLAY_TM1650
#endif
#define USE_DISPLAY_TM1650

#ifdef USE_DISPLAY_EPAPER_29
  #undef USE_DISPLAY_EPAPER_29
#endif
#define USE_DISPLAY_EPAPER_29

#ifdef USE_DISPLAY_EPAPER_42
  #undef USE_DISPLAY_EPAPER_42
#endif
#define USE_DISPLAY_EPAPER_42

#ifdef USE_DISPLAY_RA8876
  #undef USE_DISPLAY_RA8876
#endif
#define USE_DISPLAY_RA8876

#ifdef USE_DISPLAY_SEVENSEG
  #undef USE_DISPLAY_SEVENSEG
#endif
#define USE_DISPLAY_SEVENSEG

#ifdef USE_SR04
  #undef USE_SR04
#endif

#ifdef USE_VL53L0X
  #undef USE_VL53L0X
#endif

#ifdef USE_HRXL
  #undef USE_HRXL
#endif

#ifdef USE_DYP
  #undef USE_DYP
#endif

#ifdef USE_VL53L1X
  #undef USE_VL53L1X
#endif

#ifdef USE_DOMOTICZ
  #undef USE_DOMOTICZ
#endif

#ifdef USE_HLW8012
  #undef USE_HLW8012
#endif

#ifdef USE_CSE7766
  #undef USE_CSE7766
#endif

#ifdef USE_PZEM004T
  #undef USE_PZEM004T
#endif

#ifdef USE_MCP39F501
  #undef USE_MCP39F501
#endif

#ifdef USE_PZEM_AC
  #undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
  #undef USE_PZEM_DC
#endif

#ifdef USE_ADE7953
  #undef USE_ADE7953
#endif

#ifdef USE_SDM120
  #undef USE_SDM120
#endif

#ifdef USE_DDS2382
  #undef USE_DDS2382
#endif

#ifdef USE_SDM630
  #undef USE_SDM630
#endif

#ifdef USE_DDSU666
  #undef USE_DDSU666
#endif

#ifdef USE_SOLAX_X1
  #undef USE_SOLAX_X1
#endif

#ifdef USE_LE01MR
  #undef USE_LE01MR
#endif

#ifdef USE_BL09XX
  #undef USE_BL09XX
#endif

#ifdef USE_TELEINFO
  #undef USE_TELEINFO
#endif

#ifdef USE_IEM3000
  #undef USE_IEM3000
#endif

#ifdef USE_WE517
  #undef USE_WE517
#endif

#ifdef USE_ENERGY_DUMMY
  #undef USE_ENERGY_DUMMY
#endif

#ifdef USE_ETHERNET
  #undef USE_ETHERNET
#endif

#ifdef USE_HOME_ASSISTANT
  #undef USE_HOME_ASSISTANT
#endif
#define USE_HOME_ASSISTANT

#ifdef USE_I2C
  #undef USE_I2C
#endif
#define USE_I2C

#ifdef USE_MCP230xx
  #undef USE_MCP230xx
#endif

#ifdef USE_MCP230xx_OUTPUT
  #undef USE_MCP230xx_OUTPUT
#endif

#ifdef USE_MCP230xx_DISPLAYOUTPUT
  #undef USE_MCP230xx_DISPLAYOUTPUT
#endif

#ifdef USE_IR_REMOTE
  #undef USE_IR_REMOTE
#endif

#ifdef USE_IR_REMOTE_FULL
  #undef USE_IR_REMOTE_FULL
#endif

#ifdef USE_KNX
  #undef USE_KNX
#endif

#ifdef USE_BH1750
  #undef USE_BH1750
#endif
#define USE_BH1750

#ifdef USE_VEML6070
  #undef USE_VEML6070
#endif
#define USE_VEML6070

#ifdef USE_TSL2561
  #undef USE_TSL2561
#endif
#define USE_TSL2561

#ifdef USE_SI1145
  #undef USE_SI1145
#endif
#define USE_SI1145

#ifdef USE_APDS9960
  #undef USE_APDS9960
#endif
#define USE_APDS9960

#ifdef USE_VEML6075
  #undef USE_VEML6075
#endif
#define USE_VEML6075

#ifdef USE_MAX44009
  #undef USE_MAX44009
#endif
#define USE_MAX44009

#ifdef USE_TSL2591
  #undef USE_TSL2591
#endif
#define USE_TSL2591

#ifdef USE_AS3935
  #undef USE_AS3935
#endif
#define USE_AS3935

#ifdef USE_VEML7700
  #undef USE_VEML7700
#endif
#define USE_VEML7700

#ifdef USE_LVGL
  #undef USE_LVGL
#endif

#ifdef USE_MPU_ACCEL
  #undef USE_MPU_ACCEL
#endif

#ifdef USE_RTC_CHIPS
  #undef USE_RTC_CHIPS
#endif

#ifdef USE_BM8563
  #undef USE_BM8563
#endif

#ifdef USE_XPT2046
  #undef USE_XPT2046
#endif

#ifdef USE_FT5206
  #undef USE_FT5206
#endif

#ifdef USE_GT911
  #undef USE_GT911
#endif

#ifdef USE_CST816S
  #undef USE_CST816S
#endif

#ifdef USE_DISPLAY_LVGL_ONLY
  #undef USE_DISPLAY_LVGL_ONLY
#endif

#ifdef USE_ENHANCED_GUI_WIFI_SCAN
  #undef USE_ENHANCED_GUI_WIFI_SCAN
#endif

#ifdef ROTARY_V1
  #undef ROTARY_V1
#endif

#ifdef USE_BUZZER
  #undef USE_BUZZER
#endif

#ifdef USE_LIGHT_PALETTE
  #undef USE_LIGHT_PALETTE
#endif

#ifdef USE_SHELLY_PRO
  #undef USE_SHELLY_PRO
#endif

#ifdef USE_SERIAL_BRIDGE
  #undef USE_SERIAL_BRIDGE
#endif

#ifdef USE_MATTER_DEVICE
  #undef USE_MATTER_DEVICE
#endif

#ifdef USE_BERRY_CRYPTO_EC_P256
  #undef USE_BERRY_CRYPTO_EC_P256
#endif

#ifdef USE_BERRY_CRYPTO_HMAC_SHA256
  #undef USE_BERRY_CRYPTO_HMAC_SHA256
#endif

#ifdef USE_BERRY_CRYPTO_HKDF_SHA256
  #undef USE_BERRY_CRYPTO_HKDF_SHA256
#endif

#ifdef USE_BERRY_CRYPTO_AES_CCM
  #undef USE_BERRY_CRYPTO_AES_CCM
#endif

#ifdef USE_BERRY_CRYPTO_AES_CTR
  #undef USE_BERRY_CRYPTO_AES_CTR
#endif

#ifdef USE_BERRY_CRYPTO_PBKDF2_HMAC_SHA256
  #undef USE_BERRY_CRYPTO_PBKDF2_HMAC_SHA256
#endif

#ifdef USE_BERRY_CRYPTO_SPAKE2P_MATTER
  #undef USE_BERRY_CRYPTO_SPAKE2P_MATTER
#endif

#ifdef USE_DISCOVERY
  #undef USE_DISCOVERY
#endif

#ifdef USE_MODBUS_BRIDGE
  #undef USE_MODBUS_BRIDGE
#endif

#ifdef USE_MODBUS_BRIDGE_TCP
  #undef USE_MODBUS_BRIDGE_TCP
#endif

#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif

#ifdef USE_RC_SWITCH
  #undef USE_RC_SWITCH
#endif

#ifdef USE_RULES
  #undef USE_RULES
#endif
#define USE_RULES

#ifdef USE_EXPRESSION
  #undef USE_EXPRESSION
#endif
#define USE_EXPRESSION

#ifdef SUPPORT_IF_STATEMENT
  #undef SUPPORT_IF_STATEMENT
#endif
#define SUPPORT_IF_STATEMENT

#ifdef USE_SCRIPT
  #undef USE_SCRIPT
#endif

#ifdef USE_UFILESYS
  #undef USE_UFILESYS
#endif
#define USE_UFILESYS

#ifdef USE_SDCARD
  #undef USE_SDCARD
#endif
#define USE_SDCARD

#ifdef GUI_TRASH_FILE
  #undef GUI_TRASH_FILE
#endif
#define GUI_TRASH_FILE

#ifdef GUI_EDIT_FILE
  #undef GUI_EDIT_FILE
#endif
#define GUI_EDIT_FILE

#ifdef USE_SHUTTER
  #undef USE_SHUTTER
#endif

#ifdef USE_SPI
  #undef USE_SPI
#endif
#define USE_SPI

#ifdef USE_SONOFF_SC
  #undef USE_SONOFF_SC
#endif

#ifdef USE_DS18x20
  #undef USE_DS18x20
#endif

#ifdef USE_DHT
  #undef USE_DHT
#endif

#ifdef USE_SHT
  #undef USE_SHT
#endif

#ifdef USE_HTU
  #undef USE_HTU
#endif

#ifdef USE_BMP
  #undef USE_BMP
#endif

#ifdef USE_SHT3X
  #undef USE_SHT3X
#endif

#ifdef USE_LM75AD
  #undef USE_LM75AD
#endif

#ifdef USE_AZ7798
  #undef USE_AZ7798
#endif

#ifdef USE_MAX31855
  #undef USE_MAX31855
#endif

#ifdef USE_MLX90614
  #undef USE_MLX90614
#endif

#ifdef USE_MAX31865
  #undef USE_MAX31865
#endif

#ifdef USE_HIH6
  #undef USE_HIH6
#endif

#ifdef USE_DHT12
  #undef USE_DHT12
#endif

#ifdef USE_DS1624
  #undef USE_DS1624
#endif

#ifdef USE_AHT1x
  #undef USE_AHT1x
#endif

#ifdef USE_HDC1080
  #undef USE_HDC1080
#endif

#ifdef USE_MCP9808
  #undef USE_MCP9808
#endif

#ifdef USE_HP303B
  #undef USE_HP303B
#endif

#ifdef USE_LMT01
  #undef USE_LMT01
#endif

#ifdef USE_AM2320
  #undef USE_AM2320
#endif

#ifdef USE_BME68X
  #undef USE_BME68X
#endif

#ifdef USE_TIMERS
  #undef USE_TIMERS
#endif
#define USE_TIMERS

#ifdef USE_TUYA_MCU
  #undef USE_TUYA_MCU
#endif

#ifdef USE_WEBSERVER
  #undef USE_WEBSERVER
#endif
#define USE_WEBSERVER

#ifdef USE_WS2812
  #undef USE_WS2812
#endif
#define USE_WS2812

#ifdef USE_ZIGBEE
  #undef USE_ZIGBEE
#endif

#ifdef MY_LANGUAGE
  #undef MY_LANGUAGE
#endif
#define MY_LANGUAGE	ru_RU

#define FIRMWARE_WEBCAM 
#undef CODE_IMAGE_STR 
#define CODE_IMAGE_STR "webcam" 
  
#define USE_WEBCAM 
#define ENABLE_RTSPSERVER 
#define USE_FACE_DETECT
#define USE_SPI 
#define USE_SDCARD 
  
#define USE_I2C 
#define USE_DS18x20 
#define USE_BMP 
#define USE_DHT 
#define USE_BH1750 
#define USE_WS2812 
#define USE_SCD40
#define USE_TSL2561
#define USE_AHT2x


#define USE_DISPLAY
#define USE_DISPLAY_LCD	
#define SHOW_SPLASH

#define USE_BERRY   



#define USE_HOME_ASSISTANT 
#define USE_TASMOTA_DISCOVERY                    // Enable Tasmota Discovery support (+2k code) 
#define USE_DISCOVERY
#define WEBSERVER_ADVERTISE	
#define MQTT_HOST_DISCOVERY
#define USE_SUNRISE

#define MY_LANGUAGE ru_RU	
#endif
