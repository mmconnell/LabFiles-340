/**
 * @file publisher.h
 * @author Stu Steiner
 * @date 29 Dec 2015
 * @brief The publisher data structure
 *
 * The publisher data structure.  A publisher contains a name
 * of the publisher and the publisher city.
 */

#ifndef PUBLISHER_H_
#define PUBLISHER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief The publisher data structure.
 *
 * A publisher contains a name of the publisher and the publisher city.
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct publisher
{
	char *name;
	char * city;
};

typedef struct publisher Publisher;

#endif /* PUBLISHER_H_ */
