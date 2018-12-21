#include<reg51.h>
#include"delay.h"

sbit relay_out = P2^0;

void delay(int);
int main()
	{
		do
			{ relay_out = 1;
				delay(100);
				relay_out = 0;
				delay(100);
			}while(1);
		}

