#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char name[100];
    printf("ENTER YOUR NAME -");
    scanf("%[^\n]s" ,name);
    int a,b,c=1,turns,p1=0,cpu=0;
    printf("\nENTER THE NUMBER OF TURNS YOU WANT TO PLAY- ");
    scanf("%d" ,&turns);
    while(c<=turns){
        c++;
    printf("\nCHOOSE - (1)ROCK (2)PAPER (3)SCISSOR");
    printf("\nYOUR CHOICE-");
    scanf("%d" ,&a);
    if(a>0 && a<=3){
        if(a==1){
            printf("\nVALID CHOICE - ROCK");
        }
        if(a==2){
            printf("\nVALID CHOICE - PAPER");
        }
        if(a==3){
            printf("\nVALID CHOICE - SCISSOR");
        }
    }
    else{
        printf("INVALID CHOICE");
    }
    srand(time(NULL));
    b = rand()%2;
    if(b==0){
        printf("\nCPU CHOSE ROCK");
    }
    if(b==1){
        printf("\nCPU CHOSE PAPER");
    }
    if(b==2){
        printf("\nCPU CHOSE SCISSOR");
    }
    if(a==1 && b==0){
        printf("\nDRAW");
        
    }
        if(a==2 && b==1){
            printf("\nDRAW");
            
        }
            if(a==3 && b==2){
                printf("\nDRAW");
            }
        if(a==1 && b==1){
            printf("\nCPU WINS");
            ++cpu;
        }
        if(a==1 && b==2){
            printf("\n%s WIN" ,name);
            ++p1;
        }
        if(a==2 && b==0){
            printf("\n%s WIN" ,name);
            ++p1;
        }
        if(a==2 && b==2){
            printf("\nCPU WINS");
            ++cpu;
        }
        if(a==3 && b==0){
            printf("\nCPU WINS");
            ++cpu;
        }
        if(a==3 && b==1){
            printf("\n%s WIN" ,name);
            ++p1;
        }
    }    
    if(p1>cpu){
        printf("\n%s wins %d-%d" ,name,p1,cpu);
    } 
    if(p1<cpu){
        printf("\nCPU wins %d-%d" ,p1,cpu);
    }
    if(p1==cpu){
        printf("\nTIE %d-%d" ,p1,cpu);
    }
}