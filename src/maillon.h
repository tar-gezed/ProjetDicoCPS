#include <stdio.h>
#include <stdlib.h>

#include "lettres.h"

typedef struct maillon maillon;
struct maillon
{
    lettres val;
    struct maillon *suiv;
}; 
typedef maillon* maillon_t;

/**
 * Modifie la k-ieme lettre d'un maillon
 * @param k : indice entier compris entre 0 et 5
 * @param c : caractere a inserer
 * @param m : maillon à modifier
 */
void set_charnum(int k, char c, maillon_t m);

/**
 * Consulte la k-ieme lettre du maillon
 * @param k : indice entier compris entre 0 et 5
 * @param m : maillon à consulter
 */
char get_charnum(int k, maillon_t m);