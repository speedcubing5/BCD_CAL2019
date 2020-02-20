/* 
 * File:   asm_move.h
 * Author: cubin
 *
 * Created on 25 noiembrie 2019, 20:11
 */

#ifndef ASM_MOVE_H
#define	ASM_MOVE_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* ASM_MOVE_H */
extern void ASM_DcMotorInit();
extern void ASM_SetDcMotorDirSpeed();
extern void ASM_ServoSetAngle(int angle);

extern void ASM_SetLineFollower(BOOL bDir);
extern T_U16 ASM_GetLineFollower();
extern void ASM_WriteLineFollower();

extern T_U16 ASM_Acumulator();
