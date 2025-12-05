/* Q113: Check if array is sorted in ascending order */
#include <stdio.h>

int main(){
    int n,f=1;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            f=0;
        }
    }

    printf(f?"YES":"NO");
}
