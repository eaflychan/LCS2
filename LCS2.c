#include "string.h"
#include "stdio.h"
int x,y;
char out[100][100]={0};
char out2[10][2]={0};
char S1[100]={0};//列
char S2[100]={0};//行	

int main()
{
	int i,j,max=0,s,num=1,c,m;
	printf("输入S1:");
	scanf("%s",S1);
	printf("输入S2:");
	scanf("%s",S2);
	x=strlen(S1);
	y=strlen(S2);
	printf("x = %d,y = %d\n",x,y);
	c=(x>y)?y:x;
	printf("c = %d\n",c);
	
	for(i=1;i<x+1;i++)
	{
		for(j=1;j<y+1;j++)
		{
			if(S1[i-1]==S2[j-1])
				out[i][j]=out[i-1][j-1]+1;			
			else
				out[i][j]=0;
				printf("  %d",out[i][j]);
		}	
		printf("\n");
	}

	for(i=x+1;i>0;i--)
	{
		for(j=y+1;j>0;j--)
		{
			if(out[i][j]>=max)
			{
				if(out[i][j]==max)
				{
					num++;
					out2[num][1]=i;
					out2[num][2]=j;
				}
				else
				{
					max=out[i][j];
					num=1;
					out2[num][1]=i;
					out2[num][2]=j;
				}
			}
		}
	}
	printf("max=%d  num=%d\n",max,num);

	for(s=num;s>0;s--)
		{
			printf("L%d: ",num-s+1);
			for(m=out2[s][1]-max;m<out2[s][1];m++)
			printf("%c",S1[m]);
			printf("\n");
		}
		
	
//	printf("side=%d ",out2[1][1]);
//	printf("%d \n",out2[1][2]);
//	printf("side=%d ",out2[2][1]);
//	printf("%d \n",out2[2][2]);
//	printf("side=%d ",out2[3][1]);
//	printf("%d \n",out2[3][2]);
//	printf("side=%d ",out2[4][1]);
//	printf("%d \n",out2[4][2]);
//	printf("side=%d ",out2[5][1]);
//	printf("%d \n",out2[5][2]);

}

