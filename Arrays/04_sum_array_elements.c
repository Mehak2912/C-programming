// sum array elements

#include<stdio.h>
int main(){
    int n,sum=0,arr[100];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum:%d\n",sum);
    return 0;
}
