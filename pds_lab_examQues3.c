#include<stdio.h>
#include<math.h>
int main()  {
 float r, x,y,x1,y1,dist,distsqr;
 printf("enter radius of circle");
 scanf("%f", &r);
 printf("enter x coordinate of centre:");
 scanf("%f",&x);
 printf("enter y coordinate of centre:" );
 scanf("%f", &y);
 printf("enter x1:");
 scanf("%f", &x1);
 printf("enter y1:");
 scanf("%f", &y1);

 distsqr=(x-x1)*(x-x1)+(y-y1)*(y-y1);
 dist=pow (distsqr, 0.5);
 if(dist==r)

 printf("point is on circle");

 else if(dist>r)
 printf("point is outside the circle");


 else printf("point is inside the circle ");









return 0;

}