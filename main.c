#include <stdio.h>
#include <math.h>

void getSubsets(){

    int tamanho_conjunto;
    int i, j;
    
    printf("Digite o tamanho do conjunto\n");
    scanf("%d", &tamanho_conjunto);
    
    if(tamanho_conjunto > 4){
        printf("Tamanho invalido, atribuindo tamanho 4\n\n");
        tamanho_conjunto = 4;
    } else if(tamanho_conjunto <= 0){
        printf("Tamanho invalido, atribuindo tamanho 1\n\n");
        tamanho_conjunto = 1;
    }
    
    int conjunto[tamanho_conjunto];
    
    for(i = 0; i < tamanho_conjunto; i++){
        printf("Digite o Valor do elemento\n");
        scanf("%d", &conjunto[i]);
    }
    
   
    
    int maxSubconjuntos = pow(2, tamanho_conjunto);
    printf("Existem %d Subconjuntos\n\n", maxSubconjuntos);

    for(i = 0; i < maxSubconjuntos; i++){
        int primeiro = 1;
        printf("Subconjunto %02d - [", i + 1);
        for(j = 0; j < tamanho_conjunto; j ++){
            if((i >> j) & 1){
                if(!primeiro) printf(",");
                printf("%d", conjunto[j]);
                primeiro = 0;
            }
            
        }
        printf("]\n");
        
    }
}

int main(){
        
    /*
    1 - A função pede ao usuario para dizer o tamanho do conjunto
    2 - A função pede ao usuario para prencher o conjunto
    3 - Logo em seguida se calcula todos os Subconjuntos possiveis
    4 - Usando o operador >> juntamente com & se cria uma bit mask para ver se o conjunto ja está incluso
    5 - Imprime todos os Subconjuntos e encerra o programa
    */
    getSubsets();
    return 0;    

}