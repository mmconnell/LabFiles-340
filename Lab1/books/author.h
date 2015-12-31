/**
 * @file author.h
 * @author Stu Steiner
 * @date 29 Dec 2015
 * @brief Simple Author data structure used in the first lab.
 *
 * The author.h data structure contains a name structure for the first
 * and last name, which will be used in the author data structure. 
 */
#ifndef AUTHOR_H_
#define AUTHOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Name data structure contains the first and last name
 *
 * The name data structure contains a char pointer for the first and last name.
 * It is presumed there will be a single first name and a single last name.
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct name
{
	char *first;
	char *last;
};

typedef struct name Name;

/**
 * @brief Author data structure contains an array of names and the total in the array.
 *
 * The author data structur contains a name pointer for an array of names. 
 * It is presumed no author will have more than a single first name and 
 * a single last name.  
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct author
{
	Name * names;
	int total;
};

typedef struct author Author;

#endif /* AUTHOR_H_ */
