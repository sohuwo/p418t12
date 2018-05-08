//p416 title 12
//display data in the form

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define LEN 50

int main(void)
{
	FILE *fp;
	int i = 0, item, month, day, year;
	float unit_price;
	fp = fopen("C:/Users/Freeuser/source/repos/test/Debug/p416t12.dat","rb");
	int ch;
	char text[LEN] = {0};
	
	while ((ch = getc(fp)) != EOF)
	{
		text[i]= ch;
		i++;
	}
	sscanf(text,"%d,%f,%d/%d/%d",&item,&unit_price,&month,&day,&year);
	printf("Item	Unit 	    Purchase\n"\
	       "	Price 	    Date\n");
	printf("%-4d    $%7.2f    %d/%d/%d\n",item,unit_price,month,day,year);
	sscanf(text, "%*[^\n]\n%d,%f,%d/%d/%d", &item, &unit_price, &month, &day, &year);
	printf("%-4d    $%7.2f    %d/%d/%d\n", item, unit_price, month, day, year);
	

	fclose(fp);
	return 0;
}
