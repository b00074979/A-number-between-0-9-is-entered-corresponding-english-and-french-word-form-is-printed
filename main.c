/*LAB 2 Q2 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 26th September 2014

Purpose: Enter a value between (0-9) and its worded form should be printed in english first then in french.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int digit;

  printf("Enter a single digit between '0-9':\n");
  scanf("%d",&digit);


  if(digit == 0){
       printf("0 = ZERO\n");
  }


  if(digit == 1){
       printf("1 = Un\n");
  }

  if(digit == 2){
       printf("2 = Deux\n");
  }

  if(digit == 3){
       printf("3 = Trios\n");
  }

  if(digit == 4){
       printf("4 = Quatre\n");
  }

  if(digit == 5){
       printf("5 = Cinq\n");
  }

  if(digit == 6){
       printf("6 = Six\n");
  }

  if(digit == 7){
       printf("7 = Sept\n");
  }

  if(digit == 8){
       printf("8 = Huit\n");
  }

  if(digit == 9){
       printf("9 = Neuf\n");
  }



    return 0;
}
