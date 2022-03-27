#ifndef GNHEADER_H_INCLUDED
#define GNHEADER_H_INCLUDED

typedef unsigned short int USI;
typedef unsigned int UI;
typedef enum Com {Inferieur = -1, Egal = 0, Superieur = 1} Compare ;

typedef struct neoud{
    int Num;
    struct neoud *lien ;
 } Neoud ;


typedef Neoud* GrandNum ;

USI menu();
USI menuChiffre();
USI menuGrand();
void ViderTampon();
void InsereQueue(GrandNum *, USI);
void InsereTete(GrandNum *, USI);
void SupprimerTete(GrandNum *);
GrandNum LectureGN();
void Affichage(const GrandNum);
GrandNum Renverse(const GrandNum);
USI NbrElement(const GrandNum);
GrandNum Copy(const GrandNum);
GrandNum OmittZero(GrandNum);


GrandNum AdditionC(const GrandNum, const USI);
GrandNum AdditionG(const GrandNum, const GrandNum);

GrandNum SoustractC(const GrandNum, const USI);
GrandNum SoustractG(const GrandNum, const GrandNum);

GrandNum MultipicationC(const GrandNum, const USI);
GrandNum MultipicationG(const GrandNum, const GrandNum);

GrandNum DivisionC(const GrandNum, const USI);
GrandNum DivisionG(const GrandNum, const GrandNum);

GrandNum ModuloC(const GrandNum, const USI);
GrandNum ModuloG(const GrandNum, const GrandNum);

GrandNum PuissanceC(const GrandNum, const USI);
GrandNum PuissanceG(const GrandNum, const GrandNum);

Compare Comparaison(const GrandNum, const GrandNum);
GrandNum Factoriel(const GrandNum);


#endif // GNHEADER_H_INCLUDED
