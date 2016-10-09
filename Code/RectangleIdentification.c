#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(void)
{

	
	float x1,y1,x2,y2,x3,y3,height, x4,y4, refAngle,theta, distance;
	
	/*printf("\n\n Upper Points \n");	

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
	scanf("%f",&y3);*/

	x1=6;
	y1=29;

	x2=38;
	y2=11;
	
	x3=10;
	y3=12.2;

	refAngle=atanf(fabsf((y2-y1)/(x2-x1))); //Reference Line is skewed

	if(y2<y1)
	{
		refAngle=-refAngle;
	}

	printf("\n refAngle= %f",refAngle);
	
	theta=atanf(fabsf((y1-y3)/(x1-x3)));
	printf("\n Theta1 = %f",theta);
	theta=theta+refAngle; //The line is relative to skewed line
	printf("\n Theta2 = %f",theta);
	distance=pow((x1-x3),2)+pow((y1-y3),2);
	distance=pow(distance,0.5);

	printf("\n Distance = %f",distance);

	

	height=distance*sinf(theta);

	printf("\n Height = %f",height);

	//With the height, the other corner of the Rectangle is

	theta=(M_PI/2)+refAngle;

	printf("\n Theta = %f",theta);

	x4=x1-(height*cosf(theta));
	y4=y1-(height*sinf(theta));

	printf("The Rectangle Corner is X:%f \t Y:%f\n\n",x4,y4);

	//Finally, the centroid

	x4=(x4+x2)/2;
	y4=(y4+y2)/2;

	printf("\nCentroid X=%f \t Y=%f", x4,y4);


}

	

	
