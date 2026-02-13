//array largest element

#include<stdio.h>
int main(){
    int n,max,arr[100];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("largest:%d\n",max);
    return 0;
}
