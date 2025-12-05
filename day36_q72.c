/* Q72: Read a matrix and print the sum of all elements */

#include <stdio.h>
int main(){
    int r,c,s=0;
    scanf("%d%d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
    }

    printf("%d",s);
}
