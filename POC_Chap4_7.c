/*
RuizeZ
4/22/2020
Write a function that removes excess white space from a string of characters. The
function should have this prototype:
void deblank( char string[] );
Every run of one or more white space characters should be replaced by one space
character. Be sure that the string is terminated with a NUL byte when youȇre through
with it!
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void deblank( char string[] );
int main(void){
    char sre[100];
    printf("Inter the string: ");
    gets(sre);
    printf("length is: %ld\n",strlen(sre));
    deblank(sre);
}
void deblank( char sre[] ){
    char newsre[100] = "";
    for(int i = 0, j = 0; i<strlen(sre); i++, j++){
        if((isspace(sre[i]) != 0)){
            newsre[j] = sre[i];
            i++;
            while(i<strlen(sre)){
                if ((isspace(sre[i]) == 0)){
                    j++;
                    newsre[j] = sre[i];
                    break;
                }
                i++;
            }
        }
        else{
            newsre[j] = sre[i];
        }
    }
    // newsre[strlen(newsre)] = '\0';
    printf("New string is: %s\n",newsre);  
}