# Pick the appropriate set of utility files by commenting out the not used files

#UTILS= ./utils/myUtils_32.o ./fileUtil_32.o
UTILS= ./utils/myUtils_64.o ./utils/fileUtil_64.o



lab1:	./books/books.o ./linkedlist/linkedList.o ./linkedlist/listUtils.o 
	gcc -o lab1 cscd340Lab1.c ./books/books.o ./linkedlist/linkedList.o ./linkedlist/listUtils.o ${UTILS}

books.o:	./books/author.h ./books/book.h ./books/publisher.h ./books/books.c
	gcc -c ./books/books.c

linkedList.o:	./linkedlist/linkedList.h ./linkedlist/linkedList.c ./linkedlist/genericData.h ./linkedlist/requiredIncludes.h
	gcc -c ./linkedlist/linkedList.c

listUtils.o:	./linkedlist/listUtils.c listUtils.h
	gcc -c ./linkedlist/listUtils.c

clean:	
	rm books/*.o
	rm linkedlist/*.o
	rm lab1

