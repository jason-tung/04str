//
// Created by Jason Tung on 9/27/18.


#include <stdio.h>

//strlen [ int strlen( char * ) ]
//strcpy/strncpy (choose one)  [ char * strcpy( char *dest, char *source )  char * strncpy( char *dest, char *source, int n)  ]
//strcat/strncat (choose one)  [ char * strcat( char *dest, char *source )  char * strncat( char *dest, char *source, int n)  ]
//strcmp  [ int strcmp( char *s1, char *s2 ) ]
//Your version does not need to return the same exact value as the system version, as long as it returns -, + or 0 when it should.
//strchr  [ char * strchr( char *s, char c ) ]


int new_strlen(char * str){
    int tot = 0;
    while(str++){
        tot++;
    }
    return tot;
}

char * new_strncpy(char * dest, char * src, int n){
    for (int i = 0; i < n; i++){
        dest[i] = src[i];
    }
    return dest;
}

char * new_strcpy(char * dest, char * src) {
    return new_strncpy(dest, src, new_strlen(src));
}

char * new_strncat( char *dest, char *source, int n){
    while(dest++){
    }
    for (int i = 0; i < n; i++){
        dest[i] = source[i];
    }
    return dest;
}


char * new_strcat( char *dest, char *source ){
    return new_strncpy(dest, source, new_strlen(source));
}

int new_strcmp( char *s1, char *s2 ){
    while(*s1 && (*s1==*s2)){
        s1++,s2++;
    }
    return *s1-*s2;
}

char * new_strchr( char *s, char c ){
    while(*s!=c){
        s++;
    }
    return s;
}

int main(){
    char c = 'L';
    char t[] = "HELLO";
    printf("%c",*new_strchr(t,c));
    return 0;
}
