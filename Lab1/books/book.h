/**
 * @file book.h
 * @author Stu Steiner
 * @date 29 Dec 2015
 * @brief The book data structure
 *
 * The book data structure.  A book contains a title, isbn,
 * number of pages, and array of authors, and a publisher.
 */

#ifndef BOOK_H_
#define BOOK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "author.h"
#include "publisher.h"

/**
 * @brief The book data structure.
 *
 * A book contains a title, isbn, number of pages, and array of authors, and a publisher.
 *
 * @note I prefer named structures and then the typedef after the structure
 */
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
