#include "Fonction.h"
#define VAL_TP_EX4 10
#include "stdio.h"

 void exercice1(){
     int entier1 = 0;
     int entier2 = 0;
     printf( "Saisir le premier entier : ");
     scanf( "%d", &entier1);
     printf( "Saisir le second entier : ");
     scanf("%d", &entier2 );
     printf("Le plus grand des entier est : %d ", getMax( entier1, entier2 ));

     return;
}

 void exercice2(){

    int entier = 0;
    entier = saisirEntier();
    return;

}

void exercice3(){
    int longueur = saisirEntier();
    int largeur = saisirEntier();
    int aire = calculAire(longueur, largeur);
    int perimetre = calculPerimetre( longueur,largeur );

    printf("aire : %d\n ", aire );
    printf("perimetre : %d", perimetre );
    return;
}

void exercice4(){
    int entier = saisirEntier();
    int reponse_avec_comparaison_a_3 = premierMultipleduDeuxieme(entier, 3 );

    printf( "%d \n " , reponse_avec_comparaison_a_3);
    (entier < VAL_TP_EX4) ? printf( "L'entier n'est pas superieur ou egal a VAL_TP_EX4") : printf ("L'entier est superieur ou egal a VAL_TP_EX4");
    return;
}

void exercice5(){
    int note1 = saisirEntier();
    int note2 = saisirEntier();
    int note3 = saisirEntier();
    int moy = moyenne_de_trois_notes(note1,note2,note3);
    printf( "La moyenne est : %d", moy );

    return;
}