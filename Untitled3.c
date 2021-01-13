#include<stdio.h>
int main()
{
	int a,b,k,l,roco,mat[100][100],i,j;
	printf("No of rows or columns:");
	scanf("%d",&roco);
	for(i=0;i<roco;i++)
	{
		for(j=0;j<roco;j++)
		{
			scanf("%d",&mat[i][j]);	
		}
		printf("\n");
	}
	printf("Input in matrix form:\n");
	for(a=0;a<roco;a++)
	{
		for(b=0;b<roco;b++)
		{
			printf("%d\t",mat[a][b]);
		}
		printf("\n");
	}
	int count=0,sum=0;
	for(k=0;k<roco;k++)
	{
		if (mat[k][k]!=0)
		count+=1;
		sum+=mat[k][k];
	}
	int m,n,flag=0,or[100];
	for(l=0;l<roco;l++)
	{
		or[l]=l;
	}
	for(m=0;m<roco;m++)
	{
		for (n=0;n<roco;n++)
		{
			if (n!=or[m])
			{
				if (mat[m][n]==0)
				flag+=1;
			}
		}
	}
	if (flag=(roco*roco)-roco)
	{
		if (count==roco)
		printf("%d",sum);
	}
	else//if (count!=roco)
	printf("Not diagonal matrix");
	return 0;
}
