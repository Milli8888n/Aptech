#include <stdio.h>
int main()
{ 
    int s, m = 3, n = 5, r, t;
    float x = 3.0, y;
    t = n/m;
    r = n%m;
    y = n/m;
    t = x*y - m/2;
    x = x*2.0;
    s = (m+n)/r;
    y = --n;
    printf("s = %d, r = %d, t = %d, x = %f, y = %f\n", s,r,t,x,y);
    return 0;
}