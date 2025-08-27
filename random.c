#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

char randchar(){
	int randomNum = rand() % 26;
	return ('A' + randomNum);
}