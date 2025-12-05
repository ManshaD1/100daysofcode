/* Q78: Sum of main diagonal */
#include <stdio.h>

int main(){
    int n,s=0;
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                s+=a[i][j];
            }
        }
    }

    printf("%d",s);
}
