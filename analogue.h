#ifndef __ANALOGUE_H
#define __ANALOGUE_H

#include <stdint.h>


void analogue_init(void);
void trigger_conversion(void);

volatile uint32_t motor_one_speed;
volatile uint32_t motor_two_speed;

#endif /* __ANALOGUE_H */
