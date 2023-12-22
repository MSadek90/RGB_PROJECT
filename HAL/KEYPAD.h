#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "DIO.Interface.h"


/******************config*****************************/
#define  FIRST_OUTPUT  PINB4
#define  FIRST_INPUT   PINC4


#define ROWS   4
#define COLS   4
#define NO_KEY  'N'

static  u8 keysArray[ROWS][COLS]={{'7','8','9','/'},
                                  {'4','5','6','*'},
						          {'1','2','3','-'},
						          {'c','0','=','+'}
						          };
				
/*************************************************************************/

u8 KEYPAD_Getkey();


#endif /* KEYPAD_H_ */