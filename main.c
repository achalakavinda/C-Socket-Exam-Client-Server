#include "stdio.h"
#include "helper.c"
int main (){
	 int x[10];
         buildArray(x);
         int j;
         question questions[10];
         readFile(questions);

          for (j=0;j<10;j++){
           printf("%s\n",questions[x[j]].question);
            printf("%s\n",questions[x[j]].answere_set);
             printf("%s\n\n",questions[x[j]].correct_answere);
             }
	 return 0;
}
