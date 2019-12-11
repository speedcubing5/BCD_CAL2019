/*
 * File:   hal_lf.c
 * Author: cubin
 *
 * Created on 11 decembrie 2019, 18:13
 */


#include "xc.h"
#include "mcal_pwm.h"
#include "general_types.h"
#include "hal_lf.h"


 void HAL_SetLineFollower(BOOL bDir)
 {
     GPIO_u8SetPortPin(PORT_C,0,DIGITAL,bDir);//(T_U8 u8Port,T_U8 u8Pin,BOOL bAD,BOOL bDir); 0...5
     GPIO_u8SetPortPin(PORT_C,1,DIGITAL,bDir);
     GPIO_u8SetPortPin(PORT_C,2,DIGITAL,bDir);
     GPIO_u8SetPortPin(PORT_C,3,DIGITAL,bDir);
     GPIO_u8SetPortPin(PORT_C,4,DIGITAL,bDir);
     GPIO_u8SetPortPin(PORT_C,5,DIGITAL,bDir);
 }
 T_U16 HAL_GetLineFollower()
 {
     T_U16 a;
     HAL_SetLineFollower(OUTPUT);
     HAL_WriteLineFollower();
     __delay_us(10);
     HAL_SetLineFollower(INPUT);
     __delay_us(1000);
     a=GPIO_u16ReadPort(PORT_C);
     a=a&63;
     return a;
 }
 void HAL_WriteLineFollower()
 {
     T_U16 i;
     for(i=0;i<=5;i++)
     {
         GPIO_u8WritePortPin(PORT_C,i,1);
     }
     
 }