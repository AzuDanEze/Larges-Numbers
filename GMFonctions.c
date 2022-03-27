#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GNHeader.h"

USI menu(){
USI m;

    do{
        system("cls");
        printf("Arithmetiques des grands nombres\n\n");
        printf("1 - Operations entre un grand nombre et un chiffre\n");
        printf("2 - Operations entre deux grands nombres\n");
        printf("-----------------------------\n");
        printf("0 - Quitter\n");
        printf("\nEntrer le numero d'operation que vous souhaitez\n");
        scanf("%hu", &m);
    }while((m < 0) || (m > 2));

return m;
}
USI menuChiffre(){
USI m;

    do{
        system("cls");
        printf("Arithmetiques simples des grands nombres\n\n");
        printf("1 - Addition\n");
        printf("2 - Soustraction\n");
        printf("3 - Multiplication\n");
        printf("4 - Division\n");
        printf("5 - Modulo\n");
        printf("6 - Puissance\n");
        printf("7 - Factoriel\n");
        printf("-----------------------------\n");
        printf("0 - Quitter\n");
        printf("\nEntrer le numero d'operation que vous souhaitez\n");
        scanf("%hu", &m);
    }while((m < 0) || (m > 7));

return m;
}
USI menuGrand(){
USI m;

    do{
        system("cls");
        printf("Arithmetiques complexe des grands nombres\n\n");
        printf("1 - Addition\n");
        printf("2 - Soustraction\n");
        printf("3 - Multiplication\n");
        printf("4 - Division\n");
        printf("5 - Modulo\n");
        printf("6 - Comparaison\n");
        printf("7 - Puissance\n");
        printf("-----------------------------\n");
        printf("0 - Quitter\n");
        printf("\nEntrer le numero d'operation que vous souhaitez\n");
        scanf("%hu", &m);
    }while((m < 0) || (m > 7));

return m;
}

void ViderTampon(){
    char c;
        do{
            c = getchar();
        }while((c != '\n') && (c != EOF));
}

void InsereQueue(GrandNum *K, USI M){

        GrandNum P = (Neoud* )malloc(sizeof(Neoud));
        P->Num = M;
        P->lien = NULL;

        if(*K == NULL) *K = P;
        else{
        GrandNum Q = *K;
            while (Q->lien != NULL){
                Q = Q->lien;
            }
            Q->lien = P;
        }

}

void InsereTete(GrandNum *K, USI M){

        GrandNum P = (Neoud* )malloc(sizeof(Neoud));
        P->Num = M;
        P->lien = *K;
        *K = P;
}

void SupprimerTete(GrandNum *L){
    GrandNum P = *L;

    if (*L != NULL){
        *L = (*L)->lien;
        free(P);
    }
}

GrandNum LectureGN(){
void InsereQueue(GrandNum *, USI);
void ViderTampon();
    GrandNum L = NULL;
    USI nbre;
    char car;

    do{
        //ViderTampon();
        car = getchar();
        if (car != '\n'){
            nbre=atoi(&car);
            InsereQueue(&L,nbre);
        }
    }while(car != '\n');

    return L;
}

void Affichage(const GrandNum L){
    if (L == NULL){
        printf("Le grand nombre entier naturel est vide !");
        return;
    }

    GrandNum P = L;
    while(P != NULL){
        printf("%u", P->Num);
        P = P->lien;
    }
}

GrandNum Renverse(const GrandNum Li){
    GrandNum Resultat = NULL, P = Li;

    while(P != NULL){
        InsereTete(&Resultat, P->Num);
        P = P->lien;
    }
    return Resultat;
}

USI NbrElement(const GrandNum K){
USI i=1 ;
    GrandNum P = K;
        while (P->lien != NULL){
                P = P->lien;
                i++;
        }
return i ;
}

GrandNum Copy(const GrandNum Q){
void InsereQueue(GrandNum*, USI);
GrandNum K = Q, P = NULL;
        while(K != NULL){
            InsereQueue(&P, K->Num);
            K = K->lien;
        }
return P;
}

GrandNum OmittZero(GrandNum L){
GrandNum L1 = L;
    while(L1->Num == 0){
        if(L1 !=NULL ){
            L1 = L1->lien;
        }
    }
return L1;
}

Compare Comparaison(const GrandNum Oper1, const GrandNum Oper2){
USI NbrElement(const GrandNum);
GrandNum OmittZero(GrandNum );
GrandNum L1 = Oper1, L2 = Oper2;
USI op1, op2;
Compare IES;
            L1 = OmittZero(L1);
            L2 = OmittZero(L2);

        op1 = NbrElement(L1);
        op2 = NbrElement(L2);
            if (op1 < op2){
                IES = Inferieur;
            }else{
                if (op1 > op2){
                    IES = Superieur;
                }else{
                    while(L1 != NULL){
                        if (L1->Num > L2->Num){
                            IES = Superieur;
                            break;
                        }else{
                            if (L1->Num < L2->Num){
                                IES = Inferieur ;
                                break;
                            }
                        }
                        L1 = L1->lien;
                        L2 = L2->lien;
                    }
                    if(L1 == NULL) IES = Egal;
                }
            }

return IES ;
}

GrandNum AdditionC(const GrandNum Oper1, const USI Oper2 ){
void InsereTete(GrandNum *, USI);
GrandNum Renverse(GrandNum);

    GrandNum op1 = Renverse(Oper1), Resultat = NULL;
    USI Sum, Rest = Oper2;

        while(op1 != NULL){
            Sum = op1->Num + Rest;
            Rest = Sum / 10;
            Sum %= 10;
            InsereTete(&Resultat, Sum);
            op1 = op1->lien;
        }
        if(Rest != 0)InsereTete(&Resultat, Rest);

return Resultat;
}

GrandNum AdditionG(const GrandNum Oper1, const GrandNum Oper2){
void InsereTete(GrandNum *, USI);
GrandNum Renverse(GrandNum);

    USI Sum, Rest = 0;
    GrandNum op1 = Renverse(Oper1), op2 = Renverse(Oper2), Resultat = NULL;

        while ((op1 != NULL) || (op2 != NULL)){
            Sum = 0;
            if(op1 != NULL){
                Sum += op1->Num;
            }
            if(op2 != NULL){
                Sum += op2->Num;
            }
            Sum += Rest;
            Rest = Sum / 10;
            Sum = Sum % 10;
            InsereTete(&Resultat, Sum);
            if(op1 != NULL){
                op1 = op1->lien;
            }
            if(op2 != NULL){
                op2 = op2->lien;
            }
        }
        if (Rest != 0){
        InsereTete(&Resultat, Rest);
        }
return Resultat;
}

GrandNum SoustractC(const GrandNum Oper1, const USI Oper2 ){
void InsereTete(GrandNum *, USI);
GrandNum Renverse(GrandNum);
GrandNum OmittZero(GrandNum );

    USI Sum;
    GrandNum Resultat = NULL, op1 = Renverse(Oper1);;
    USI chif = Oper2;

            while(op1 != NULL){
                Sum = 0;
                if(op1->Num > chif){
                    Sum += (op1->Num - chif);
                    op1 = op1->lien;
                }else
                    if(op1->Num < chif){
                        Sum += (op1->Num + 10 - chif);
                        op1 = op1->lien;
                        op1->Num -= 1 ;
                    }else op1 = op1->lien;

                InsereTete(&Resultat, Sum);
                chif = 0 ;
            }
            Resultat = OmittZero(Resultat);
return Resultat;
}

GrandNum SoustractG(const GrandNum Oper1, const GrandNum Oper2){
void InsereTete(GrandNum*, USI);
GrandNum Renverse(GrandNum);
GrandNum OmittZero(GrandNum );

    GrandNum Resultat = NULL, op1 = Renverse(Oper1), op2 = Renverse(Oper2);
    USI Sum, emprunt = 0;

        while ((op1 != NULL) && (op2 != NULL)){
            //printf("Affichage soustract while \n\n"); Affichage(op1); printf("\n\n"); system("pause");
            if(op1->Num < (op2->Num + emprunt)){
                Sum = op1->Num + 10 - op2->Num - emprunt;
                emprunt = 1;
            }else{
                Sum = op1->Num - op2->Num - emprunt;
                emprunt = 0;
            }
            InsereTete(&Resultat, Sum);
            op1 = op1->lien;
            op2 = op2->lien;
        }
        while(op1 != NULL){
            if(op1->Num < emprunt){
                InsereTete(&Resultat, ( 10 + op1->Num - emprunt));
                emprunt = 1;
            }else{
                InsereTete(&Resultat, ( op1->Num - emprunt));
                emprunt = 0;
            }
            op1 = op1->lien;
        }
        Resultat = OmittZero(Resultat);

return Resultat;
}

GrandNum MultipicationC(const GrandNum Oper1, const USI Oper2){
void InsereTete(GrandNum*, USI);
GrandNum Renverse(GrandNum);

    GrandNum op1 = Renverse(Oper1), Resultat = NULL ;
    USI Mut, Rest, Sum = 0 ;

            while(op1 != NULL){
                Rest = 0;
                Mut = 1;
                Mut *= (op1->Num * Oper2) ;
                Mut += Sum;
                Rest = Mut % 10;
                Sum = Mut / 10;
                InsereTete(&Resultat, Rest);
                op1 = op1->lien;
            }
            if (Sum != 0){
                InsereTete(&Resultat, Sum);
            }
return Resultat;
}

GrandNum MultipicationG(const GrandNum Oper1, const GrandNum Oper2){
GrandNum AdditionG(const GrandNum, const GrandNum);
GrandNum MultipicationC(const GrandNum, USI);
GrandNum Renverse(GrandNum);
void InsereQueue(GrandNum *, USI);

    GrandNum op1 = Oper1, op2 = Renverse(Oper2), Resultat = NULL, P ;
    USI R = 0, Q, N = 0;

            Q = op2->Num ;
            Resultat = MultipicationC(op1, Q);
            op2 = op2->lien;

            while (op2 != NULL){
                N += 1;
                Q = op2->Num ;
                P = MultipicationC(op1, Q);
                for(USI i = 1; i <= N ; i++){
                    InsereQueue(&P, R);
                }
                Resultat = AdditionG(Resultat, P);
                op2 = op2->lien;
            }

return Resultat;
}

GrandNum DivisionC(const GrandNum Oper1, const USI Oper2){
void InsereQueue(GrandNum *, USI);
void SupprimerTete(GrandNum *);
GrandNum Copy(const GrandNum);

    GrandNum op1 = Copy(Oper1), op2 = Oper1->lien, Resultat = NULL ;
    USI R, D ;

        while( op2 != NULL){
            if (op1->Num > Oper2){
                D = op1->Num / Oper2 ;
                InsereQueue(&Resultat, D);
                D *= Oper2;
                R = op1->Num - D;
                op1->Num = R ;
            }else{
                if (op1->Num < Oper2){
                    R = (op1->Num * 10) + op2->Num ;
                    D = R / Oper2;
                    InsereQueue(&Resultat, D);
                    D *= Oper2;
                    R -= D;
                    op1 = op1->lien;
                    op1->Num = R;
                }else{
                    D = op1->Num / Oper2 ;
                    InsereQueue(&Resultat, D);
                    op1 = op1->lien;
                }
                op2 = op2->lien;
            }
        }
return Resultat;
}

GrandNum DivisionG(const GrandNum Oper1, const GrandNum Oper2){
GrandNum SoustractG(const GrandNum, const GrandNum);
Compare Comparaison(const GrandNum, const GrandNum);
GrandNum AdditionC(const GrandNum, USI);
GrandNum Copy(const GrandNum);

    GrandNum op1 = Copy(Oper1), op2 = Copy(Oper2), Resultat = NULL;
    Compare R = Superieur;

        while(R != Inferieur){
            R = Comparaison(op1, Oper2);
            if (R == Superieur){
                op1 = SoustractG(op1, op2);
            Resultat = AdditionC(Resultat, 1);
            }else{
                break;
            }
        }
return Resultat;
}

GrandNum ModuloC(const GrandNum Oper1, const USI Oper2){
GrandNum SoustractC(const GrandNum, USI);
GrandNum Copy(const GrandNum);
USI NbrElement(const GrandNum);

    GrandNum op1 = Copy(Oper1);
    Compare R = Superieur;

        while(R != Inferieur){
            if (NbrElement(op1) == 1){
                if(op1->Num < Oper2){
                    R = Inferieur;
                }else{
                    op1 = SoustractC(op1, Oper2);
                }
            }else{
                op1 = SoustractC(op1, Oper2);
            }
        }
return op1;
}

GrandNum ModuloG(const GrandNum Oper1, const GrandNum Oper2){
GrandNum SoustractG(const GrandNum, const GrandNum);
Compare Comparaison(const GrandNum, const GrandNum);
GrandNum AdditionC(const GrandNum, USI);
GrandNum Copy(const GrandNum);

    GrandNum op1 = Copy(Oper1), op2 = Copy(Oper2);
    Compare R = Superieur;

        while(R != Inferieur){
            R = Comparaison(op1, op2);
            if (R == Superieur){
                op1 = SoustractG(op1, op2);
            }else{
                break;
            }
        }
return op1;
}

GrandNum PuissanceC(const GrandNum Oper1, const USI Oper2){
GrandNum MultipicationG(const GrandNum, const GrandNum);

    GrandNum Resultat = NULL; // op1 = Oper1, op2 = Oper1;
    USI i = 1;
        while(i <= (Oper2 - 1)){
            if (i == 1){
                Resultat = MultipicationG(Oper1, Oper1);
                i++;
            }else{
                Resultat = MultipicationG(Resultat, Oper1);
                i++;
            }
        }
return Resultat;
}

GrandNum PuissanceG(const GrandNum Oper1, const GrandNum Oper2){
GrandNum MultipicationG(const GrandNum, const GrandNum);
GrandNum SoustractC(const GrandNum, USI);
GrandNum Copy(const GrandNum);

    GrandNum ope1 = Copy(Oper1), ope2 = Copy(Oper2), Resultat = NULL;
    GrandNum op1 = OmittZero(ope1);
    GrandNum op2 = OmittZero(ope2);
    USI D = 1;

        Resultat = MultipicationG(op1, op1);
        op2 = SoustractC(op2, 1);
        do{
            Resultat = MultipicationG(Resultat, op1);
            op2 = SoustractC(op2, 1);
            if ( op2->lien == NULL && op2->Num == 1){
                break;
            }
        }while(D = 1);

return Resultat;
}

GrandNum Factoriel(const GrandNum Oper1){
GrandNum SoustractC(const GrandNum, const USI);
GrandNum MultipicationG(const GrandNum, const GrandNum);
GrandNum Copy(const GrandNum);

    GrandNum op1 = Copy(Oper1), Resultat = Copy(Oper1);
    USI D = 1;

        do{
            op1 = SoustractC(op1, 1);
            Resultat = MultipicationG(Resultat, op1);
            if ( op1->lien == NULL && op1->Num == 1){
                break;
            }
        }while (D = 1);

return Resultat ;
}
