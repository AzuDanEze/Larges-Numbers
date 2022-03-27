#include <stdio.h>
#include <stdlib.h>
#include "GNHeader.h"

int main(void){
GrandNum GN1, GN2, GNRe;
USI Chif, Menu, MenuC, MenuG, Nbr;
short int comp;

    do{
        Menu = menu();
        if(Menu == 1){
            do{
            MenuC = menuChiffre();
            switch(MenuC){
                case 1:{ //Addition d'un Grand nombre et un chiffre
                    system("cls");
                    printf("\nAddition d'un chiffre & un grand nombre\n\n");
                    ViderTampon();
                    printf("Saisir un grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nSaisir un Grand Nombre positif >= a 10 au minmum\n");
                        }
                    }while(Nbr < 2 );
                    printf("\nSaisir un chiffre a additioner \n");
                    //Boucle Do--While pour encardrer l'utilisateur de siaisir un chiffre entre 0 et 9
                    do{
                        scanf("%hu", &Chif);
                        if (Chif >= 10 || Chif < 0){
                            printf("\nSaisir un chiffre entre 0 - 9\n");
                        }
                    }while(Chif >= 10  || Chif < 0);
                    GNRe = AdditionC(GN1, Chif);
                    system("cls");
                    printf("\n\nLa solution de cet addition est: \n");
                    Affichage(GN1); printf(" %c %hu = ", 43, Chif); Affichage(GNRe);
                    printf("\n\n");
                    system("pause");
                    break;
                }
                case 2:{ //Soustraction d'un chiffre par un Grand nombre
                    system("cls");
                    printf("\nSoustraction d'un chiffre par un Grand nombre\n\n");
                    ViderTampon();
                    printf("Saisir un grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nSaisir un Grand Nombre positif >= a 10 au minmum\n");
                        }
                    }while(Nbr < 2 );
                    printf("\nSaisir un chiffre a soustraire\n");
                    //Boucle Do--While pour encardrer l'utilisateur de siaisir un chiffre entre 0 et 9
                    do{
                        scanf("%hu", &Chif);
                        if (Chif >= 10 || Chif < 0){
                            printf("\nSaisir un chiffre entre 0 - 9\n");
                        }
                    }while(Chif >= 10  || Chif < 0);
                    GNRe = SoustractC(GN1, Chif);
                    system("cls");
                    printf("\n\nLa solution de cet Soustraction est: \n");
                    Affichage(GN1); printf(" %c %hu = ",45, Chif); Affichage(GNRe);
                    printf("\n\n");
                    system("pause");
                    break;

                }
                case 3:{ //Multiplication d'un Grand nombre par un chiffre
                    system("cls");
                    printf("\nMultiplication d'un grand nombre par un chiffre\n\n");
                    ViderTampon();
                    printf("Saisir un grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nSaisir un Grand Nombre positif >= a 10 au minmum\n");
                        }
                    }while(Nbr < 2 );
                    printf("\nSaisir un chiffre\n");
                    //Boucle Do--While pour encardrer l'utilisateur de siaisir un chiffre entre 0 et 9
                    do{
                        scanf("%hu", &Chif);
                        if (Chif >= 10 || Chif < 0){
                            printf("\nSaisir un chiffre entre 0 - 9\n");
                        }
                    }while(Chif >= 10  || Chif < 0);
                    GNRe = MultipicationC(GN1, Chif);
                    system("cls");
                    printf("\n\nLa solution de cet Multiplication est: \n");
                    Affichage(GN1); printf(" %c %hu = ",158, Chif); Affichage(GNRe);
                    printf("\n\n");
                    system("pause");
                    break;
                }
                case 4:{ //Division d'un Grand nombre et un chiffre
                    system("cls");
                    printf("\nDivision d'un chiffre & un grand nombre\n\n");
                    ViderTampon();
                    printf("Saisir un grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nSaisir un Grand Nombre positif >= a 10 au minmum\n");
                        }
                    }while(Nbr < 2 );
                    printf("\nSaisir un chiffre\n");
                    //Boucle Do--While pour encardrer l'utilisateur de siaisir un chiffre entre 0 et 9
                    do{
                        scanf("%hu", &Chif);
                        if (Chif >= 10 || Chif < 0){
                            printf("\nSaisir un chiffre entre 0 - 9\n");
                        }
                    }while(Chif >= 10  || Chif < 0);
                    if (Chif != 0){ //Si Chiffre est entre 1 - 9 cet fonction sera executee
                        GNRe = DivisionC(GN1, Chif);
                        system("cls");
                        printf("\n\nLa solution de cet division est: \n");
                        Affichage(GN1); printf(" %c %hu = ", 246, Chif); Affichage(GNRe);
                        printf("\n\n");
                        system("pause");
                    }else{ //Si chiffre est egale a 0 cet fonction sera executee
                        system("cls");
                        printf("\n\nLa solution de cet division est: \n");
                        printf("\a\a\a"); Affichage(GN1); printf(" %c %hu = ", 246, Chif); printf("IMPOSSIBLE \n");
                        printf("\n\n");
                        system("pause");
                    }
                    break;
                }
                case 5:{ //Modulo d'un Grand nombre et un chiffre
                    system("cls");
                    printf("\nModulo d'un grand nombre par un chiffre\n\n");
                    ViderTampon();
                    printf("Saisir un grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nSaisir un Grand Nombre positif >= a 10 au minmum\n");
                        }
                    }while(Nbr < 2 );
                    printf("\nSaisir un chiffre\n");
                    //Boucle Do--While pour encardrer l'utilisateur de siaisir un chiffre entre 0 et 9
                    do{
                        scanf("%hu", &Chif);
                        if (Chif >= 10 || Chif < 0){
                            printf("\nSaisir un chiffre entre 0 - 9\n");
                        }
                    }while(Chif >= 10  || Chif < 0);
                    if (Chif != 0){ //Si Chiffre est entre 1 - 9 cet fonction sera executee
                        GNRe = ModuloC(GN1, Chif);
                        system("cls");
                        printf("\n\nLa solution de cet modulo est: \n");
                        Affichage(GN1); printf(" %% %hu = ",Chif); Affichage(GNRe);
                        printf("\n\n");
                        system("pause");
                    }else{ //Si chiffre est egale a 0 cet fonction sera executee
                        system("cls");
                        printf("\n\nLa solution de cet modulo est: \n");
                        printf("\a\a\a"); Affichage(GN1); printf(" %% %hu = ",Chif); printf("IMPOSSIBLE \n");
                        printf("\n\n");
                        system("pause");
                    }
                    break;
                }
                case 6:{ //Grand nombre a la pussiance d'un chiffre
                    system("cls");
                    printf("\nGrand nombre a la pussiance d'un chiffre\n\n");
                    ViderTampon();
                    printf("Saisir un grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nSaisir un Grand Nombre positif >= a 10 au minmum\n");
                        }
                    }while(Nbr < 2 );
                    printf("\nSaisir un chiffre de puissance\n");
                    //Boucle Do--While pour encardrer l'utilisateur de siaisir un chiffre entre 0 et 9
                    do{
                        scanf("%hu", &Chif);
                        if (Chif >= 10 || Chif < 0){
                            printf("\nSaisir un chiffre entre 0 - 9\n");
                        }
                    }while(Chif >= 10  || Chif < 0);
                    if (Chif != 0){ //Si Chiffre est entre 1 - 9 cet fonction sera executee
                        GNRe = PuissanceC(GN1, Chif);
                        system("cls");
                        printf("\n\nLa solution de cet puissance est: \n");
                        Affichage(GN1); printf(" ^ %hu = ",Chif); Affichage(GNRe); printf("\n\n%hu chiffres au totale", NbrElement(GNRe));
                        printf("\n\n");
                        system("pause");
                    }else{ //Si chiffre est egale a 0 cet fonction sera executee
                        system("cls");
                        printf("\n\nLa solution de cet puissance est: \n");
                        Affichage(GN1); printf(" ^ %hu = 1",Chif);
                        printf("\n\n");
                        system("pause");
                    }
                    break;
                }
                case 7:{ //Factoriel d'un Grand Nombre
                    system("cls");
                    printf("\nFactoriel d'un Grand Nombre\n\n");
                    ViderTampon();
                    printf("Saisir le grand nombre positif\n");
                    //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                    do{
                        GN1 = LectureGN();
                        Nbr = NbrElement(GN1);
                        if (Nbr < 2){
                            system("cls");
                            printf("\nFactoriel d'un Grand Nombre\n\n");
                            printf("\nSaisir Grand Nombre positif >= a 10 au minimum\n");
                        }
                    }while(Nbr < 2 );
                    GNRe = Factoriel(GN1);
                    system("cls");
                    printf("\n\nLa solution de cet Factoriel est: \n");
                    Affichage(GN1); printf("! "); printf(" = "); Affichage(GNRe); printf("\n\n%hu chiffres au totale", NbrElement(GNRe));
                    printf("\n\n");
                    system("pause");
                    break;
                }
             }
            }while(MenuC != 0);
        }else{
            if(Menu == 2){
                do{
                    MenuG = menuGrand();
                    switch(MenuG){
                        case 1:{ //Addition des deux Grands Nombres
                            system("cls");
                            printf("\nAddition des deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nAddition des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nAddition des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            GNRe = AdditionG(GN1, GN2);
                            system("cls");
                            printf("\n\nLa solution de cet addition est: \n");
                            Affichage(GN1); printf(" %c ", 43); Affichage(GN2); printf(" = "); Affichage(GNRe);
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                        case 2:{ //Soustraction des deux Grands Nombres
                            system("cls");
                            printf("\nSoustraction des deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nSoustraction des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif a soustaire\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nSoustraction des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            comp = Comparaison(GN1, GN2);
                            if (comp == Superieur){
                                GNRe = SoustractG(GN1, GN2);
                                system("cls");
                                printf("\n\nLa solution de cet soustraction est: \n");
                                Affichage(GN1); printf(" - "); Affichage(GN2); printf(" = "); Affichage(GNRe);
                            }else{
                                if (comp == Inferieur){
                                    system("cls");
                                    printf("\n\nLa solution de cet soustraction est: \n");
                                    printf("\a\a\a"); Affichage(GN1); printf(" - "); Affichage(GN2); printf(" = "); printf("\a\aIMPOSSIBLE: NEGATIVE!!!! \n");
                                }else {
                                    system("cls");
                                    printf("\n\nLa solution de cet soustraction est: \n");
                                    Affichage(GN1); printf(" - "); Affichage(GN2); printf(" = 0");
                                }
                            }
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                        case 3:{ //Multiplication des deux Grands Nombres
                            system("cls");
                            printf("\nMultiplication des deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nMultiplication des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif a Multiplier\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nMultiplication des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            comp = Comparaison(GN1, GN2);
                            if (comp == 1){
                                GNRe = MultipicationG(GN1, GN2);
                                system("cls");
                                printf("\n\nLa solution de cet Multiplication est: \n");
                                Affichage(GN1); printf(" %c ", 158); Affichage(GN2); printf(" = "); Affichage(GNRe);
                            }else{
                                if (comp == -1){
                                    GNRe = MultipicationG(GN2, GN1);
                                    system("cls");
                                    printf("\n\nLa solution de cet Multiplication est: \n");
                                    Affichage(GN1); printf(" %c ", 158); Affichage(GN2); printf(" = "); Affichage(GNRe);
                                }else {
                                    GNRe = MultipicationG(GN1, GN2);
                                    system("cls");
                                    printf("\n\nLa solution de cet Multiplication est: \n");
                                    Affichage(GN1); printf(" %c ", 158); Affichage(GN2); printf(" = "); Affichage(GNRe);
                                }
                            }
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                        case 4:{ //Division entre deux Grands Nombres
                            system("cls");
                            printf("\nDivision entre deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif a diviser\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nDivision des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif (le diviseur)\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nDivision des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre positif (le diviseur) >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            comp = Comparaison(GN1, GN2);
                            if (comp == 1){
                                GNRe = DivisionG(GN1, GN2);
                                system("cls");
                                printf("\n\nLa solution de cet division est: \n");
                                Affichage(GN1); printf(" %c ", 246); Affichage(GN2); printf(" = "); Affichage(GNRe);
                            }else{
                                if (comp == -1){
                                    system("cls");
                                    printf("\n\nLa solution de cet division est: \n");
                                    Affichage(GN1); printf(" %c ", 246); Affichage(GN2); printf(" = 0");
                                }else {
                                    system("cls");
                                    printf("\n\nLa solution de cet division est: \n");
                                    Affichage(GN1); printf(" %c ", 246); Affichage(GN2); printf(" = 1");
                                }
                            }
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                        case 5:{ //Modulo des deux Grands Nombres
                            system("cls");
                            printf("\nModulo des deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif a diviser\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nModulo des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif (le diviseur)\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nModulo des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre positif (le diviseur) >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            GNRe = ModuloG(GN1, GN2);
                            system("cls");
                            printf("\n\nLa solution de cet modulo est: \n");
                            Affichage(GN1); printf(" %% "); Affichage(GN2); printf(" = "); Affichage(GNRe);
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                        case 6:{ //Comparasion des deux Grands Nombres
                            system("cls");
                            printf("\nComparasion des deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nComparasion des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nComparasion des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            comp = Comparaison(GN1, GN2);
                            if (comp == Superieur){
                                system("cls");
                                printf("\n\nLa solution de cet Comparasion est: \n");
                                Affichage(GN1); printf(" > "); Affichage(GN2);
                            }else{
                                if (comp == Inferieur){
                                    system("cls");
                                    printf("\n\nLa solution de cet Comparasion est: \n");
                                    Affichage(GN1); printf(" < "); Affichage(GN2);
                                }else {
                                    system("cls");
                                    printf("\n\nLa solution de cet Comparasion est: \n");
                                    Affichage(GN1); printf(" = "); Affichage(GN2);
                                }
                            }
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                        case 7:{ //Puissance des deux Grands Nombres
                            system("cls");
                            printf("\nPuissance des deux Grands Nombres\n\n");
                            ViderTampon();
                            printf("Saisir le premiere grand nombre positif\n");
                            //Boucle Do--While pour encardrer l'utilisateur de saisir un grand nombre >= 10
                            do{
                                GN1 = LectureGN();
                                Nbr = NbrElement(GN1);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nPuissance des deux Grands Nombres\n\n");
                                    printf("\nSaisir le premiere Grand Nombre positif >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            printf("Saisir le deuxieme grand nombre positif a la puissance\n");
                            do{
                                GN2 = LectureGN();
                                Nbr = NbrElement(GN2);
                                if (Nbr < 2){
                                    system("cls");
                                    printf("\nPuissance des deux Grands Nombres\n\n");
                                    printf("\nSaisir le deuxieme Grand Nombre a la puissance >= a 10 au minimum\n");
                                }
                            }while(Nbr < 2 );
                            GNRe = PuissanceG(GN1, GN2);
                            system("cls");
                            printf("\n\nLa solution de cet arithmetique est: \n");
                            Affichage(GN1); printf(" ^ "); Affichage(GN2); printf(" = "); Affichage(GNRe); printf("\n\n%hu chiffres au totale", NbrElement(GNRe));
                            printf("\n\n");
                            system("pause");
                            break;
                        }
                    }
                 }while(MenuG != 0);
            }else{
                system("cls");
                printf("\n\nMerci de utilise notre Arithmetique sur des grands nombres\n\n");
            }
         }
    }while(Menu != 0);
}
