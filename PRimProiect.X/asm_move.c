/*
 * File:   asm_move.c
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:12
 */


#include "xc.h"
#include"rte.h"
#include"mcal_gpio.h"

void ASM_DcMotorInit()
{
    RTE_DcMotorInit();
}

void ASM_SetDcMotorDirSpeed()
{
    //de aici prelucram servoul
    T_U16 s;
    s=RTE_GetLineFollower();
   // RTE_SetDcMotorDuty(20);
  //  RTE_ServoSetAngle(90);
    RTE_SetDcMotorDir(0);
     if(s==63)
    {
        RTE_SetDcMotorDuty(0);
    }
    if(s==12)
    {
        RTE_ServoSetAngle(90);
        RTE_SetDcMotorDuty(20);
    }
    if(s==6)
    {
        RTE_ServoSetAngle(105);//spre dreapta
        RTE_SetDcMotorDuty(20);
    }
    if(s==24)//spre stanga
    {
        RTE_ServoSetAngle(75);
        RTE_SetDcMotorDuty(20);
    }
    if(s==3)//spre stanga
    {
        RTE_ServoSetAngle(120);
        RTE_SetDcMotorDuty(20);
    }
    if(s==48)//spre stanga
    {
        RTE_ServoSetAngle(60);
        RTE_SetDcMotorDuty(20);
    }
}

void ASM_ServoSetAngle(angle)
{
    RTE_ServoSetAngle(angle);
}




void ASM_SetLineFollower()
{
    RTE_SetLineFollower(INPUT);
}
 void ASM_GetLineFollower()
{
     RTE_GetLineFollower();
}
 void ASM_WriteLineFollower()
 {
     RTE_WriteLineFollower();
 }