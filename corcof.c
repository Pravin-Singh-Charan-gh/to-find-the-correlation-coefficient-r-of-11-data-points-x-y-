//to find the correlation coefficeint r on the 11 data points(x,y)
#include <stdio.h>
#include <math.h>
void main(){
    float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.17,55.15};
    float y[11]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
    float sumxy=0,sumx=0,sumy=0,sumx2=0,sumy2=0;
    for(int i=0;i<11;i++){
        sumxy+=x[i]*y[i];
        sumx+=x[i];
        sumy+=y[i];
        sumx2+=x[i]*x[i];
        sumy2+=y[i]*y[i];
    }
    float r=(sumxy-sumx*sumy)/sqrt((11*sumx2-pow(sumx,2.0))*(11*sumy2-pow(sumy,0.2)));
    printf("Correlation Coefficient r=%.3f\n",r);
}
