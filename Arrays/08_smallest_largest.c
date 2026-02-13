//array smallest element and largest element

#include<stdio.h>
int main(){
    int n,min,max,arr[100];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("smallest:%d\n",min);
    printf("largest:%d\n",max);
    return 0;
}
