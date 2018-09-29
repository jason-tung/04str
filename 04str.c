#include<stdio.h>
#include<string.h>
#include ""

int main(){

    //Testing strlen()
    char len0[10] = "";
    char len1[10] = "a";
    char len2[30] = "abcdefg";
    char len3[] = "abc";

    //original: <OUTPUT> new: <OUTPUt>
    printf("Comparing strlen():\n");
    printf("Test: %s - original: %lu, new: %lu\n", len0,strlen(len0),strlen(len0));
    printf("Test: %s - original: %lu, new: %lu\n", len0,strlen(len1),strlen(len1));
    printf("Test: %s - original: %lu, new: %lu\n", len0,strlen(len2),strlen(len2));
    printf("Test: %s - original: %lu, new: %lu\n", len0,strlen(len3),strlen(len3));
        

    //Testing strcpy()/strncpy()
    char cpy0[10] = "";
    char cpy1[10] = "abcd";
    char cpy2[10] = "abcdefg";
    char cpy3[] = "hello";

    ////original: [<OUTPUT>] new: [<OUTPUt>] 
    printf("Comparing strcpy:\n");
    printf("Test: %s - original: %lu, new: %lu\n", len0,strlen(len0),strlen(len0));

}
