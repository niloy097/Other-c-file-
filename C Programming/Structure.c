#include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[20];

};
int main()
{
    struct student s;
    printf("Enter your id: \n");
    scanf("%d", &s.id);
    printf("Enter your cgpa: \n");
    scanf("%f", &s.cgpa);
    printf("Enter your Name: \n");
    scanf("%s", s.name);

    printf("Name: %s; id: %d; cgpa: %f\n", s.name, s.id, s.cgpa);
    return 0;
}
/*
#include<stdio.h>
struct Student
{
  int id;
  float cgpa;
  char name[20];
};

int main()
{
  struct Student s;
  
  printf("Enter your id: \n");
  scanf("%d", &s.id);
  printf("Enter your cgpa: \n");
  scanf("%f", &s.cgpa);
  printf("Enter your name: \n");
  scanf("%s", &s.name);

  printf("Name: %s, ID: %d, CGPA: %f", s.name, s.id, s.cgpa);
  return 0;
  
}
*/
/*
#include<stdio.h>
struct Book
{
  int Shelf_num;
  char name[20];
  char writer_name[20];
  char publisher[20];
  int pages;
  float price;

};

int main()
{
   struct Book s;
   
   printf("Enter shelf number: ");
   scanf("%d", &s.Shelf_num);
   printf("Enter Book name: " );
   scanf("%s", &s.name);
   printf("Enter Writter name: ");
   scanf("%s", &s.writer_name);
   printf("Enter Publisher name: ");
   scanf("%s", &s.publisher);
   printf("Enter number of pages: ");
   scanf("%d", &s.price);
   printf("Enter books price:");
   scanf("%f", &s.price);
   printf("\nYour Book details is given below: \n");
   printf("Shelf number: %d\n", s.Shelf_num );
   printf("Book name: %s \n", s.name);
   printf("Writter name: %s \n", s.writer_name);
   printf("Publisher name: %s\n", s.publisher);
   printf("Total pages: %d\n", s.pages);
   printf("Price: %.2f\n", s.price);
   return 0;
}
*/