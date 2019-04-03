#include <stdio.h>
#include <stdlib.h>

  //·ÅÍâ±ß keyk±ä0 ³ö´í 
    
    
    
	unsigned short SaccSeed=0x5BA2;
	
	
	unsigned short KeyResult = 0x12;
	unsigned short SaccKey = 0x34;	
	
	unsigned char KeyK = 0x94;
 	
int main(void)
{
	//unsigned short SaccSeed=0xA7F1;
		//printf("%d\n",sizeof(unsigned short));
		
	/*
	unsigned short SaccSeed=0x5BA2;
	unsigned short KeyResult = 0x12;
	unsigned short SaccKey  = 0x34;
	unsigned char KeyK = 0x94;	
	*/
	char str[] = "hello world";
	
	scanf("%s",str);
	
	scanf("%hx",&SaccSeed);
	
	printf("Calc\n");
    printf("&SaccSeed = %p\n",&SaccSeed);
    printf("&KeyK = %p\n",&KeyK);    
	printf("&KeyResult = %p\n",&KeyResult);
	printf("&SaccKey = %p\n",&SaccKey);
		
    printf("Calc\n");
    printf("SaccSeed = %X\n",SaccSeed);
    printf("KeyK = %x\n",KeyK);    
	printf("KeyResult = %X\n",KeyResult);
	printf("SaccKey = %X\n",SaccKey);
	
		

}
