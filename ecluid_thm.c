#include"jitendra.h"
#include"prototype.h"
int gcd(int c, int b)
{
	int r;
	if(b!=0)
	{
        	r = c%b;
                gcd(b,r);
        }
        else	
		return c;	
}
