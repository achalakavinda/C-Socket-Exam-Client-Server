/**
config headers and varibale declared here
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include "stdbool.h"
#include <string.h>
#define bufSize 1024

//structure define for the storing question information
typedef struct question{
    char question[1024];
    char answere_set[1024];
    char correct_answere[1024];
};
