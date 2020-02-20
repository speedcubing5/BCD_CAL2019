/* 
 * File:   rte.h
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:13
 */

#ifndef RTE_H
#define	RTE_H
#include "hal_dc.h"
#include "hal_servo.h"
#include "hal_lf.h"
#include "hal_adc.h"
#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* RTE_H */

#define RTE_DcMotorInit HAL_DcMotorInit
#define RTE_SetDcMotorDir HAL_SetDcMotorDir
#define RTE_SetDcMotorDuty HAL_SetDcMotorDuty

#define RTE_ServoSetAngle HAL_ServoSetAngle

#define RTE_SetLineFollower HAL_SetLineFollower
#define RTE_GetLineFollower HAL_GetLineFollower
#define RTE_WriteLineFollower HAL_WriteLineFollower

#define RTE_ADCinit HAL_ADCinit
#define RTE_ADCread HAL_ADCread