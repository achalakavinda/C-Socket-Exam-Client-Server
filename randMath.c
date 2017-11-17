#include "config.h"
//genrate random numbers
int randNumber(){
        time_t t;
  /* init random numbers genrator */
	srand((unsigned)time(&t));
	return rand()%10;	
}
