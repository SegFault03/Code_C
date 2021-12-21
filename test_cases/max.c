#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i=1,j;
  int sa=0,so=0,sx=0;
  int ma=0,mo=0,mx=0;
  while(i<n)
  {
      for(j=i+1;j<=n;j++)
      {
          sa=i&j;
          so=i|j;
          sx=i^j;
          if(sa>=ma&&sa<k)
            ma=sa;
          if(so>=mo&&so<k)
            mo=so;
          if(sx>=mx&&sx<k)
            mx=sx;
      }
    i++;
  }
  printf("%d\n%d\n%d\n",ma,mo,mx);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
