#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(void)
{

	
	float x1,y1,x2,y2,x3,y3, x4,y4,phi,m1,m2,delX,delY,del;
	
	printf("\n\n Upper Points \n");	

	printf("\nX1:");
	scanf("%f",&x1);
	printf("\nY1:");
	scanf("%f",&y1);

	printf("\nX2:");
	scanf("%f",&x2);
	printf("\nY2:");
	scanf("%f",&y2);

	printf("\n\n Lower Point \n");
	printf("\nX3:");
	scanf("%f",&x3);
	printf("\nY3:");
	scanf("%f",&y3);


	//Test Values

	/*x1=6;
	y1=29;

	x2=38;
	y2=11;
	
	x3=10;
	y3=12.2;*/


	//Test Values 2

	/*x1=3;
	y1=4;

	x2=7;
	y2=6;
	
	x3=1;
	y3=1;*/

	

	m2=(y2-y1)/(x2-x1);
	m1=-1/m2; //Since the line is perpendicular
	
	del=-m1+m2;
	
	delX=(-m1*x1)+(m2*x3)+y1-y3;
	
	delY=(-m1*y3)+(m1*m2*x3)+(m2*y1)-(m1*m2*x1);

	x4=delX/del;
	y4=delY/del;

	

	printf("\n\nThird Corner X=%f \t Y=%f", x4,y4);


	

	
	//Finally, the centroid

	x4=(x4+x2)/2;
	y4=(y4+y2)/2;

	printf("\n\nCentroid X=%f \t Y=%f",x4,y4);


}

	

	
