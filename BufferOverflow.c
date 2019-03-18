#include <stdio.h>

void secret(){
    printf("Bien jouer vous etes dans le secret\n");
}

void echo(){
    char buffer[20];
    printf("Entrer votre texte\n");
    scanf("%s",buffer);
    printf("Vous avez écrit %s\n",buffer);
}

int main(){
    echo();
    return 0;
}