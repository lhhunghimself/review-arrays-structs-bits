#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Practice exercise

//**Assume that lines are never longer than 500 characters and that people are younger than 127

//********Part 1 declaring a struct clientRecord

//make a struct that contains a string for name, a character for gender (i.e. M or F), an integer for age
//call it clientRecord

//********Part 2 Bookkeeping stuff for clientRecord

//write a function clientRecord_init_read that takes a pointer to clientRecord, a name, a gender and an age as parameters
//it allocates memory for the name field in clientRecord and copies the name,gender and age into the appropriate fields of clientRecord

//write a function clientRecord_destroy that takes as a pointer to clientRecord and releases all the malloced memory - in this case just the name field

//*******Part 3 Read/Write text

//write a function to read in name, gender and age from the file sample.txt
//the function will take as parameters the filename and and a pointer to an array of clientRecords to be allocated and return an integer indicating the number of records read in
//use malloc to allocate enough memory for 1 arrayRecord to the array - keep track of the numberofElements allocated and the number of lines read in - and use realloc to allocate more memory if necessary
//read the data one line at a time - extract the information using sscanf - put the information into the array element using clientRecord_init_read

//Write a function that takes as parameters a filename, an array of clientRecords and the number of Elements in the array
//It will write the array to a text file like sample.txt

//******Part 4 Sort

//write a function that takes an array of clientRecords and the number of Elements
// It sorts by age as the first key - if age is the same it sorts by name alphabetically  
// USE qsort - this involves writing a cmp function as well

//******Part 5 Binary bit pushing and reading writing

//The age and gender can be encoded into one byte by using the first bit to indicate gender male=0 female=1 and the other 7 bits to indicate age (0-127)
//write a function that takes a filename, an array of clientRecords, and the number of elements in the array
//first the function writes an integer with the number of elements
//for each record it writes to the file the name(with \0) and a unsigned char genderage where the first bit indicates gender and the next 7 bits indicate age
//This can be done entirely with fwrite

//write a function that take as parameters the filename and and a pointer to an array of clientRecords to be allocated and return an integer indicating the number of records read in from a binary file in the above format

//use fread to read in the number of records and allocate an array of the correct size
//use fread to read in characters into a name string until '\0' is found
//then use fread to read the genderage byte
//decode it to get the gender and age
//use clientRecord_init_read to enter the information into an element of the array of clientRecords
//repeat until all records are read in

//sample.bin is provided and is the binary counterpart to sample.txt

//******Part 6 put it all together

//put it all together with a main that parses the flags to support
//simpleDb -i <inputfile> -o <outputfile> -s -rb -wb

//where -s is a flag to indicate sorting
//where -rb is a flag that indicates that a binary file will be read in - otherwise a text file will be read in
//where -wb is a flag that indicates that a binary file will be written - otherwise a text file will be written out

//declare a pointer to clientRecord
//read in the file binary or text
//decide whether to sort it
//write out the file 
//clean up clientRecord

//Congratulations Now you've written a simple extensible database
