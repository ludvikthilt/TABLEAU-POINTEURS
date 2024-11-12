#ifndef __BASIC__
    #define __BASIC__

    int longueur (const char *chaine);

    void copy (char *dest , const char *source);

    void concatenate (char *dest , const char *source);

    int compare (const char *chaine1 , const char *chaine2 );

    char *cherche_char (const char *chaine, char caractere);

    void inverse (char *chaine);

    void to_upper(char *chaine);

    void to_lower(char *chaine);

    char *cherche_mot(const char *phrase, const char *mot);
#endif