#include <stdio.h>
int So_lon_nhat_la ();
 
int main() {

int m,n,l;

printf("Nhap 3 so bat ki tu ban phim : \n");
printf("m : ");
scanf("%d", &m);
printf("n : ");
scanf("%d", &n);
printf("l : ");
scanf("%d", &l);

if(m<n && n<l){
printf("So lon nhat %d",l);}
if(m<l && l<n){
printf("So lon nhat %d",n);}
if(n<l && l<m)
{printf("So lon nhat %d",m);}
  return 0;
}
int So_lon_nhat_la (){
	return 0; 
}
