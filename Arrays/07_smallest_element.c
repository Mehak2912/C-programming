//array smallest element

#include<stdio.h>
int main(){
    int n,min,arr[100];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("smallest:%d\n",min);
    return 0;
}
