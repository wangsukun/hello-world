#include <stdio.h>

#define NUM 50

int main(void) { 
      
    int i = 0;
    #if NUM > 50
     i ++;
    
    #else
    #if NUM == 50
     i = i + 50;
    
    #else
     i --;
     
    #endif
    #endif
      
    printf("Now i is :%d\n", i); 
    

	return 0;
}
