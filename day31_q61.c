// Q61: Search for an element in an array using linear search.

#include<stdio.h>
int main(){
    int n,num;
    int flag=0;
    printf("enter no of elements");
    scanf("%d", &n);
    int array[n];
    printf("enter element to be searched");
    scanf("%d", &num);
    for (int i=0; i<n; i++){
        printf("enter element %d-", i+1);
        scanf("%d", &array[i]);
    }
    for (int i=0; i<n; i++){
        if (array[i]==num){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if (flag==0){
        printf("not found");
    }
    else{
        printf("found");
    }
    return 0;
}