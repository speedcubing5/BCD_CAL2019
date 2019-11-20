/*
 * File:   ASW_Move.c
 * Author: cubin
 *
 * Created on 20 noiembrie 2019, 19:06
 */


#include "xc.h"
#include "rte.h"
#include "ASW_Move.h"

void Asw_DcMotorInit()
{
    RTE_DcMotorInit();
}

void Asw_SetDcMotorDirSpeed()
{
      RTE_SetDcMotorDir(0);
      RTE_SetDcMotorDuty();
}
