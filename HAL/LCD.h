
#ifndef LCD_H_
#define LCD_H_



#define  F_CPU   8000000
#include <util/delay.h>
#include "StdTypes.h"
#include "DIO.Interface.h"

#define  _4_BIT  1
#define  _8_BIT  2


/**************************pin config************************/

 #define  LCD_MODE   _4_BIT

#define  RS         PINA1
#define  EN         PINA2

#define  D7   PINA6
#define  D6   PINA5
#define  D5   PINA4
#define  D4   PINA3

#define  LCD_PORT   PA



void LCD_Init();

void LCD_Clear(void);
void LCD_WriteChar(u8 ch);
void LCD_WriteString(u8*str);
void LCD_WriteNumber(u8 num);
void LCD_WriteNumber_4D(u16 num);
void LCD_WriteBinary(u8 num);
void LCD_WriteHex(u8 num);

void LCD_GoTo(u8 line ,u8 cell);

void LCD_GoToClear(u8 line ,u8 cell,u8 numOfCells);

void LCD_GoToWriteString(u8 line,u8 cell,u8*str);
void LCD_Create_Character(u8*p,u8 address);
void LCD_Move();

#endif /* LCD_H_ */