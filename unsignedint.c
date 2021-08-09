#include<stdio.h>
int main()
{
	unsigned int i=-4;//(declaration +definitin +initialization)range of unsigned int is 0 to 4294967295
	printf("%u\n",i);//4294967292
{
 int i=-4;//(declaration +definitin +initialization)range of unsigned int is 0 to 4294967295
	printf("%u\n",i);
	}
	{
short int i=32769;//range of signed short int -32768 to 32767
	printf("%hd\n",i);
	
}
{ 
unsigned short int i=-32763;//range of signed short int -32768 to 32767
	printf("%d\n",i);
	}
		{

	unsigned char c='-2';// range of unsigned char is 0 to 255
	printf("%c\n",c);
	
}
{	signed char c='129';// range of unsigned char is -128 to 127
	printf("%c\n",c);//9
	
}
}
