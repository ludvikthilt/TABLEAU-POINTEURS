#include <iostream>
#include "basic.h"

int longueur (const char *chaine){
    int i = 0;
    while(chaine[i] != '\0'){
        i++;
    }  
    return  i  ;
}

void copy (char *dest , const char *source){
    for(int i = 0; i < longueur(source) + 1; i++){
        dest[i] = source[i] ; 
    }
}

void concatenate (char *dest , const char *source){
    for(int i = longueur(dest), j= 0 ; j <= longueur(source); j++, i++){
        dest[i] = source[j];
    }
}

int compare (const char *chaine1 , const char *chaine2 ){
   int i = 0;
   while(chaine1[i] != '\0' && chaine2[i] != '\0'){
        if(chaine1[i] > chaine2[i]){
            return 1;
        }else if(chaine1[i] < chaine2[i]){
            return -1;
        }
        i++;
    }
    return longueur(chaine1) - longueur(chaine2);
}

char *cherche_char (const char *chaine, char caractere){
    const char *car_ptr = chaine;
    while(*car_ptr != '\0'){
        if(*car_ptr == caractere){
            return const_cast<char *>(car_ptr) ;
        }
        car_ptr++;
    }
    return NULL;
}

void inverse (char *chaine){
    int i = 0;
    int j = longueur(chaine) - 1;
    char inter;
    while( i <= j){
        inter = chaine[i] ;
        chaine[i] = chaine[j];
        chaine[j] = inter ;
        i++;
        j--;
    }
    chaine[longueur(chaine)] = '\0';
}

void to_upper(char *chaine){
    int i = 0;
    while( chaine[i] != '\0'){
        if(chaine[i] >= 'a' && chaine[i] <= 'z'){
            chaine[i] -= ('a' - 'A');
        }
        i++;
    }
}

void to_lower(char *chaine){
    int i = 0;
    while(chaine[i] != '\0'){
        if(chaine[i] >= 'A' && chaine[i] <= 'Z'){
            chaine[i] += ('a' - 'A');
        }
        i++;
    }
}

char *cherche_mot(const char *phrase, const char *mot){
    int i = 0;
    while(phrase[i] != '\0'){
        if(phrase[i] == *mot){
            int j = 1;
            while(mot[j] != '\0' && phrase[i + j] != '\0' && phrase[i + j] == mot[j] && phrase[i + j] != ' '){
                j++;
            }
            if( j == longueur(mot) ){
                return (char*)&phrase[i];
            }   
        } 
        i++;
    }
    return NULL;
} 



