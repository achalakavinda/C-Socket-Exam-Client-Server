#include <stdio.h>
#include <string.h>
#define bufSize 1024
char * str_split(char a_str,const char a_delim);

struct question{
    char question[1024];
    char answere_set[1024];
    char correct_answere[1024];
};

int main (){
    struct question questions[10];
	FILE* fp;
	char arr[30][1024];
	int countIndex=0;
	int seperator=0;
	char buf[bufSize];
	fp = fopen("qText.txt","r");

  while (fgets(buf, sizeof(buf), fp) != NULL)
  {
    buf[strlen(buf) - 1] = '\0';
    if(seperator>2){
        seperator=0;
    }
    if(seperator==0){
        strcpy(questions[countIndex].question,buf);
    }else if(seperator==1){
         strcpy(questions[countIndex].answere_set,buf);
    }else if(seperator==2){
         strcpy(questions[countIndex].correct_answere,buf);
         countIndex=countIndex+1;
    }
    seperator++;
  }
  fclose(fp);
    /*
      int j=0;
      for (j;j<countIndex;j++){
       printf("%s\n",questions[j].question);
        printf("%s\n",questions[j].answere_set);
         printf("%s\n\n",questions[j].correct_answere);
      }
    */
  return 0;
}

char ** str_split(char *a_str,const char a_delim){
	char** result =0;
	size_t count  =0;
	char* temp    =a_str;
	char* last_coma =0;
	char delim[2];
	delim[0] = a_delim;
	delim[1]=0;
	while (*temp){
		if(a_delim==*temp){
			count++;
			last_coma=temp;
		}
		temp++;
	}
	return result;
}
