#ifndef GENERICDATA_H
#define GENERICDATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "requiredIncludes.h"

void printType(void * passedIn);
void * buildType(FILE * fin);
void * buildType_Prompt(FILE * fin);
int compare(const void * p1, const void * p2);
void cleanType(void * passedIn);


#endif // GENERICDATA_H
