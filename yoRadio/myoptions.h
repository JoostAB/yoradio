// My youtube channel: https://www.youtube.com/@LeventeDaradici/videos
// My pastebin page: https://pastebin.com/u/LeventeDaradici
// ёRadio on Github: https://github.com/e2002/yoradio
// ёRadio - simple myoptions.h generator: https://e2002.github.io/docs/myoptions-generator.html
// Board settings: https://i.imgur.com/HdWUg0w.jpeg
// About how we load the file system on the board: https://randomnerdtutorials.com/install-esp32-filesystem-uploader-arduino-ide/
// The board I used: https://macsbug.wordpress.com/2022/08/17/esp32-2432s028/
// I bought the board from here:https://www.aliexpress.com/item/1005004502250619.html
// The answer that helped me solve the problem with the touchscreen: https://github.com/e2002/yoradio/issues/34
//
#ifndef myoptions_h
#define myoptions_h
 
#define DSP_MODEL DSP_ST7789
#define DSP_HSPI true
#define LED_INVERT true
#define TFT_CS 15
#define TFT_DC 2
#define TFT_RST -1
#define LED_BUILTIN 17
#define BRIGHTNESS_PIN 21
// #define I2S_INTERNAL true
// #define PLAYER_FORCE_MONO true
//#define I2S_DOUT 22
//#define I2S_BCLK 16
//#define I2S_LRC 4
#define TS_MODEL TS_MODEL_XPT2046
#define TS_SPIPINS 25, 39, 32 /* SCK, MISO, MOSI */
#define TS_CS 33

// #define TS_MODEL TS_MODEL_GT911

//#define IR_PIN 27
#define LIGHT_SENSOR 34
#define AUTOBACKLIGHT_MAX 1024
 
#endif