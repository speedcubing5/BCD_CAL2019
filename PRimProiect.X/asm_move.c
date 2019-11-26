/*
 * File:   asm_move.c
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:12
 */


#include "xc.h"
#include"rte.h"

void ASM_DcMotorInit()
{
    RTE_DcMotorInit();
}

void ASM_SetDcMotorDirSpeed()
{
    RTE_SetDcMotorDir(0);
    RTE_SetDcMotorDuty();
}