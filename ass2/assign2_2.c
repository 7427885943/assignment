#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;      
	float D;           
	printf("Enter the coordinates of the first point=");
	scanf("%d %d",&a,&b);
	printf("Enter the coordinates of the second point=");
	scanf("%d %d",&c,&d);
	D=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	printf("Distance between the two points= %f",D);
}



