//array input output

#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
