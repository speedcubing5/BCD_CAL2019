/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "ASW_Move.h"
#include "mcal_init.h"
#include "asw_com.h"

T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
  //  GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
    Asw_DcMotorInit();
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
    if(a==1)
    {
        vDoHandleLightSig();
    a=0;
    }
    else
    {
    a++;
    }
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
   /// a = !a;
   // GPIO_u8WritePortPin(PORT_A, 10, a);
    Asw_SetDcMotorDirSpeed();
}