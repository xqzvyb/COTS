
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define GET_BIT(n,b) ((n&(1<<b))>>b)
#define SET_BIT(n,b) n=n|(1<<b)
#define CLR_BIT(n,b) n=n&(~(1<<b))
#define TOG_BIT(n,b) n=n^(1<<b)

#endif
