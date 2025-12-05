/* Q83: Count vowels and consonants */
#include <stdio.h>

int main(){
    char s[200];
    scanf("%[^\n]",s);

    int v=0,c=0;

    for(int i=0;s[i];i++){
        char x=s[i];
        if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){
            char y=x|32;
            if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u'){
                v++;
            }else{
                c++;
            }
        }
    }

    printf("%d %d",v,c);
}
