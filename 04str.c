#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "newstring.h"

int main(){

    //Testing strlen()
    char len0[10] = "";
    char len1[10] = "a";
    char len2[30] = "abcdefg";
    char len3[] = "abc";

    //original: <OUTPUT> new: <OUTPUt>
    printf("\nComparing strlen():\n");
    printf("Test: %s - original: %lu, new: %d\n", len0,strlen(len0),new_strlen(len0));
    printf("Test: %s - original: %lu, new: %d\n", len1,strlen(len1),new_strlen(len1));
    printf("Test: %s - original: %lu, new: %d\n", len2,strlen(len2),new_strlen(len2));
    printf("Test: %s - original: %lu, new: %d\n\n", len3,strlen(len3),new_strlen(len3));

        

    //Testing strcpy()/strncpy()
    char cpy0[10] = "abcd11";
    char cpy1[10] = "abcd11";
    char cpy2[10] = "hello";
    char cpy3[10] = "hello";
    char cpy4[10] = "efgk";
    char cpy5[10] = "efgk";
    char cpy6[10] = "hij";
    char cpy7[10] = "hij";

    ////original: [<OUTPUT>] new: [<OUTPUt>] 
    printf("Comparing strcpy:\n");
    strcpy(cpy2,cpy0);
    new_strcpy(cpy3,cpy1);
    printf("strcpy: hello, abcd11 - original: [%s], new: [%s]\n",cpy2,cpy3);
    printf("Comparing strncpy:\n");
    strncpy(cpy4,cpy6,2);
    new_strncpy(cpy5,cpy7,2);
    printf("strncpy: efgk, hij, 2chars - original: [%s], new: [%s]\n\n",cpy4,cpy5);



    //Testing strcat()/strncat()
    char container[50];
    strcpy(container,"START: ");

    char cat0[] = "123";
    char cat1[] = "456";
    char cat2[] = "789";
    char cat3[] = "0:=";

    
    //original: [<OUTPUT>] new: [<OUTPUt>] 
    printf("strcat()/strncat() to %s\n",container);
    printf("Comparing strcat:\n");
    strcat(container, cat0);
    printf("original: %s -[ %s ]\n", cat0,container);
    new_strcat(container, cat1);
    printf("new_strcat: %s - [ %s ]\n", cat1,container); 

    printf("Comparing strncat:\n");
    strncat(container, cat2, 2);
    printf("original (2chars): %s -[ %s ]\n", cat2,container);
    new_strncat(container, cat3, 2);
    printf("new_strncat (2chars): %s - [ %s ]\n\n", cat3,container); 
    
    //Testing strcmp()
    char cmp0[10] = "computer"; 
    char cmp1[10] = "computer";
    char cmp2[10] = "COMPUTER";
    char cmp4[10] = "hello";

    //original: <OUTPUT> new: <OUTPUt>
    printf("Comparing strcmp():\n");
    printf("%s, %s - original: %d, new: %d\n",cmp0,cmp1,strcmp(cmp0,cmp1),new_strcmp(cmp0,cmp1));
    printf("%s, %s - original: %d, new: %d\n",cmp0,cmp2,strcmp(cmp0,cmp2),new_strcmp(cmp0,cmp2));
    printf("%s, %s - original: %d, new: %d\n\n",cmp2,cmp4,strcmp(cmp2,cmp4),new_strcmp(cmp2,cmp4));


     //Testing strchr()
     char word[] = "textbooks";
     char letter = 'x';
     char not_letter = '5';
     printf("Comparing strchr()/new_strchr():\n");
     printf("%s, %c - original: %p, new: %p\n",word,letter,strchr(word,letter),new_strchr(word,letter));
     printf("%s, %c - original: %p, new: %p\n\n",word,not_letter,strchr(word,not_letter),new_strchr(word,not_letter));

    //Testing strstr()
    char * hey = "books";
    char * dude = "hi";
    printf("Comparing strstr()/new_strstr():\n");
    printf("%s, %s - original: %s, new: %s\n",word,hey,strstr(word,hey),new_strstr(word,hey));
    printf("%s, %s - original: %s, new: %s\n\n",word,dude,strstr(word,dude),new_strstr(word,dude));
}
