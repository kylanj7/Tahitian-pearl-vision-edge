//Source: https://docs.arduino.cc/tutorials/portenta-vision-shield/getting-started-camera/

// Camera shield Rev.2 with HM0360
#include "camera.h"
#include "hm0360.h"

// Initialize camera object
HM0360 himax;  // <- Added semicolon
Camera cam(himax);

#define IMAGE_MODE CAMERA_GRAYSCALE

// Frame buffer - for grayscale at 320x240, use 1 byte per pixel
FrameBuffer fb(320, 240, 1);  // <- Changed from 2 to 1 for grayscale

unsigned long lastUpdate = 0;

void setup() {
  Serial.begin(921600);
  while (!Serial);  // Wait for serial connection
  
  // Initialize camera
  if (!cam.begin(CAMERA_R320x240, IMAGE_MODE, 30)) {  // <- Added if statement and semicolon
    Serial.println("Failed to initialize camera!");
    while(1);
  }
  
  Serial.println("Camera initialized");
}

void loop() {
  // Check if we should send a frame
  bool timeoutDetected = millis() - lastUpdate > 2000;
  
  // Wait for trigger byte or timeout
  if (!timeoutDetected && Serial.available() > 0) {
    if (Serial.read() != 1) return;
  } else if (!timeoutDetected) {
    return;
  }
  
  lastUpdate = millis();
  
  // Capture and send frame
  if (cam.grabFrame(fb, 3000) == 0) {
    // Send frame size first (optional - helps receiver know what to expect)
    uint32_t frameSize = fb.getBufferSize();
    Serial.write((uint8_t*)&frameSize, 4);
    
    // Send frame data
    Serial.write(fb.getBuffer(), frameSize);
  }
}
