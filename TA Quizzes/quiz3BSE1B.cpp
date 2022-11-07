#include <stdio.h>


// Driver code
int main()
{
  int u = 260;
  float b = 0;
  
  if(u <=20 ){
    b += u * 0.5;
    return b + (b * 10/100);
  }
  else
  {
    if( u <= 70)
    {
      b += ((20) * 0.5) + ((u - 20) * 0.75);
      return b + (b * 10/100);
    }
    
    else if(u<= 170)
    {
      b += ((20) * 0.5) + ((70) * 0.75) + ((u- 90*1));
      return b + (b * 10/100);
    }
    else if(u >= 250)
    {
      b += u * 1.5;
      return b + (b * 10/100);
    }
  }
  return 0;
}
