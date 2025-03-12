#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int valid(char *str){
int len =strlen(str);
    char stack [len];
    int top =-1 ;
        for (int i=0 ; i<len ;i++){
            char ch=str[i];
            if(ch =='('||ch =='{'||ch =='[')
                stack[++top]=ch;
            else if (ch==')'||ch =='}'||ch==']'){
                if(top ==-1)
                    return 0;
                else if(ch==')'&&stack[top]!='(')
                    return 0;
                else if (ch =='}'&& stack[top]!='{')
                    return 0;
                else if (ch==']'&& stack[top]!='[')
                    return 0;
                else
                    top--;
                }
            }
    if(top==-1)
        return 1;
    else
        return 0;
}
        
int main() {
    char str[100];
    scanf("%s",str);
    int result =valid(str);
    if(result==1)
        printf("True");
    else
        printf("False");

       
    return 0;
}
