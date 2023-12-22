#ifndef UTILS_H_
#define UTILS_H_

#define SET_BIT(reg,bit) (reg |= 1<<bit)
#define GET_BIT(reg,bit) (reg &= 1<<bit)
#define CLR_BIT(reg, bit) (reg &= (~(1<<bit)))
#define TOGGLE_BIT(reg, bit) (reg ^= 1<<bit)
#define READ_BIT(reg,bit)  ((reg>>bit)&1)

#define F_CPU 8000000
#include <util/delay.h>

#define NULL 0
#define NULLPTR ((void*)0)


#endif /* UTILS_H_ */