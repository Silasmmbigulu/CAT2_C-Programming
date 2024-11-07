//a c program that defines a 2D array named scores
//processor directives
#include <stdio.h>
 int main() {
 //declaration and initialization
 int i;
 int k;
 int scores[2][2]={
 {{65,92},
 {84,72}},      
{{35,70},
 {59,67}}  
 };
 //print the elements using a nested loop
 for(i=0;i<2;i++){
    for(k=0;k<2;k++){
        printf("scores [%d][%d]=%d\n",i,k, scores[i][k]);
    }
 }
 return 0;
 }
