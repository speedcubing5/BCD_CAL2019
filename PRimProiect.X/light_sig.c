/*
 * File:   light_sig.c
 * Author: cubin
 *
 * Created on 13 noiembrie 2019, 18:39
 */


#include "xc.h"
#include "mcal_gpio.h"
int i=0;

void vDoHandleLightSig()
{
    /* counter++;
    if(counter==10)
    {
       GPIO_u8WritePortPin(PORT_A, 10, a);
         counter=0;
    }*/
    if(i<10)
    {
        if(i<6 && i%2==1)
         {
             GPIO_u8WritePortPin(PORT_A, 10, 1);
         }
         else 
         {
             GPIO_u8WritePortPin(PORT_A, 10, 0);
         }
        i++;
    }
    if(i==10)
    {
        i=0;

    }
}
