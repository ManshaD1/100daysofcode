/* Q87: Count spaces, digits and special characters */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    int sp=0,d=0,sc=0;

    for(int i=0;s[i];i++){
        if(s[i]==' '){
            sp++;
        }else if(s[i]>='0'&&s[i]<='9'){
            d++;
        }else{
            sc++;
        }
    }

    printf("%d %d %d",sp,d,sc);
}
