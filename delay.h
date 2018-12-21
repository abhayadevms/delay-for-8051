#ifndef __DELAY_H
#define __DELAY_H
void delay(unsigned int k)
{
	int i,j;
	for(i=0;i<k;i++)
	for(j=0;j<1275;j++);
}
#endif