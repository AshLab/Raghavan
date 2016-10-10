#include<stdio.h>
#include<math.h>

void main(void)
{

	float angle, radius,x0,y0,x1,y1,x_diff,y_diff, rot_angle, x2,y2;

	printf("\n\n\nReference Point (Enter (0,0) for origin)");
	
	printf("\n X0: ");
	scanf("%f",&x0);
	

	printf("\n Y0: ");
	scanf("%f",&y0);

	printf("\n\nEnter the co-ordinates");

	printf("\n X1: ");
	scanf("%f",&x1);
	

	printf("\n Y1: ");
	scanf("%f",&y1);

	printf("\n\n Rotation Angle(in degrees): ");
	scanf("%f",&rot_angle);

	rot_angle=(rot_angle*M_PI)/180; //Converting degrees to radians, 

	//M_PI is the PI constant declared in math.h. If you just use 3.14 for PI, you will lose the accuracy
	 

	x_diff=fabs(x1-x0);
	y_diff=fabs(y1-y0);

	radius= pow(pow(x_diff,2)+pow(y_diff,2),0.5);
	
	angle= atan(y_diff/x_diff);

	if(x1<0&&y1>=0)
	{
		angle=M_PI-angle;
	}

	
	if(x1<0&&y1<0)
	{
		angle=M_PI+angle;
	}

	if(x1>=0&&y1<0)
	{
		angle=-angle;
	}

	
	


	x2=(radius*cos(rot_angle+angle))+x0;

	y2= (radius*sin(rot_angle+angle))+y0;


	printf("\n\n\n Co-Ordinates after rotation : x= %f , y=%f\n\n", x2,y2);

} 
	

	
	



			
