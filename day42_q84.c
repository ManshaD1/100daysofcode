/* Q84: Convert lowercase letters to uppercase */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    for(int i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
    }

    printf("%s",s);
}
