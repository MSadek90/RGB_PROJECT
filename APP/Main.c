#include "Timers.h"
#include "LCD.h"
#include "KEYPAD.h"
#include "stdTypes.h"
#include "RGB.h"


void main(void)
{
    DIO_Init();
	LCD_Init();

	 
	
	
	
	 /*************TIMER1********************************************/
	 Timer1_Init(TIMER1_FASTPWM_ICR_TOP_MODE,TIMER1_SCALER_8);
	 Timer1_OCRA1Mode(OCRA_NON_INVERTING);
	 Timer1_OCRB1Mode(OCRB_NON_INVERTING);
	 ICR1=255;
	 /*************************TIMER0*************************************/
     TIMER0_Init(TIMER0_FASTPWM_MODE,TIMER0_SCALER_8);
	 TIMER0_OC0Mode(OC0_NON_INVERTING);
	
	
     



	 u8 k, flag=0;
	 LCD_GoTo(0,0);
	 LCD_WriteString(" RGB Project ");
	 _delay_ms(50);
	 LCD_Clear();
	 LCD_GoTo(0,0);
	 LCD_WriteString("1- Normal Mode");
	 LCD_GoTo(1,0);
	 LCD_WriteString("2- sharon Mode");

	
	while (1)
	{
	  k=KEYPAD_Getkey();
	  if (k!=NO_KEY)
	  {
	    if (k == '1' && flag==0)
	    {
		  LCD_Clear();
		  LCD_WriteString(" choose color ");
		  flag = 1;
	    }
		 else if (k == '2' && flag==0)
		 {
			 LCD_Clear();
			 LCD_GoTo(0,0);
			 LCD_WriteString("From:");
			 LCD_GoTo(1,0);
			 LCD_WriteString("To:");
			 flag = 2;
		 }

		 else if (k== '3' && flag ==2)
		 {
		    LCD_GoToClear(0,5,7);
		    LCD_GoTo(0,5);
			LCD_WriteString("RED");
		 }

		  else if (k== '6' && flag ==2)
		  {
			  LCD_GoTo(1,3);
			  LCD_WriteString("YELLOW");
			  RGB_fromREDToYELLOW();
			  
		  }
		  else if (k == '1' && flag == 2)
		  {
		    LCD_GoToClear(0,5,7);
		    LCD_GoTo(0,5);
			LCD_WriteString("BLACK");
		  }
		  else if (k== '7' && flag == 2)
		  {
		     LCD_GoToClear(1,3,7);
			 LCD_GoTo(1,3);
			 LCD_WriteString("ROSE");
			 RGB_fromBLACKToROSE();
			 
		  }

		  else if (k == '2' && flag == 2)
		  {
			  LCD_GoToClear(0,5,7);
			  LCD_GoTo(0,5);
			  LCD_WriteString("WHITE");
		  }
		  else if (k== '4' && flag == 2)
		  {
			  LCD_GoToClear(1,3,7);
			  LCD_GoTo(1,3);
			  LCD_WriteString("GREEN");
			  RGB_fromWHITEToGREEN();
			  
		  }

		else if (k == '1' && flag == 1)
		{
			RGB_ChosseColor(BLACK);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("BLACK");
		}

		else if (k == '2'  && flag == 1)
		{
		 RGB_ChosseColor(WHITE);
		 LCD_GoToClear(1,0,10);
		 LCD_GoTo(1,0);
		 LCD_WriteString("WHITE");
		}
		else if (k == '3'  && flag == 1)
		{
			RGB_ChosseColor(RED);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("RED");
		}

		else if (k == '4'  && flag == 1)
		{
		    
			RGB_ChosseColor(GREEN);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("GREEN");
		}

		else if (k == '5'  && flag == 1)
		{
			RGB_ChosseColor(BLUE);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("BLUE");
		}
		else if (k == '6'  && flag == 1)
		{
			RGB_ChosseColor(YELLOW);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("YELLOW");
		}
		else if (k == '7'  && flag == 1)
		{
			RGB_ChosseColor(ROSE);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("ROSE");
		}
		else if (k == '8'  && flag == 1)
		{
			RGB_ChosseColor(LIGHTGEEN);
			LCD_GoToClear(1,0,10);
			LCD_GoTo(1,0);
			LCD_WriteString("LIGHTGREEN");
		}
		
        else if (k == 'c' )
        {
	        LCD_GoTo(0,0);
	        LCD_WriteString("1- Normal Mode");
	        LCD_GoTo(1,0);
	        LCD_WriteString("2- sharron Mode");
			flag=0;
        }
	  }
	   
	  
	}
}