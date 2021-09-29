#include "stdio.h"
    int getMax( int entier1, int entier2){ // renvoie le maximum des deux parametres
        return ( entier1 <= entier2 ) ? entier2 : entier1;
    }
    int saisirEntier(){ //demande a l'utilisateur de saisir un entier et le renvoie en sortie
        int entierr = 0;
        printf( "Saisir un entier : ");
        scanf( "%d", &entierr);

        return entierr;
    }

    int calculAire ( int longueur, int largeur ){
        return largeur*longueur;
}
    int calculPerimetre ( int longueur, int largeur ){
        return 2 * (longueur + largeur );
}
    int premierMultipleduDeuxieme(int entier1, int entier2 ){ // cette fonction indique si le premier nombre est multiple du second ou non
        return (entier1 % entier2 ==0) ? 1 : 0;

}
    int moyenne_de_trois_notes (int note1 , int note2 , int note3 ){ // cette fontion renvoie la moyenne de 3 notes donnees en parametre mais -1 si l'une d'elle nest pas conforme
        return ( 0<=note1 && 0<=note2 && 0<=note3 && note1 <= 20 && note2 <= 20 && note3 <= 20) ? (note1 + note2 + note3)/3 : -1;

}