# 0x0F. C - Function pointers
* publisher: *Maxius Shija*
* Date: Nov 2023.

_ in this project we learned on how to implement function pointers and how to use them._

we can declare a function pointer from function prototype it points to
* example
function prototype:
_ int func(int, int);

function pointer:

int (*ptr) (int, int) = &func;

* unlike normal pointer function pointer store the code and not the data.
from function pointer above "ptr" is the name of function pointer that takes function arguments.
* A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing *, the program still works.

we can call function func() using the function pointer we created and the value of argument. like :

(*ptr)(20, 10);
since we declared a function func() we can define it to have correct invocation 

int func(int a, int b)
{
	return a + b;
}
