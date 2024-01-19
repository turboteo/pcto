#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tempo(){
    int num;

    srand(time(0));
    num = rand() % 6 + 5;
    return num;
}

int codice() {
    int codiceAuth;

    srand(time(0));
    codiceAuth = rand() % 900000 + 100000;
    return codiceAuth;
}

int main(){
    int selezione1;
    char localizzazione;
    char indirizzo[100];
    char account;
    char username[100];
    char password[100];
    char pswGiusta[] = "pippo";
    int i = 0;
    int zona;



    printf("\n############################################################# \n");
    printf("       \033[32mBenvenuto in BinHub, seleziona il tuo servizio!\033[0m \n");
    printf("#############################################################\n \n");

    retry1:
    printf("\033[32mDigita 1 per accedere al ritiro a domicilio. (€5 per i non abbonati)\033[0m \n");
    printf("\033[32mDigita 2 per trovare un'isola ecologica vicino a te. (servizio gratuito)\033[0m \n");
    scanf("%d", &selezione1);

    if(selezione1 == 1){
        printf("\n\033[0;33mPosso accedere alla tua posizione?\033[0m \n");
        printf("\033[0;33mDigita S se acconsenti l'accesso alla tua geolocalizzazione. Digita N se non acconsenti.\033[0m \n");
        scanf(" %c", &localizzazione);
        if(localizzazione == 115 ||localizzazione ==  83){
            printf("\n\033[0;33mLa tua posizione è: Viale Romania 32.\033[0m \n\n");
            printf("\033[0;33mHai già un account BinHub? Digita S se sì, altrimenti digita N.\033[0m \n");
            scanf(" %c", &account);
            if(account == 115 ||account ==  83){
                printf("\033[0;33m\nInserisci il nome utente:\033[0m ");
                scanf("%s", username);
                passwd_ret:
                    printf("\033[0;33mInserisci il la password:\033[0m ");
                    scanf("%s", password);
                    while (password[i] != '\0'){
                        if (password[i] == pswGiusta[i]){
                            i++;
                        }
                        else{
                            printf("\n\033[0;33mPassword errata.\033[0m \n\n");
                            goto passwd_ret;
                        }
                    }
                printf("\033[0;33m\nAccesso effettuato! Non verrà accreditato alcun importo.\033[0m\n\n");
                printf("\033[0;33mUn nostro operatore sta arrivando, tieniti pronto!\033[0m \n");
                printf("\033[0;33mIl tempo di attesa previsto è: %d minuti.\033[0m \n\n", tempo());
            }
        }
        else if(localizzazione == 78 ||localizzazione ==  110){
            printf("\n\033[0;33mInserisci il tuo indirizzo:\033[0m ");
            scanf(" %[^\t\n]s", indirizzo);
            printf("\n\033[0;33mIl tuo indirizzo è: %s\033[0m \n\n", indirizzo);
            printf("\033[0;33mHai già un account BinHub? Digita S se sì, altrimenti digita N.\033[0m \n");
            scanf(" %c", &account);
            if(account == 115 ||account ==  83){
                printf("\033[0;33m\nInserisci il nome utente:\033[0m ");
                scanf("%s", username);
                passwd_ret2:
                    printf("\033[0;33mInserisci il la password:\033[0m ");
                    scanf("%s", password);
                    while (password[i] != '\0'){
                        if (password[i] == pswGiusta[i]){
                            i++;
                        }
                        else{
                            printf("\n\033[0;33mPassword errata.\033[0m \n\n");
                            goto passwd_ret2;
                        }
                    }
                printf("\033[0;33mAccesso effettuato! Non verrà accreditato alcun importo.\033[0m\n\n");
                printf("\033[0;33mUn nostro operatore sta arrivando, tieniti pronto!\033[0m \n");
                printf("\033[0;33mIl tempo di attesa previsto è: %d minuti. \033[0m\n\n", tempo());
            }
            else if(account == 78 ||account ==  110){
               printf("\n\033[0;33mIl costo del servizio è €5.\033[0m \n\n");
               printf("\033[0;33mNel caso volessi abbonarti per 12 mesi al costo di €50, contattata: +39 339 636 7880 (Sede legale) oppure +39 392 216 8499 (Call center).\033[0m \n\n");
               printf("\033[0;33mUn nostro operatore sta arrivando, tieniti pronto!\033[0m \n");
               printf("\033[0;33mIl tempo di attesa previsto è: %d minuti.\033[0m \n\n", tempo());
            }
        }
    }
    else if(selezione1 == 2){
        printf("\n\033[0;36mPosso accedere alla tua posizione?\033[0m \n");
        printf("\033[0;36mDigita S se acconsenti l'accesso alla tua geolocalizzazione. Digita N se non acconsenti.\033[0m \n");
        scanf(" %c", &localizzazione);
        if(localizzazione == 115 ||localizzazione ==  83){
            printf("\n\033[0;36mLa tua posizione è: Viale Romania 32.\033[0m\n");
            printf("\033[0;36mL'isola ecologica più vicina a te si trova in: Via Asmara 5\033[0m\n\n");
            printf("\033[0;36mIl tuo codice è: %d \033[0m\n\n", codice());
            printf("\033[0;36mMostrandolo ad un nostro operatore riceverai un coupon per un ritiro a casa gratuito!\033[0m \n");
        }
        else if(localizzazione == 78 ||localizzazione ==  110){
            printf("\n\033[0;36mDigita il numero corrispondente alla zona più vicina a te:\033[0;33m ");
            printf("\n\n \033[0;36m1. Zona Trieste-Salario \n 2. Talenti \n 3. Centro storico \n 4. Trastevere-Ostiense-Portuense \n 5. EUR \033[0m\n");
            scanf("%d", &zona);
            if (zona == 1){
                printf("\n\033[0;36mLa zona selezionata è: Trieste-Salario.\033[0m \n");
                printf("\033[0;36mL'isola ecologica più vicina a te si trova in: Via Asmara 5\033[0m \n\n");
                printf("\033[0;36mIl tuo codice è: %d\033[0m \n\n", codice());
                printf("\033[0;36mMostrandolo ad un nostro operatore riceverai un coupon per un ritiro a casa gratuito! \033[0m\n\n");
            }
            else if(zona == 2){
                printf("\n\033[0;36mLa zona selezionata è: Talenti.\033[0m \n");
                printf("\033[0;36mL'isola ecologica più vicina a te si trova in: Via Giuseppe Cesare Abba 8\033[0m\n\n");
                printf("\033[0;36mIl tuo codice è: %d \033[0m", codice());
                printf("\033[0;36mMostrandolo ad un nostro operatore riceverai un coupon per un ritiro a casa gratuito! \033[0m\n\n");
            }
            else if(zona == 3){
                printf("\n\033[0;36mLa zona selezionata è: Centro storico.\033[0m\n");
                printf("\033[0;36mL'isola ecologica più vicina a te si trova in: Piazza Venezia 3 \033[0m\n\n");
                printf("\033[0;36mIl tuo codice è: %d\033[0m \n\n", codice());
                printf("\033[0;36mMostrandolo ad un nostro operatore riceverai un coupon per un ritiro a casa gratuito! \033[0m\n\n");
            }
            else if(zona == 4){
                printf("\n\033[0;36mLa zona selezionata è: Trastevere-Ostiense-Portuense.\033[0m\n");
                printf("\033[0;36mL'isola ecologica più vicina a te si trova in: Viale di Trastevere 76\033[0m \n\n");
                printf("\033[0;36mIl tuo codice è: %d \033[0m\n\n", codice());
                printf("\033[0;36mMostrandolo ad un nostro operatore riceverai un coupon per un ritiro a casa gratuito! \033[0m\n\n");
            }
            else if(zona == 5){
                printf("\n\033[0;36mLa zona selezionata è: EUR.\033[0m\n");
                printf("\033[0;36mL'isola ecologica più vicina a te si trova in: Via delle Tre Fontane 5\033[0m \n\n");
                printf("\033[0;36mIl tuo codice è: %d\033[0m \n\n", codice());
                printf("\033[0;36mMostrandolo ad un nostro operatore riceverai un coupon per un ritiro a casa gratuito!\033[0m \n\n");
            }  
        }
    }
    return 0;
}   