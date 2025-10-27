# include <stdio.h>//二维数组的输出

int main(void) 
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8,},
		{9,10,11,12}
	};
	int i;
	int j;
	
	for (int i = 0; i < 3; i++) 
	{
		for (j = 0; j < 4; j++) 
		{
			printf("%-5d", a[i][j]);//"-"表示对齐各个元素,"5"表示各元素间距为5个空格
		}
		printf("\n");
	
	}
	return 0;
}