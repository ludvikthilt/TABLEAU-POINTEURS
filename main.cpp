/*
Pointeur :  variable contenant l'adresses d'une autre variable

[VARIABLES]:
    maVariable      : valeur de la variable
    &maVariable     : adresse de la variable 
[POINTEURS]:
    monPointeur     : adresse de la variable pointée
    *monPointeur    : valeur de la var pointée
    &monPointeur    : adresse du pointeur

    déclaration : *monPointeur = null ou &maVariable

[TABLEAU]:
    tableau     : adresse du tableau
    *tableau    : premier element du tableau

un tableau est un pointeur qui pointe l'adresse du premier élément
une chaine de caractère est un tableau
 */

#include <iostream>
#include <string>
#include "../header/basic.h"
#include "../header/advanced.h"
#include "../header/pendu.h"

using namespace std;

int main(int argc, char** argv){

    int choix;
    bool start = 1;
    int nav;
    string input;
    while(start){
        clear();
        cout <<"\t\n\033[33mThiLT\033[0m"<<endl;
        cout << "\n\033[33m~~~~~~~~~~~~~\033[0m \033[33mBIENVENUE\tDANS\t >>>>>|\033[0m  STRING-OPERATION  \033[33m|<<<<< ~~~~~~~~~~~~~~~~~~~~\033[0m\n";
        cout << "\n\033[32m1 -          Longueur d'une chaine de caracteres\n\033[0m"
            << "\n\033[32m2  -         Copie d'une chaine de caracteres\n\033[0m"
            << "\n\033[32m3  -         Concatenation de deux chaines de caracteres\n\033[0m"
            << "\n\033[32m4  -         Comparaison de deux chaines de caracteres\n\033[0m"
            << "\n\033[32m5  -         Recherche d'un caractere dans une chaine de caractere\n\033[0m"
            << "\n\033[32m6  -         Inversion d'une chaine de caractere\n\033[0m"
            << "\n\033[32m7  -         Conversion des caracteres d'une chaine en majuscule/minuscule\n\033[0m"
            << "\n\033[32m8  -         Trouver un mot dans une phrase\n\033[0m"
            << "\n\033[32m9  -         Extraction de sous-chaine\n\033[0m"
            << "\n\033[32m10 -         Suppression d'un caractere dans une chaine de caractere\n\033[0m"
            << "\n\033[32m11 -         Compter les mots dans une phrase\n\033[0m"
            << "\n\033[32m12 -         Jouer au pendu\n\033[0m"<<endl;
        cout << "Votre choix=> ";
        cin >> choix;
    
        switch(choix){
            case 1 :{
                clear();
                cout << "\t Calcul de la longueur d'une chaine de caractere\n"<<endl;
                cout << "Entrez la chaine de caractere : " ;
                cin.ignore();
                getline(cin, input);
                cout << "La longueur de la chaine est de : \t" << longueur(input.c_str()) <<endl;
                cout<< "" <<endl;
                break;
            }
            case 2 :{
                clear();
                cout << "\t Copie d'une chaine de caratere\n"<<endl;
                cout << "Entre la chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                char dest[longueur(input.c_str())];
                copy(dest, input.c_str());
                cout << "La copie de la chaine de caractere est : \t" << dest <<endl;
                cout<< "" <<endl;
                break;
            }
            case 3 :{
                clear();
                string input2;
                cout << "\t Concatenation de deux chaines de caractere\n"<<endl;
                cout << "Entrez la 1ere chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                cout << "Entrez la 2eme chaine de caractere : ";
                getline(cin, input2);
                char dest[longueur(input.c_str()) + longueur(input2.c_str())];
                copy(dest, input.c_str());
                concatenate(dest, input2.c_str());
                cout << "\nLa chaine concatenee est : \t" << dest <<endl;
                cout<< "" <<endl;
                break;
            }
            case 4 :{
                clear();
                string input2;
                cout << "\t Comparaison lexicographique de deux chaines de caractere\n"<<endl;
                cout << "Entrez la 1ere chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                cout << "Entrez la 2eme chaine de caractere : ";
                getline(cin, input2);
                if(compare(input.c_str(), input2.c_str()) == 0){
                    cout << "il s'agit de la meme chaine de caractere"<<endl;
                }else if(compare(input.c_str(), input2.c_str()) > 0){
                    cout << input <<" est superieure a " << input2 << endl;
                }else if(compare(input.c_str(), input2.c_str()) < 0){
                    cout << input <<" est inferieure a " << input2 <<endl;
                }
                cout<< "" <<endl;
                break;
            }
            case 5 :{
                clear();
                char caractere;
                cout << "\t Recherche d'un caractere dans une chaine de caratere\n"<<endl;
                cout << "Entrez la chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                cout << "Entrez le caractere recherche : ";cin >> caractere;
                char *position  = cherche_char(input.c_str(), caractere);
                
                if(position != NULL){
                    cout << "L'adresse de la premiere occurence de " << caractere << " est : " << position <<endl;
                }else{
                    cout << "Caractere introuvable \n"<<endl;
                }
                cout<< "" <<endl;
                break;
            }
            case 6 :{
                clear();
                cout << "\t Inversion d'une chaine de caractere\n\n";
                cout << "Entrez la chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                char dest[longueur(input.c_str())];
                copy(dest, input.c_str());
                inverse(dest);
                cout << "\nL'inverse de la chaine est  : \t" << dest <<"\n";
                cout<< "" <<endl;
                break;
            }
            case 7 :{
                clear();
                cout << "\t Conversion MAJUSCULE/minuscule\n"<<endl;
                cout << "Entrez la chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                char dest[longueur(input.c_str())];
                copy(dest, input.c_str());
                int choice;
                cout << "Que voulez vous faire? : \t 1 - MAJUSCULE \t 2- minuscule \n"; cin >> choice;
                if(choice == 1){
                    to_upper(dest);
                }else
                if(choice == 2){
                    to_lower(dest);
                }
                cout << "La chaine transformee est : " << dest <<endl;
                cout<< "" <<endl;
                break;
            }
            case 8 :{
                clear();
                string input2;
                cout << "\t Recherche d'un mot dans une phrase\n"<<endl;
                cout << "Entrez la phrase : ";
                cin.ignore();
                getline(cin, input);
                cout << "Entrez le mot recherche : "; cin >> input2 ;
                char *position = cherche_mot(input.c_str(), input2.c_str());

                if(position != NULL){
                    cout << "L'adresse de la premiere occurence de " << input2 << " est : " << position <<"\n";
                }else{
                    cout << "Le mot n'est pas present dans la phrase\n";
                }
                cout<< "" <<endl;
                break;
            }
            case 9 :{
                clear();
                int longueur, indice;
                cout << "\t Extraction d'une sous-chaine\n"<<endl;
                cout << "Entrez la chaine : ";
                cin.ignore();
                getline(cin, input);
                cout << "Entrez la longueur de la sous chaine : ";cin >> longueur ;
                cout << "Entrez l'indice de debut de l'extraction : "; cin >> indice;
                char dest[longueur];
                sous_chaine(input.c_str(), dest, indice, longueur);
                cout << "La chaine extraite est :" << dest <<endl;
                cout<< "" <<endl;
                break;
            }
            case 10 :{
                clear();
                char caractere;
                cout << "\t Suppression d'un caractere\n"<<endl;
                cout << "Entrez la chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                cout << "Entrez le caractere a supprimer : ";cin >> caractere;
                char dest[longueur(input.c_str())];
                copy(dest, input.c_str()); 
                supprime_caractere(dest, caractere);
                cout << "la nouvelle chaine de caractere est : " << dest <<endl;
                cout<< "" <<endl;
                break;
            }
            case 11 :{
                clear();
                cout << "\t Compte d'un nombre de mot d'une phrase\n"<<endl;
                cout << "Entrez la chaine de caractere : ";
                cin.ignore();
                getline(cin, input);
                cout << "Le nombre de mots est de : " << compte_mots(input.c_str()) <<endl;
                cout<< "" <<endl;
                break;
            }
            case 12 :{
                clear();
                pendu();
                cout<<""<<endl;
                break;
            }
        }
    
        cout<< "1-Menu\n"
            << "2-Quitter\n";
        cout << "=>"; cin>>nav;
        if(nav != 1){
            start = 0;
        }
    }
    clear();
    return 0;
}



