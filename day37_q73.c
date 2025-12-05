/* Q73: For each row of the matrix, store sum in an array */
#include <stdio.h>

int main(){
    int r,c;
    scanf("%d%d",&r,&c);

    int a[r][c],b[r];

    for(int i=0;i<r;i++){
        int s=0;
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
        b[i]=s;
    }

    for(int i=0;i<r;i++){
        printf("%d ",b[i]);
    }
}
