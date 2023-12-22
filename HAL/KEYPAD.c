#include "KEYPAD.h"


u8 KEYPAD_Getkey()
{
      u8 r,c,key=NO_KEY;
      DIO_WritePin(FIRST_OUTPUT+0,HIGH);
      DIO_WritePin(FIRST_OUTPUT+1,HIGH);
      DIO_WritePin(FIRST_OUTPUT+2,HIGH);
      DIO_WritePin(FIRST_OUTPUT+3,HIGH);

  for(r=0;r<ROWS;r++)
  {
      DIO_WritePin(FIRST_OUTPUT+r,LOW);
      for(c=0;c<COLS;c++)
       {
          if(DIO_ReadPin(FIRST_INPUT+c)==LOW)
            {
                 key=keysArray[r][c];
                while (DIO_ReadPin(FIRST_INPUT+c)==LOW);
             }

       }
    DIO_WritePin(FIRST_OUTPUT+r,HIGH);
  }
    return key;
}