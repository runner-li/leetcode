#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://en.wikipedia.org/wiki/Integer_(computer_science)
#include <math.h>       /* pow */
class Solution 
{
public:
    int reverse(int x) 
    {
        bool negative = false;
        
        if ((x>pow(2,31)-1)|| (x<-pow(2,31)))
        {
            return 0;
        }
        
        if(x < 0) 
        {
            negative = true;
            x = -x;
        }
        
        long reversed = 0;
        while(x > 0)
        {
            reversed = reversed*10 + x%10; // very nice shift
            x /= 10;
        }
        if (negative)
        {
            reversed = -reversed;
        }
        
        if ((reversed>pow(2,31)-1)|| (reversed<-pow(2,31))) // msut limit the output as well as it may overflow
        {
            return 0;
        }
        
        
        return (int)reversed;
    }
};
