#include <stdio.h>

#define PI 3.14159

int main() {

            int r;

            float CV, DT;

            printf("Nhap ban kinh r:");

            scanf("%d", &r);

            CV = 2*PI*r;

            DT = PI*r*r;

            printf("Chu vi hinh tron : %f\n", CV );

            printf("Dien tich hinh tron : %f", DT );

            return 0;

}
