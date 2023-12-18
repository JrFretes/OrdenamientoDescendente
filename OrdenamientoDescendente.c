#include <stdio.h>
#include <stdlib.h>

void OrdenamientoDescendente(int a,int b,int c);

int main()
{
    int a,b,c;

    do{
        printf("Ingrese tres valores: \n");
        scanf("%d %d %d",&a,&b,&c);

        OrdenamientoDescendente(a,b,c);
    }while(a&&b&&c!=0);


    return 0;
}

void OrdenamientoDescendente(int a,int b,int c){

    if((a<=b)&&(a<=c)){
        if(b<=c){
            printf("%d %d %d\n",c,b,a);
        }
        else
            printf("%d %d %d\n",b,c,a);
    }
    if((b<=a)&&(b<=c)){
        if(a<=c){
            printf("%d %d %d\n",c,a,b);
        }
        else{
            printf("%d %d %d\n",a,c,b);
        }
    }
    if((c<=a && c<=b)){
        if(a<=b){
            printf("%d %d %d\n",b,a,c);
        }
        else{
            printf("%d %d %d\n",a,b,c);
        }
    }
}
