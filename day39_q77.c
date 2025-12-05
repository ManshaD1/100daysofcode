/* Q77: Check if diagonal elements are distinct */
#include <stdio.h>

int main(){
    int n,f=1;
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][i]==a[j][j]){
                f=0;
            }
        }
    }

    printf(f?"YES":"NO");
}
