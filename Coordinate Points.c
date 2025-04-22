#include<stdio.h>
int main(){
int x,y;
printf("The Co-ordinate points are=");
scanf("%d%d", &x,&y);
if(x>0 && y>0){
    printf("1st Quadrant");
}
else if(x<0 && y>0){
    printf("2nd Quadrant");
}
else if (x<0 && y<0){
    printf("3rd Quadrant");
}
else if (x>0 && y<0){
    printf("4th Quadrant");
}
else if (x==0 && y==0){
    printf("Origin Point");
}
else if (x==0){
    printf ("The point lies in Y-axis");
}
else if (y==0){
    printf ("The point lies in X-axis");
}
return 0;
}













