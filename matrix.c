#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("element-[%d],[%d]:%d\n",i,j,arr[i][j]);
	
	}
	printf("\nThe matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
				printf("%d\t",arr[i][j]);
	}
	printf("\n\n");
	return 0;			 
}
