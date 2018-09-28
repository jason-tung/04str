//
// Created by Jason Tung on 9/27/18.
//

#include <stdio.h>

//strlen [ int strlen( char * ) ]
//strcpy/strncpy (choose one)  [ char * strcpy( char *dest, char *source )  char * strncpy( char *dest, char *source, int n)  ]
//strcat/strncat (choose one)  [ char * strcat( char *dest, char *source )  char * strncat( char *dest, char *source, int n)  ]
//strcmp  [ int strcmp( char *s1, char *s2 ) ]
//Your version does not need to return the same exact value as the system version, as long as it returns -, + or 0 when it should.
//strchr  [ char * strchr( char *s, char c ) ]


int strlen(char * str){
    int tot = 0;
    while(str++){
        tot++;
    }
    return tot;
}

char * strncpy(char * dest, char * src, int n){
    for (int i = 0; i < n; i++){
        dest[i] = src[i];
    }
}

char * strcpy(char * dest, char * src) {
    return strncpy(dest, src, strlen(src));
}

char * strncat( char *dest, char *source, n){
    while(dest++){
    }
    for (int i = 0; i < n; i++){
        dest[i] = source[i];
    }
}

char * strcat( char *dest, char *source ){
    strncpy(*dest, *source, strlen(source));
}

int strcmp( char *s1, char *s2 ){
    
}

int main(){
    printf("jjjjjjj");
    return 0;
}