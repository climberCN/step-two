#include <stdio.h>
#define AMA 10
#define	BMA 5
int main()
{
	int shoe=30;
	float foot;
	while(shoe<49)
	{
		foot =(float)(shoe+AMA)*BMA/10;
		printf("the %d size shoes match the %2.1f cm feet!\n",shoe,foot);
		shoe++;	
	}
	return 0;
}



//while循环中需要控制循环的判断语句以及执行语句。另外define定义用着确实很舒服，用前需要提前考虑清楚，哪些量是定值的常量。
