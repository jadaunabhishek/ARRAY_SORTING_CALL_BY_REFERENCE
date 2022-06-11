#include<stdio.h>
void sort(int n,int *arr){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(arr+j)<*(arr+i)){
                int temp;
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements one by one\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}
