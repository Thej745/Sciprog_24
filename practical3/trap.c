#include<stdio.h>
#include<math.h>
int main()
{
    int N=12;
    int a=0;
    int b=60;
    float b_rad;
    b_rad = (M_PI*b)/180;
    float sum = tan(a) + tan(b_rad);
    int i;
    for( i=5 ; i<60 ; i=i+5 ){
        sum+=2*tan((i*M_PI/180));
    }

    sum = (((b_rad-a)/(2*N))) * sum;
    printf("The final value of the sum is: %f\n",sum);
    printf("The actual value is: %f\n",logf(2));
    float abs_diff = fabs(sum-logf(2));
    float rel_diff = fabs((1-sum/logf(2)));
    printf("abs_diff is: %f, rel-diff is: %f",abs_diff,rel_diff);
    return 0;
}
