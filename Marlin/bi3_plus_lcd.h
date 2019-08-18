#ifndef BI3PLUSLCD_H
#define BI3PLUSLCD_H

#include "Marlin.h"
#undef USE_MARLINSERIAL
//#include "Arduino.h" //JBOZARTH: TODO this may need to be romoved

void lcdSetup();
void lcdTask();

void executeLoopedOperation(millis_t ms);
void lcdStatusUpdate(millis_t ms);
void lcdShowPage(uint8_t pageNumber);
uint8_t lcdgetCurrentPage();
void readLcdSerial();
void lcdSendStats();
void lcdSendMarlinVersion();
void updateGraphData();

#endif
