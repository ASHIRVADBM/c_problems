#include "header.h"

void lowercase(char *str){
    int i=0;
    while (str[i]!='\0'){
        if (str[i]>='A' && str[i]<='z'){
            str[i]=str[i]+32;
        }
        i++;
    }
}
