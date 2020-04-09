#include<math.h>

#define SIMPLE_INTEREST(p,n,r) (p * n * r)/100

#define AMOUNT(p,n,r,t) pow(p*((1+r)/n),n * t)
