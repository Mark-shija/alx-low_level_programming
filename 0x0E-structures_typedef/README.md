# 0x0E. C - Structures, typedef 
   **  0x0d. Structures.pdf
   **  struct (C programming language)
   **  Documentation: structures
   *** 0x0d. Typedef and structures.pdf
   **  typedef
   ** Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
   **  The Lost Art of C Structure Packing (Advanced - not mandatory)
# what is structure in C
** Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure. Unlike an array, a structure can contain many different data types (int, float, char, etc.).

## How to create a structure
** You can create a structure by using the struct keyword and declare each of its members inside curly braces
*** Example

struct student {
	char name;
	char classLevel;
	int age;
	char phone;
};
we normally end the structure with the semi-colon
## How to access a structure
To access the structure, you must create a variable of it.Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the structure variable:
int main() {
  struct student student1;

  return 0;
}

## To access structure member
 To access members of a structure, use the dot syntax (.)
However, -> can also be used to access structure member. Have a look on the folllowing example

int main() {
  struct student student1;
  studdent1.name = "Laurent";
  student1.classLevel = "NTA Level 9";
  return 0;
} 
you can use printf() to print the output
  printf(" student1 name is: %s\n", student1.name);
  printf("He or she is %d years old\n", student1.age)
