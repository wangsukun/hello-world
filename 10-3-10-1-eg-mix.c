#include <stdio.h>

#define MIX(a,b) ((a)*(b) + (b))

int main(void) { 
      
      int x = 5, y = 9;
      
      printf("x, y:\n");
      printf("%d, %d\n", x, y);
      printf("The min number is:%d\n", MIX(x,y));
        
    

	return 0;
}
