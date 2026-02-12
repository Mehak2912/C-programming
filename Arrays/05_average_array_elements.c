//average array elements
#include<stdio.h>
int main(){
    int n,arr[100];
    float sum=0,avg;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("average:%2.f\n",avg);
    return 0;
}
