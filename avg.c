#include <math.h>
#include <stdio.h>
//first commit

int main()
{
float num[10], sum = 0.0, mean, standardDeviation = 0.0;
int i;

for (i = 0; i < 10; ++i)
{
printf("Enter number %d: ", i+1);
scanf("%f",&num[i]);
sum += num[i];
}

mean = sum/10;

for (i = 0; i < 10; ++i)
standardDeviation += pow(num[i] - mean, 2);

printf("Mean = %f ", mean);
printf("\nStandard Deviation = %f ", sqrt(standardDeviation/10));

return 0;
}
