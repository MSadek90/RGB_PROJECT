
#ifndef RGB_H_
#define RGB_H_

#include "MemMap.h"
#include "Utils.h"
#include "StdTypes.h"

#define  RED_PIN         OCR1A
#define  GREEN_PIN       OCR1B
#define  BLUE_PIN        OCR0


#define RED          0
#define GREEN        1
#define BLUE         2
#define ROSE         3
#define WHITE        4
#define BLACK           5
#define LIGHTGEEN       6
#define YELLOW          7 


#define TOTAL        8


#define  R        0
#define  G        1
#define  B        2


static u8 RGB_Arr[TOTAL][3]= {{255,0,0},
                             {0,255,0},
                             {0,0,255},
                             {255,0,255},
                             {255,255,255},
                             {0,0,0},
							 {0,255,255},
							 {255,255,0}
                             };

                       
void RGB_ChosseColor(u8 color);
void RGB_fromREDToYELLOW();
void RGB_fromBLACKToROSE();
void RGB_fromWHITEToGREEN();



#endif 