#include <stdio.h>
#include <stdib.h>
void remplireMatrice(int**, int);
int AfficherSomme(int**, int)
int main(){
    int M[3][3];
    remplireMatrice(M, 3);
    AfficherSomme(M, 3);
    return 0;
}
void remplireMatrice(int ** m , int dimension){
     for(int i = 0; i < dimension; i++){
         for(int j=0; j < dimension; j++){
         scanf("%d", &m[i][j]);
         }
     }
}
int AfficherSomme(int ** m , int dimension){
     int resultat;
     for(int i = 0; i < dimension; i++){
         for(int j=0; j < dimension; j++){
         resultat += m[i][j]
         }
     }
     return resultat;
}