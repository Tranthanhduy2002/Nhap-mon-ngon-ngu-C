#include <stdio.h>
 

float a,b,c;
int So_lon_nhat();



int main() {
printf("Nhap 3 so : \n");
printf("a : ");
scanf("%f", &a);
printf("b : ");
scanf("%f", &b);
printf("C : ");
scanf("%f", &c);
So_lon_nhat();
  return 0;
}

int So_lon_nhat(){
if(a<c && b<c){
printf("%f",c);}
if(a<b && c<b){
printf("%f",b);}
if(b<c && c<a){
printf("%f",a);}
return 0;
}
