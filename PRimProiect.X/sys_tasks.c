/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"
#include "rte.h"
#include "asm_move.h"


T_U16 a = 0;
int angle=60;//intre 60 si 130
int contor=0;


void TASK_Inits()
{
    MCAL_vInit();
    ASM_DcMotorInit();
}

void TASK_1ms()
{
  //  ASM_ServoSetAngle(angle);
    ASM_SetDcMotorDirSpeed();
}

void TASK_5ms()
{
    //ASM_SetDcMotorDirSpeed();
}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
   /* if(a==1)
    {
        vDoHandleLightSig();
    a=0;
    }
    else
    {
    a++;
    }*/
    
    T_U16 ac=ASM_Acumulator();
    if(ac>6&&ac<8.4)
    {
        if(ac>7&&ac<8.4)
        {
            
        }
        if(ac>6.5&&ac<7)
        {
            
        }
        if(ac>6&&ac<6.5)
        {
            
        }
    }
}

void TASK_500ms()
{ 
   
}

void TASK_1000ms()
{
    
    
   /// a = !a;
   // GPIO_u8WritePortPin(PORT_A, 10, a);
    
    
    
    // pentru servo
    /*
    ASM_SetDcMotorDirSpeed();
   

     if(contor<=5)
    {
        ASM_ServoSetAngle(angle);
        angle=angle+10;
        contor++;
    }
    if(contor>5)
    {
        contor=0;
        angle=60;
    }*/
}