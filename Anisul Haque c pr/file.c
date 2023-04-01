/*

* In c programming. File is place on disk where a group of related
data is stored.

* File is a structure which is stored in stdio.h header.

* Declaratoion of file 
---------------------------------------
FILE *name_of_file;

*/

//File operations---->
/*

*In C, You can perform four major operations on the file, either text or binary:


1. Creating a new file
2. Opening an existing file
3. Closing a file
4. Reading from and writing information to a file


*/


//File functions--->
/*

To write something in a file
-------------------------------
fputc()
fputw()
fputs()
fprintf()
fwrite()

To read somthing in a file
-------------------------------
getc()
fgetw()
fgets()
fscanf()
fread()

*/


//Creating a file--->
/*#include<stdio.h>
int main()
{
  FILE *file;

  file = fopen("test.txt", "w");

  if (file == NULL)
  {
    printf("file does not exist!\n");
  }
  else{
    printf("File is opened\n");
    fclose(file); //closing file
  }
}

*/

/*
Declaration and modes of FILE--->
#include<stdio.h>

int main()

{

    FILE *ptr;
    ptr = fopen("test.txt", "r"); //For reading the file
    ptr = fopen("test.txt", "w"); // For writting the file

    //Files modes--->


    
    
   1.  "r" ---> Open for reading the file (Usually usage for txt file).
       If the file doesn't exist fopen function returns NULL.
   2.  "rb" --> Open for reading the file in Binary.
       If the file doesn't exist fopen function returns NULL.
   3.  "w" ---> Open for writting the file.
       If the file exist the content will be overwrite.
   4.  "wb" --> Open for writting the file in binary.
       If the file exist the content will be overwrite.
   5.  Open for append.
       If the file does not exist, it will creat the file.   
    
    
    return 0;
}
*/



/*

//Taking vlaue from another file--->

#include<stdio.h>

int main()

{
   FILE *ptr;
   int num;
    int num2;
   ptr = fopen("test.txt", "r");\
   fscanf(ptr, "%d", &num);
   fscanf(ptr, "%d", &num2); //Taking integer input from test.txt file.
   fclose(ptr); //Will close the file
   printf("The value of num is: %d\n", num); //This will print the same value where a value was saved in text.txt file.
   printf("The value of num2 is: %d\n", num2); //Will print the next integer
    
    
    return 0;
}

*/

/*

//Checking a file exist or not-->


#include<stdio.h>

int main()

{
   FILE *ptr;
   int num;
    int num2;
   ptr = fopen("test.txt", "r");

   if(ptr == NULL)
   {
    printf("File doesn't exist\n");
   }

   else
   {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2); //Taking integer input from test.txt file.
        fclose(ptr); //Will close the file
        printf("The value of num is: %d\n", num); //This will print the same value where a value was saved in text.txt file.
        printf("The value of num2 is: %d\n", num2); //Will print the next integer
    }
    
    
    return 0;
}

*/



/*

//file writting---->


#include<stdio.h>

int main()

{

    FILE *ptr;
    int number = 45;
    ptr = fopen("Alim.txt", "w");
    fprintf(ptr, "The number is: %d", number);
    fclose(ptr);

    return 0;
}



*/


/*


//Reading a file character by character---->

#include<stdio.h>

int main()

{

    
    FILE *ptr;
    ptr = fopen("demo.txt", "r");
    for(int i = 0; i<14; i++)
    {
        printf("%c", fgetc(ptr));
    }
    return 0;

    
}

*/

/*

//Putting character in file---->
#include<stdio.h>

int main()

{

    FILE *ptr;
    ptr = fopen("Niloy.txt", "w");
    putc('C', ptr);
    putc('B', ptr);
    putc('F', ptr);

    fclose(ptr);

    return 0;
}

*/

/*

//Smplest way to read a file--->
#include<stdio.h>

int main()

{

    FILE *ptr;
    char c;
    ptr = fopen("simple.txt", "r");
    c = getc(ptr);

    while(c != EOF)  //EOF == End of the file
    {
        printf("%c", c);
        c = getc(ptr);
    }


    return 0;
}

*/









