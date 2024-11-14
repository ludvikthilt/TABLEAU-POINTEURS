#include <iostream>
#include "basic.h"
#include "advanced.h"
#include "pendu.h"

using namespace std;




void pendu(){
    string MotDevine ;
    string ChaineVide ;
    char caractere ;
    int tentative = 6 ;
    int erreur = 0 ;
    int level;
    cout << "Entrer le niveau de difficulte \n"
         << "1-Easy\n2-Medium\n3-Hard : ";
    cin  >> level ; 
    if(level == 1){
        MotDevine = {"TEST"};
        ChaineVide = "____";
    }else if(level ==2){
        MotDevine = {"PROGRAMMATION"};
        ChaineVide = "_____________";
    }else if(level == 3){
        MotDevine = {"SHINGEKINOKYOJIN"};
        ChaineVide = "________________";
    }else if(level != 3 && level != 2 && level != 1){
        MotDevine = {"THILT"};
        ChaineVide = "_____";
    }
        
    while(tentative > 0 && MotDevine != ChaineVide){
        int find = 0;
        afficher_pendu(erreur);
        cout<<""<<endl;
        cout<< ChaineVide <<endl;
        cout<<""<<endl;
        cout <<"Vous avez "<<tentative<<" tentatives restantes"<<endl;
        cout<<""<<endl;
        cout<< "Entrez votre lettre : ";
        cin>>caractere;
        for(int i = 0; i < longueur(MotDevine.c_str()); i++){
            if(MotDevine[i] == caractere){
                ChaineVide[i] = MotDevine[i];
                find = 1;
            }
        }
            
            
        if(find == 0){
            tentative = tentative - 1;
            erreur = erreur + 1;
        }
    
    }   
    afficher_pendu(erreur);
    cout<<""<<endl;
    cout<< ChaineVide<<endl;

    if(MotDevine == ChaineVide){
        cout<<""<<endl;
        cout << "VICTOIRE"<< endl;
    }else{
        cout<<""<<endl;
        cout<<"PERDU"<<endl;
        cout<<"le mot a deviner etait : "<< MotDevine <<endl;
        cout<<""<<endl;
    }

}

void afficher_pendu(int erreur){
    clear();
    
    cout<<"________________"<<endl;
    cout<<"|              |"<<endl;
    if(erreur >= 1){
        cout<<"|              |"<<endl;
    }
    if(erreur >= 2){
        cout<<"|              0"<<endl;
    }
    if(erreur >= 3){
        cout<<"|             /|\\"<<endl;
    }
    if(erreur >= 4){
        cout<<"|            / | \\"<<endl;
    }
    if(erreur >= 5){
        cout<<"|              |"<<endl;
    }
    if(erreur >= 6){
        cout<<"|             / \\"<<endl;
        cout<<"|            /   \\"<<endl;
        cout<<"|               "<<endl;
        cout<<"----------------"<<endl;
    }
}

void clear(){
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}




