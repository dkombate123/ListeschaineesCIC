#ifndef NOMBRES_H_INCLUDED
#define NOMBRES_H_INCLUDED
// Définition de la liste

 typedef struct nombre{
          int nombre_valeur;
          struct nombre *suivant;
}nombre;
// structure de controle
typedef struct Liste Liste;
struct Liste

{
          nombre*premier;
};




#endif // NOMBRES_H_INCLUDED
