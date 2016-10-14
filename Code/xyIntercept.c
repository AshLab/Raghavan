#include<stdio.h>
#include<stdlib.h>

void main(void)
{

	float x[4],y[4],detX,detY,dx1,dy1,dx2,dy2,S1,S2, xin=-1,yin=-1,det;

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

	dx1=x[1]-x[0];
	dy1=y[1]-y[0];

	dx2=x[3]-x[2];
	dy2=y[3]-y[2];

	S1=(dx1*y[0])-(dy1*x[0]);
	S2=(dx2*y[2])-(dy2*x[2]);
	
	detX=(S1*dx2)-(S2*dx1);
	detY=(-S2*dy1)+(S1*dy2);
	det=(-dy1*dx2)+(dx1*dy2);
	
	if(det==0)
	{
		printf("\nThe Lines will never intersect or they are the same");
	}

	else
	{
		xin= detX/det;
		yin=detY/det;
	}

	//prints neagtive values if the line won't intersect or there infinity such points

	printf("\n\nXintercept = %f \t Yintercept=%f",xin,yin);	


}

