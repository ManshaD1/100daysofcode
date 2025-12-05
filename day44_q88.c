/* Q88: Replace all spaces with '-' */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    for(int i=0;s[i];i++){
        if(s[i]==' '){
            s[i]='-';
        }
    }

    printf("%s",s);
}
