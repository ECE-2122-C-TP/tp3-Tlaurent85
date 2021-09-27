#include <stdio.h>

//exo1
int main() {
    int a=0, b=0;
    printf("saisir un entier a");
    scanf("%d",&a);
    printf("saisir un entier b");
    scanf("%d",&b);
    if(a >= b)
    {
        printf("l'entier le plus grand est %d\n",a);
    }
    else{
        printf("l'entier le plus grand est %d\n",b);
    }
    return 0;

}
//exo2
int calculperi(int largeur, int longueur ) {
    return 2*largeur +2*longueur;
}

int main() {
    int largeur=0, longueur=0, perimetre=0;
    printf("saisir la longueur");
    scanf("%d",&longueur);
    printf("saisir la largeur");
    scanf("%d",&largeur);
    perimetre=calculperi(largeur,longueur);
    printf("le perimette est de %d\n",perimetre );
    return 0; }

//exo3
int main() {
    int n = 0;
    printf("saisir un entier");
    scanf("%d", &n);
    if (n >= 10&& n%3==0) {
        printf("validé");
    }

    else{
        printf("%d ne respecte pas les conditions",n );
    }
    return 0;
}
//exo4
int main() {
    int age=0;
    printf("quel est votre age?");
    scanf("%d",&age);
    if(age<12){
        printf("vous beneficiez du tarif enfant");
    }
    else if(12<=age && age<=17){
        printf("vous beneficiez du tarif jeune");
    }
    else if(age<=65){
        printf("vous benefiiez du tarif senior");
    }
    else{
        printf("plein tarif");
    }
    return 0;
}
//exo5
int main() {
    int code=0;
    printf("saisir un code");
    scanf("%d",&code);
    if(code==1||code==2||code==3){
        printf("vous obteenez la boisson fraiche associée au code");
    }
    else if(code==11||code==10){
        printf("vous obtenez la boisson chaude associée aau code");
    }
    else{
        printf("erreur système autodestruction" );
    }
    return 0;
}

//exo5 version2
int main() {
    int code=0;
    printf("saisir un code");
    scanf("%d",&code);
    switch (code) {
        case 1:
        case 2:
        case 3:{
            printf("vous recevez la boisson fraiche associée au code");
            break;
        }
        case 10:
        case 11:{
            printf("vous recevez la boisson chaude associeé au code ");
            break;
        }
        default:{
            printf("erreur système autodestruction ");
            break;
        }

    }
    return 0;
}

//exo6
int main() {
    float note1=0;
    float note2=0;
    float note3=0;
    printf("saisir une note");
    scanf("%f",&note1);
    printf("saisir une deuxieme note");
    scanf(" %f",&note2);
    printf("saisir une derniere note");
    scanf(" %f",&note3);
    while (note1>20.0f){
        printf("saisir une nouyvelle premeire note");
        scanf(" %f",&note1);
    }
    while(note2>20.0f){
        printf("saisir une nouyvelle deuxieme note");
        scanf(" %f",&note2);
    }
    while(note3>20.0f){
        printf("saisir une nouyvelle derneire note");
        scanf(" %f",&note3);
    }
    printf("la moyenne est%f",(note1+note2+note3)/3);

    return 0;
}

//exo7
int main() {
    int nbclasse=0;
    int nbeleves=0;
    int i=1;
    int nbtotal=0;
    printf("saisir le nombre de classes");
    scanf("%d",&nbclasse);
    while ( i<=nbclasse){
        printf("saisir un nombre d'eleve");
        scanf("%d",&nbeleves);
        nbtotal=nbtotal+nbeleves;
        i+=1;

    }

    printf("le nombre total d'eleve est %d\n",nbtotal);


    return 0;
}
//exo8
int main() {
    int n=0;
    printf("saisir un nombre\n");
    scanf("%d",&n);
    while(n%7!=0 || n%2!=0 ){
        printf("saisir une nouvelle valeur\n");
        scanf("%d",&n);
    }

    return 0;
}
//exo9
int ncarré(int n){
    return n*n;
}


int main() {
    int nbpierres=0;
    printf("saisir le nombre de pierres")
    scanf("%d",&nbpierres);

    printf("Hello, World!\n");
    return 0;
}
//exo10
int main() {
    int n=0;
    int moyenne=0;
    int conteur=0;
    printf("saisir un nombre");
    scanf("%d",&n);
    while(n>-1){
        printf("saisir un nombre");
        scanf("%d",&n);
        if(n>=0){
            conteur+=1;
            moyenne=(moyenne+n);
        }else{
        }
    }
    moyenne=moyenne/conteur;
    printf("la moyenne de tout les nombre saisit est%f",moyenne);
    return 0;
