/*Implementiamo l'algoritmo LCS con programmazione dinamica. Dobbiamo trovare la sottosequenza comune più lunga a due sequenze di caratteri*/
#include <stdio.h>
#include <stdlib.h>
#define ROWS 100
#define COLS 100
char a[ROWS];
char b[COLS];
int c[ROW][COLS];
 char lsc(int i, int j){
	 if(i==0 || j==0){
		 return 0;
	 }
	  if(c[i][j]!=-1){
		  return c[i][j];
	  }else{
		  if(a[i-1]==b[j-1]){
			  c[i][j]=lsc(i,j-1)>lsc(i-1,j):lsc(i,j-1);
		  }
		  return c[i][j];
	  }
}
 void LSC_print(int i, int j){
	 if(i==0 || j==0){
		 return;
	 }
	 if (a[i-1] == b[j-1]) {       
        LCS_print(i-1, j-1);
        printf("%c", a[i-1]);    
    }
    else if (c[i-1][j] >= c[i][j-1])  
        LCS_print(i-1, j);
    else
        LCS_print(i, j-1);
 }
int main() {
    scanf("%s", a);
    scanf("%s", b);

    memset(c, -1, sizeof(c));

    int n = strlen(a);
    int m = strlen(b);

    printf("Lunghezza LCS: %d\n", LCS(n, m));
    printf("LCS: ");
    LCS_print(n, m);
    printf("\n");

    return 0;
}
