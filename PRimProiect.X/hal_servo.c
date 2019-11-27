/*
 * File:   %<%NAME%>%.%<%EXTENSION%>%
 * Author: %<%USER%>%
 *
 * Created on %<%DATE%>%, %<%TIME%>%
 */


#include "xc.h"
#include "mcal_pwm.h"
#include "general_types.h"

 T_F16 dutyCycleServo;
void HAL_ServoSetAngle(int angle)
{
    dutyCycleServo=(angle-10)*0.04375+4;
    if(dutyCycleServo>9.6)
    {
        dutyCycleServo=9.6;
    }
    if(dutyCycleServo<6.6)
    {
        dutyCycleServo=6.6;
    }
    PWM1_vSetDuty(dutyCycleServo,1);//(T_F16 f16Duty, T_U8 u8Ch)
}