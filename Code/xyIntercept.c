#include<stdio.h>
#include<stdlib.h>

void main(void)
{

	float x[4],y[4], m1,m2,del, delX, delY, xin,yin;

	int i;

	printf("\n\n\n");

	printf("Co-Ordinates for Lines (Works in decimal also)");


	for(i=0;i<4;i++)
	{

		printf("\nx(%d):",i+1);
		scanf("%f",&x[i]);

		printf("\ny(%d):",i+1);
		scanf("%f",&y[i]);
	}

	
	m1=(y[1]-y[0])/(x[1]-x[0]);
	m2=(y[3]-y[2])/(x[3]-x[2]);
	
	del= -m1+m2;

	delX=(-m1*x[0])+(m2*x[2])+y[0]-y[2];
	
	delY=(-m1*y[2])+(m1*m2*x[2])+(m2*y[0])-(m1*m2*x[0]);

	
	
	xin= delX/del;
	yin=delY/del;

	printf("\n\nXintercept = %f \t Yintercept=%f",xin,yin);	


}

