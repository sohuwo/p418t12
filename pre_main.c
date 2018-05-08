//p416 title 12
//display data in the form

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int i = 0;
	fp = fopen("C:/Users/Freeuser/source/repos/test/Debug/p416t12.dat","wb");
	int ch;
	char text[] = "583,13.5,10/24/2005\n3912,599.99,7/27/2008";
	
	while ((ch = text[i]) != '\0')
	{
		putc(ch, fp); 
		i++;
	}

	fclose(fp);
	return 0;
}
