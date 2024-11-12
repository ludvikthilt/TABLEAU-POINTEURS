#include <iostream>
#include "../header/advanced.h"

void sous_chaine(const char *source, char *dest, int debut, int longueur){ 
    int i = 0;
    int j = debut;
    while(j < debut + longueur){
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

void supprime_caractere(char *chaine, char caractere){
    int i = 0 ;
    int j = 0 ;
    while(chaine[i] != '\0'){
        if(chaine[i] != caractere){
            chaine[j] = chaine[i];
            j++;
        }
        i++;
    }
    chaine[j] = '\0';
}

int compte_mots(const char *phrase){
    int i = 0;
    int compteur =  0;
    char espace  = ' ';
    while (phrase[i] != '\0'){
       if(phrase[i] == espace  && phrase[i - 1] != espace){
            compteur++;
       }
       i++;
    }
    return compteur+1;
}