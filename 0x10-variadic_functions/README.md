# 0x10. C - Variadic functions
# published by Mark Shija
in this project I learned about Variadic  Functions in C.
* variadic function is also termed as variable argument functions. since day one we have been implementing functions with fixed arguments.
eXample: int max_number(int a, int b)


* when we want to write a function that can take more than one arguments, we normallly use variadic functions.

# The syntax variadic functions
* to write a variadic function we use va_list, va_start, and va_arg macros from stdarg.h library

* va_list - is like a school bg that can be used to store books.
** va_list bag_name.


va_start: is a macro that act is used to open a bag.This is like saying, "Hey bag, get ready, I'm going to put books in you!"
In C, we use va_start to do this. It's like saying, "Start paying attention, bag or opening a bag.
* va_start(bag_name, last_instance_arg)


* va_arg:** Now, you start putting books into the bag. You put them in one by one.In C, you use va_arg for this. It's like saying, "Hey bag, take in the first book!" And then you say, "take in  the next on !" and so on.You also tell the bag what type of book you expect, like "I want Mabala The Farmer" or "Kilio Chetu."**
*  va_arg(bag_name, Book_type)



