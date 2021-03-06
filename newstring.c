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
    while(*str++){
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
    while(*dest){
        dest++;
    }
    for (int i = 0; i < n; i++){
        dest[i] = source[i];
    }
    return dest;
}


char * new_strcat( char *dest, char *source ){
    return new_strncat(dest, source, new_strlen(source));
}

int new_strcmp( char *s1, char *s2 ){
    while(*s1 && (*s1==*s2)){
        s1++,s2++;
    }
    return *s1-*s2;
}

char * new_strchr( char *s, char c ){
    while(*s++){
        if (*s == c){
            return s;
        }
    }
    return NULL;
}

char *new_strstr( char *s1, char *s2 ){
    for (int i = 0; i < new_strlen(s1) - new_strlen(s2) + 1; i++){
        int boo = 1;
        char * current = s1 + i;
        for (int j = 0; j < new_strlen(s2) - 1; j++){
            boo &= !new_strcmp(current + j,s2 + j);
        }
        if (boo){
            return s1 + i;
        }
    }
    return NULL;
}

