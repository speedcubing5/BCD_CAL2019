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
   // T_U16 s;
   // RTE_SetDcMotorDuty(s);
    //de aici prelucram servoul
    T_U16 s,spd=35;
    s=RTE_GetLineFollower();//citim din senzor : 1-2-4-8-16-32 invers //pentru servo 65--115
    
   /*  switch(s)
      {
           case 3:RTE_ServoSetAngle(115); RTE_SetDcMotorDuty(35);break;
           case 6:RTE_ServoSetAngle(105);RTE_SetDcMotorDuty(30);break;
           case 12:RTE_ServoSetAngle(90); RTE_SetDcMotorDuty(20);break;
           case 24:RTE_ServoSetAngle(75);RTE_SetDcMotorDuty(30);break;
           case 48:RTE_ServoSetAngle(65); RTE_SetDcMotorDuty(35);break;
           case 63:RTE_ServoSetAngle(90);RTE_SetDcMotorDuty(20);break;
           default:RTE_SetDcMotorDir(20);break;
      }*/
    RTE_SetDcMotorDuty(spd);
    switch(s)
    {
        case 1:{RTE_ServoSetAngle(115);break;}//dreapta
        case 3:{RTE_ServoSetAngle(110);break;}//dreapta
        case 2:{RTE_ServoSetAngle(105);break;}//dreapta
        case 6:{RTE_ServoSetAngle(100);break;}//dreapta
        case 4:{RTE_ServoSetAngle(95);break;}//dreapta
        
        case 12:{RTE_ServoSetAngle(90);break;}//mijloc
        
        case 8:{RTE_ServoSetAngle(85);break;}//stanga
        case 24:{RTE_ServoSetAngle(80);break;}//stanga
        case 16:{RTE_ServoSetAngle(75);break;}//stanga
        case 48:{RTE_ServoSetAngle(70);break;}//stanga
        case 32:{RTE_ServoSetAngle(65);break;}//stanga
        
    }
    
   /* if(s==12)//pe mijloc
    {
        RTE_ServoSetAngle(90);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==1)//spre dreapta 0
    {
        RTE_ServoSetAngle(115);
        RTE_SetDcMotorDuty(spd);
    }
     if(s==3)//spre dreapta 1
    {
        RTE_ServoSetAngle(110);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==2)//spre dreapta 2
    {
        RTE_ServoSetAngle(105);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==6)//spre dreapta 3
    {
        RTE_ServoSetAngle(100);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==4)//spre dreapta 4
    {
        RTE_ServoSetAngle(95);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==12)//centru
    {
        RTE_ServoSetAngle(90);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==8)//spre stanga 4
    {
        RTE_ServoSetAngle(85);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==24)//spre stanga 3
    {
        RTE_ServoSetAngle(80);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==16)//spre stanga 2
    {
        RTE_ServoSetAngle(75);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==48)//spre stanga 1
    {
        RTE_ServoSetAngle(70);
        RTE_SetDcMotorDuty(spd);
    }
    if(s==32)//spre stanga 0
    {
        RTE_ServoSetAngle(65);
        RTE_SetDcMotorDuty(spd);
    }*/
    
    
    
    
   // RTE_SetDcMotorDir(20);
    /* if(s==63)
    {
         RTE_SetDcMotorDuty(20);
         RTE_ServoSetAngle(0);
    }
    if(s==12)//pe mijloc
    {
        RTE_ServoSetAngle(90);
        RTE_SetDcMotorDuty(20);
    }
    if(s==6)//spre dreapta
    {
        RTE_ServoSetAngle(105);
        RTE_SetDcMotorDuty(20);
    }
    if(s==24)//spre stanga
    {
        RTE_ServoSetAngle(75);
        RTE_SetDcMotorDuty(20);
    }
    if(s==3)//spre dreapta de tot
    {
        RTE_ServoSetAngle(115);
        RTE_SetDcMotorDuty(20);
    }
    if(s==48)//spre stanga de tot
    {
        RTE_ServoSetAngle(65);
        RTE_SetDcMotorDuty(20);
    }*/
    
    
   /* if(s==30)//cand intalneste mai multe bifurcatii sa o ia spre dreapta
    {
        RTE_ServoSetAngle(65);
        RTE_SetDcMotorDuty(20);
    }*/
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
 
 T_U16 ASM_Acumulator()
 {
     RTE_ADCinit();
     T_U16 acCitita=RTE_ADCread();
     T_U16 tensAcumulator=3.07*acCitita*4/4095;
     return tensAcumulator;
     
 }