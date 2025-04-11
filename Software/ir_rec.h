/***************************************************************************

 ir_rec.h

 NEC IR protocol receiver 
 
 Controller: STC8A8K64D4 @ breakout
 
 15.12.2024  - First version

 ***************************************************************************/

#ifndef INC_IR_REC_H_
#define INC_IR_REC_H_

#define TOPFIELD
//#define YUJIN
//#define NONAME1

#ifdef TOPFIELD
#define IRCMD_UP        0x00
#define IRCMD_DOWN      0x01
#define IRCMD_RIGHT     0x02
#define IRCMD_LEFT      0x03
#define IRCMD_OK        0x1F
#define IRCMD_0         0x10
#endif

#ifdef YUJIN
#define IRCMD_UP        0x09
#define IRCMD_DOWN      0x19
#define IRCMD_RIGHT     0x0D
#define IRCMD_LEFT      0x1D
#define IRCMD_OK        0x1B    // Enter button
#define IRCMD_0         0x17    // Mode button
#endif

#ifdef NONAME1
#define IRCMD_UP        0x42
#define IRCMD_DOWN      0x43
#define IRCMD_RIGHT     0x45
#define IRCMD_LEFT      0x44
#define IRCMD_OK        0x41
#define IRCMD_0         0x60
#endif

#define IRCMD_NONE      0xFF

extern BYTE ir_cmd;

void pca_isr(void) __interrupt(PCA_VECTOR) __using (1);

void ir_task( void );

#endif /* INC_IR_REC_H_ */
