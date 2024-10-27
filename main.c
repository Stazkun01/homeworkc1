#include <stdio.h>
#include <windows.h>
struct registrationdates{
int day;
int month;
int year;
};

struct registration{
    char firstname[20];
    char lastname[20];
    char adress[80];

};
int main(){
    float  fin ,linux , dev , math , win , ar , fr , eeje , com , eng ,result , somme , module1 , module2 , module3 ;
    struct registration user;
    struct registrationdates date ;
    printf("entrer votre nom : ");
    scanf("%s" , user.lastname);
    printf("entrer votre prenom : ");
    scanf("%s" , user.firstname);
    printf("entrer votre adress email: ");
    scanf("%s" , user.adress);
    printf("entrer l'anne de naissance : ");
    scanf("%d" , &date.year);
    printf("entrer le mois de naissance : ");
    scanf("%d" , &date.month);
    printf("entrer le jour de naissance : ");
    scanf("%d" , &date.day);
    system("cls");
    printf("                                  LOADING | ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING / ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING - ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING \\ ");
    Sleep(200);
    system("cls");
   printf("user registred successfully !");
    Sleep(2500);
    system("cls");
    printf("bonjour %s \n" ,user.firstname);
    printf("entrer la note de linux : ");
    scanf("%f" , &linux);
    while (linux > 20 || linux < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de linux : ");
        scanf("%f" , &linux);
    }
    printf("entrer la note de developpement des applications : ");
    scanf("%f" , &dev);
    while (dev > 20 || dev < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de developpement d'applications : ");
        scanf("%f" , &dev);}
    printf("entrer la note de math : ");
    scanf("%f" , &math);
    while (math > 20 || math < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de math : ");
        scanf("%f" , &math);}
    printf("entrer la note de windows : ");
    scanf("%f" , &win);
    while (win > 20 || win < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de windows : ");
        scanf("%f" , &win);}
    printf("entrer la note de arabic : ");
    scanf("%f" , &ar);
    while (ar > 20 || ar < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de arabic : ");
        scanf("%f" , &ar);}
    printf("entrer la note de francais : ");
    scanf("%f" , &fr);
    while (fr > 20 || fr < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de francais : ");
        scanf("%f" , &fr);}
    printf("entrer la note de eeje : ");
    scanf("%f" , &eeje);
    while (eeje > 20 || eeje < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de eeje : ");
        scanf("%f" , &eeje);}
    printf("entrer la note de communication : ");
    scanf("%f" , &com);
    while (com > 20 || com < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note de communication : ");
        scanf("%f" , &com);}
    printf("entrer la note d'anglais : ");
    scanf("%f" , &eng);
    while (eng > 20 || eng < 0){
        printf("la note doit etre positive et inferieur a 20 !\n");
        printf("entrer la note d'anglais : ");
        scanf("%f" , &eng);}
    system("cls");
    printf("                                  LOADING | ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING / ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING - ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING \\ ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING | ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING / ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING - ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING \\ ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING | ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING / ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING - ");
    Sleep(200);
    system("cls");
    printf("                                  LOADING \\ ");
    Sleep(200);
    system("cls");
    printf(" \n Nom : %s               Prenom : %s               Adreess email : %s \n" , user.lastname , user.firstname , user.adress);
    printf(" Date de naissance : %02d/%02d/%02d \n\n\n" , date.day , date.month , date.year);
    printf(" =================================Bultain==================================\n");
    printf("|  matiere                        |   notes    | coeficient                |   \n");
    printf("|--------------------------------------------------------------------------|\n");
    printf("|  linux                          |  %.2f/20  |  5                        |\n" , linux);
    printf("|  developpement des applications |  %.2f/20  |  5                        |\n" , dev);
    printf("|  math                           |  %.2f/20  |  3                        |\n" , math);
    printf("|  windows                        |  %.2f/20  |  5                        |\n" , win);
    printf("|  arabic                         |  %.2f/20  |  2                        |\n" , ar);
    printf("|  francais                       |  %.2f/20  |  2                        |\n" , fr);
    printf("|  eeje                           |  %.2f/20  |  3                        |\n" , eeje);
    printf("|  communication                  |  %.2f/20  |  2                        |\n" , com);
    printf("|  anglais                        |  %.2f/20  |  2                        |\n" , com);
    printf(" ==========================================================================\n");
    somme = 29;
    module1 = (linux + math) / 2;
    module2 = (ar + fr + com + eeje + eng) / 5;
    module3 = (dev + win) /2;
    result = (linux * 5) + (dev * 5) + (math * 3) + (win * 5) + (ar * 2) + (fr * 2) +(eeje * 3) + (com * 2) + (eng *2) ;
    fin = result / somme;
    printf("|                     | la note final est : %.2f  |                       |\n" , fin);
    if (fin < 10 || linux < 6 || dev < 6 || math < 6 || win < 6 || ar < 6 || fr < 6 || eeje < 6 || com < 6  || eng < 6 || module1 < 10 || module2 < 10 || module3 < 10){
         printf("|                       vous n'avais pas reussi !                          |\n");
         printf("|                      cause : note eliminatoire                           |\n");
    }
    if(fin >= 10 && linux > 6 && dev > 6 && math > 6 && win > 6 && ar > 6 && fr > 6 && eeje > 6 && com > 6  && eng > 6 && module1 >= 10 && module2 >= 10 && module3 >= 10){
        printf("|                     Mabrouuuuk vous avez reussie  !                      |\n");
    }
    if (10<=fin && fin<12 && linux > 6 && dev > 6 && math > 6 && win > 6 && ar > 6 && fr > 6 && eeje > 6 && com > 6 && eng > 6 && module1 >= 10 && module2 >= 10 && module3 >= 10){
        printf("|                             niveau passable                              |\n");
    }
    else if (12<=fin && fin <14 && linux > 6 && dev > 6 && math > 6 && win > 6 && ar > 6 && fr > 6 && eeje > 6 && com > 6 && eng > 6 && module1 >= 10 && module2 >= 10 && module3 >= 10){
        printf("|                         niveau assez bien                               |\n");
    }
    else if (14<=fin && fin<16 && linux > 6 && dev > 6 && math > 6 && win > 6 && ar > 6 && fr > 6 && eeje > 6 && com > 6 && eng > 6 && module1 >= 10 && module2 >= 10 && module3 >= 10){
        printf("|                             niveau bien                                  |\n");
    }
    else if (16<=fin && fin<20 && linux > 6 && dev > 6 && math > 6 && win > 6 && ar > 6 && fr > 6 && eeje > 6 && com > 6 && eng > 6 &&module1 >= 10 && module2 >= 10 && module3 >= 10){
        printf("|                        niveau excellent                                  |\n");
    }
    printf(" ========================================================================== \n");
    }
