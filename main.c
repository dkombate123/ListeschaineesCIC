#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include"nombres.h"
// attention cette fonction c'est juste pour la couleur de la console et du texte
void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}


// fonctions de construction de la liste chainée
//nombre*liste=NULL;
Liste *initialisation()
{
          Liste*liste=malloc(sizeof(*liste));

          nombre *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre_valeur=20 ;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    nombre *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre_valeur = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}
void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nombre *courant = liste->premier;

    while (courant != NULL)
    {
        printf("%d -> ", courant->nombre_valeur);
        courant = courant->suivant;// passer a l'element suivant
    }
    printf("NULL\n");
}
int LongueurListe(Liste*liste)
{
           nombre *li = liste->premier;
          int compteur=0;
          while(li!=NULL)
          {
                    compteur++;
                    li=li->suivant;
          }
          return compteur;

}
void insertListeDebut(Liste*tete,int data)
{
          nombre*nouveau=malloc(sizeof(*nouveau));
          nouveau->nombre_valeur = data;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = tete->premier;
    tete->premier = nouveau;

}

void suppression(Liste *liste)

{
          int k=1;
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
//supression du premier element
    if (liste->premier != NULL )
    {
        nombre *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}
/*
void suppressionDernier(Liste*liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Liste*temp=liste;
    Liste*before=liste;

}*/
/*
int element_i(Liste* liste, int indice)

{
    int i;
    /* On se déplace de i cases, tant que c'est possible
    for(i=0; i<indice && liste != NULL; i++)
    {
              nombre*liste=liste->premier;
        liste = liste->suivant;
    }

    /* Si l'élément est NULL, c'est que la liste contient moins de i éléments
    if(liste == NULL)
    {
        return NULL;
    }
    else
    {


        return liste->nombre_valeur;
    }
}

void insertListFin(Liste* li, int data)
{

}

*/

int main()
{

          //int nombre, pos;

          Liste *notreListe = initialisation();

    insertion(notreListe, 40);
    insertion(notreListe, 70);
   insertion(notreListe, 580);
   insertion(notreListe, 47);
   insertion(notreListe, 2);
   insertion(notreListe, 56);
   insertion(notreListe, 101);
   insertion(notreListe, 20);
   insertion(notreListe, 80);
   insertion(notreListe, 60);
   insertion(notreListe, 5);
   insertion(notreListe, 7);
   insertion(notreListe, 9);
   insertion(notreListe, 8);
   insertion(notreListe, 10);
   insertion(notreListe, 45);
   insertion(notreListe, 49);
   insertion(notreListe, 24);
   insertion(notreListe, 0);
   insertion(notreListe, 450);
   insertion(notreListe, 480);
   insertion(notreListe, 410);
   insertion(notreListe, 300);
   char rep;
    printf("Voulez-Vous continuer O/N\n");
             scanf("%c",&rep);

             while(rep=='o'||rep=='O' )
             {
                       do
                       {



   color(14,0);
   printf ("||--------------------------------------||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||---BIENVENUE DANS LE MENU PRINCIPAL---||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||------Veuillez choisir une action-----||\n") ;
        printf ("||--------------------------------------||\n") ;
        printf ("||   1. Afficher la liste chainee    ||\n") ;
         printf("2.Afficher la longueur de votre liste actuelle");
        printf ("  3. Afficher a liste chainee apres ajout en tete \n") ;

        printf ("   4.Afficher la liste apres suppression en tete\n") ;

        printf ("  5. Quitter le programme         \n") ;


        printf ("||--------------------------------------||\n") ;
        printf ("||--------------------------------------||\n") ;
        int choix;

        printf("Entrer votre choix\n");
        scanf ("%d", &choix);
        while(choix<1 || choix>4)
        {
                  break;
        }
        switch(choix)
        {
        case 1:
                  color(14,0);
                  printf("Voici notre Liste chainee initiale\n");
           color(1,0);

    afficherListe(notreListe);
    printf("\n");
    color(12,0);

    printf("-----------------------------------------------------------------------\n");
    break;
    case 2:
              color(2,0);
    printf(" Il ya %d elements dans la liste",LongueurListe(notreListe));
    printf("\n");
    color(12,0);
    printf("------------------------------------------------------------------------\n");
    break;
    case 3:
               insertListeDebut(notreListe,58);
    color(14,0);
    printf("Voici notre nouvelle liste apres ajout en premiere position\n");
    color(1,0);
    afficherListe(notreListe);
    color(12,0);
    printf("-----------------------------------------------------------------------\n");
     color(2,0);
    printf(" Il ya %d elements dans la liste\n",LongueurListe(notreListe));
    break;
    case 4:
               suppression(notreListe);

    color(14,0);
    printf("Voici notre nouvelle liste apres supression\n");
    color(1,0);
    afficherListe(notreListe);
    color(12,0);
    printf("-----------------------------------------------------------------------\n");
    color(2,0);
    printf(" Il ya %d elements dans la liste",LongueurListe(notreListe));
    break;
    case 5:
          exit(-1);




          }
          }while(rep=='N'|| rep=='n');






             }


color(0,0);


   return 0;
}
