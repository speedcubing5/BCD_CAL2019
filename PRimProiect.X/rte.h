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