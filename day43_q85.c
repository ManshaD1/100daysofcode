/* Q85: Reverse a string */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    int i=0;
    while(s[i]){
        i++;
    }

    for(int j=i-1;j>=0;j--){
        printf("%c",s[j]);
    }
}
