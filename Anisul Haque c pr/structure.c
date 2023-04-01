/*Structure: The collection of different data types var
-able
--this is also called as user define data type*/


/*#include<stdio.h>
//defining global structure--->
struct person
{
   int age;
   float salary;

};
int main()
{
   struct person person1, person2;
   person1.salary = 27000.500;
   person1.age = 34;
   printf("Information for person1: \n");
   printf("Salary of person1: %.3f\n", person1.salary);
   printf("Age of person1: %d\n", person1.age);

   person2.age = 45;
   person2.salary = 30000.700;
   printf("Information for person2: \n");
   printf("Salary of person2: %.3f\n", person2.salary);
   printf("Age of person2: %d\n", person2.age);
}*/



/*#include<stdio.h>
#include<string.h>
//global structure-->
struct person
{
  char name[10];
  int age;
  float sallary;
};
int main()
{ struct person person1, person2;
  printf("Enter The person1 name: \n");
  gets(person1.name);
  printf("Enter age of person1: \n");
  scanf("%d", &person1.age);
  printf("Enter the salary of person1: \n");
  scanf("%f", &person1.sallary);
  printf("\n\nPerson1 details: \n");
  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Salary: %.2f\n", person1.sallary);
}*/

//Directly initialize the structure member--->
/*#include<stdio.h>
int main()
struct person{
  int age;
  int salary;
};
{
   struct person person1 = {30, 340000};
   printf("Information of person1: \n");
   printf("Age: %d", person1.age);
   printf("\nSalary: %d", person1.salary);
}*/

//Array of structure--->
/*#include<stdio.h>
#include<string.h>
struct person{

  
  int age;
  float salary;

};
int main()
{
  struct person men[4];
  int i;
  for(i=0; i<4; i++)
  {
    printf("\nEnter information for Person: %d\n", i+1);
    
    printf("Enter age: ");
    scanf("%d", &men[i].age);
    printf("Enter salary: ");
    scanf("%f", &men[i].salary);
  }

  for(i=0; i<4; i++)
  {
    printf("\n\nInformation for person %d\n", i+1);
    
    
    printf("Age: %d\n", men[i].age);
    
    printf("Salary: %.2f\n", men[i].salary);
    
  }
}*/

//Declaring array in structure--->
/*#include<stdio.h>
#include<string.h>
struct person{
  char name[50];
  int age;
  float salary;
};
int main()
{
  struct person person[4];
  for(int i=0; i<4; i++)
  {
    printf("\nEnter information for person %d\n", i+1);
    printf("Enter name: ");
    fflush(stdin); //Troubleshoot for scanning string problem----> fflush(stdin)
    gets(person[i].name);
    printf("Enter age: ");
    scanf("%d", &person[i].age);
    printf("Enter salary: ");
    scanf("%.f", &person[i].salary);
  }

  for(int i=0; i<4; i++)
  {
    printf("\nInformation for person %d\n", i+1);
    printf("Name: %s\n", person[i].name);
    printf("Age: %d\n", person[i].age);
    printf("Salary: %.2f\n", person[i].salary);
  }

  return 0;
}*/


//Using function with structure---.
/*#include<stdio.h>
#include<string.h>
struct person{
  char name[45];
  int age;
  float salary;
};

void display(struct person p)
{
  printf("Information for person x: \n");
  printf("Name: %s", p.name);
  printf("\nAge: %d", p.age);
  printf("\nSalary: %.3f", p.salary);
}

int main()
{
  struct person person1;
  printf("Enter the name for person-1: ");
  gets(person1.name);
  printf("Enter age: ");
  scanf("%d", &person1.age);
  printf("Enter the salary: ");
  scanf("%f", &person1.salary);

  display(person1);  

}*/

//Another way--->

/*#include<stdio.h>
#include<string.h>
struct person{
  char name[45];
  int age;
  float salary;
};

void display(struct person p)
{
  printf("Information for person x: \n");
  printf("Name: %s", p.name);
  printf("\nAge: %d", p.age);
  printf("\nSalary: %.3f", p.salary);
}

int main()
{
  struct person person1;
  strcpy(person1.name, "Naeem");
  person1.age = 45;
  person1.salary = 450000;

  display(person1);  

}*/


//Size of stucture---->
/*#include<stdio.h>
struct ID
{
   char name[20];
   int age;
   float salary;
};

struct  person
{
  int x;
  double y;
};

int main()
{
   struct ID id;
   struct person p;
   int result1 = sizeof(id.name)+sizeof(id.age)+sizeof(id.salary);

   printf("Size of struct id: %d + %d + %d = %d\n", sizeof(id.name), sizeof(id.age), sizeof(id.salary), result1);

   int result2 = sizeof(p.x)+sizeof(p.y);

   printf("Size of struct person: %d + %d = %d\n", sizeof(p.x), sizeof(p.y), result2);
}*/


#include<stdio.h>
#include<string.h>


struct person
{
    char name[20];
    int age;
    float salary;
};

int main()

{
    struct person m1;
    strcpy(m1.name, "Niloy");
    m1.salary = 45000.33;
    m1.age = 23;

    printf("Informaton for Person-1: \n");
    printf("Name: %s\n", m1.name);
    printf("Age: %d\n", m1.age);
    printf("Salary: %.2f\n", m1.salary);
    

    return 0;
}