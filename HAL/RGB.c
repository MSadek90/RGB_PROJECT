#include "RGB.h"


RGB_ChosseColor(u8 color)
{ 

 OCR1A=RGB_Arr[color][R];
 OCR1B=RGB_Arr[color][G];
 OCR0=RGB_Arr[color][B];

}

void RGB_fromREDToYELLOW()
{
   int i=0,flag=0;

     while ( i != 255)
     {
     OCR1A=255;
	 OCR1B=i;
	 OCR0=0;
	  if (flag==0)
	  {
		  _delay_ms(200);
		  flag=1;
	  }
	 _delay_ms(1);
	 i++;
	 }
	 
	
}

void RGB_fromBLACKToROSE()
{
	 int i=0,j=0,flag=0;

	 while ( i != 255 &&  j!=255)
	 {
		 OCR1A=i;
		 OCR1B=0;
		 OCR0=j;
		 if (flag==0)
		 {
		  _delay_ms(200);
		  flag=1;
		 }
		 _delay_ms(1);
		 i++;
		 j++;
	 }
}

void RGB_fromWHITEToGREEN()
{
 u8 i=255,j=255,k=0,flag=0;

 while ( i != 0 &&  j!=0 && k!=255)
 {
	 OCR1A=i;
	 OCR1B=k;
	 OCR0=j;
	 if (flag==0)
	 {
		 _delay_ms(200);
		 flag=1;
	 }
	 _delay_ms(1);
	 i--;
	 j--;
	 k++;
 }
  
}