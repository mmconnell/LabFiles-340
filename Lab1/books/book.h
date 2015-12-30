/*
 * book.h
 *
 *  Created on: Dec 29, 2015
 *      Author: ssteiner
 */

#ifndef BOOK_H_
#define BOOK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "author.h"
#include "publisher.h"


struct book
{
   char * title;
   char * isbn;
   int pages;
   Author authors;
   Publisher pub;
};

typedef struct book Book;

#endif /* BOOK_H_ */
