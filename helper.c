#include "config.h"
//build random value array
void buildArray(int *arr) {
    //initialize variables and remove array garbage values.
	time_t t;
	int intValue=0;
	int xValue;
	bool end=true;
	bool duplicate=false;
	int j=0;
	for(j=0;j<10;j++){arr[j]=-1;}
	srand((unsigned) time(NULL));

	//while loop run until building a new random array
	 while(true){
            //if break array size is greater than 9
            if(intValue>9){
                break;
            }
		 xValue = rand()%10;//get random numbers
		 //check for number duplicate inside array
	     for(j=0;j<10;j++){
                if(arr[j]==xValue){
                    duplicate=true;
                    break;
                }
            }
            //add value to array index if not repeat
            if(!duplicate){
               arr[intValue]=xValue;
	           intValue++;
            }
            //reassign duplicate value to false
            duplicate=false;
		}
}

int readFile(struct question *questions){
    //declare local variables
	FILE* fp;
	int countIndex=0;
	int seperator=0;
	char buf[bufSize];
	//open file to read
	fp = fopen("qText.txt","r");

//filer data and rearrange them in to question structure array
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

//print read file information
  /*int j=0;
  for (j;j<countIndex;j++){
   printf("%s\n",questions[j].question);
    printf("%s\n",questions[j].answere_set);
     printf("%s\n\n",questions[j].correct_answere);
  }
  */
  return 0;
}


