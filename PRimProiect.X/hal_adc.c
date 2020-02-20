/*
 * File:   hal_adc.c
 * Author: cubin
 *
 * Created on 20 februarie 2020, 19:30
 */


#include "xc.h"
#include "mcal_adc.h"

void HAL_ADCinit()
{
    ADC_vInit();
}

T_U16 HAL_ADCread()
{
    return ADC_u16Read(0);
}