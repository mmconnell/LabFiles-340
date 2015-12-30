#ifndef LISTUTILS_H
#define LISTUTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "genericData.h"
#include "linkedList.h"

#define MAX 100

Node * buildNode(FILE * in, void *(*buildData)(FILE * in) );
void sort(LinkedList * theList, int (*compare)(const void *, const void *));
void buildList(LinkedList * myList, int total, FILE * fin, void * (*buildData)(FILE * in));

#endif // LISTUTILS_H
