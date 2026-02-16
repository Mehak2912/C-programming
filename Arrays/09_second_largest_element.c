//second largest element in an array

#include<stdio.h>
int main(){
    int max,second,n,arr[100];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    second=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max){
            second=arr[i];
        }
    }
    printf("the second largest element:%d",second);
    return 0;
}
