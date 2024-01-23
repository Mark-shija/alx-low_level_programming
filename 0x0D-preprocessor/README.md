# 0x0D. C - Preprocessor
* in this project I learned about Pre-processor step in C programming

* Pre-processor is the step excuted before the compilation process, hence it is not a part of compiler.
* if we can remind ourselves, there are four steps during compilation process namely:
* Preprocessing: The preprocessor (often gcc -E command) processes the source code, handling directives like #include and #define. It produces an expanded version of the code, known as the preprocessed code.

* Compilation: The compiler (e.g., gcc -c command) translates the preprocessed code into assembly code or an intermediate representation.

* Assembly: The assembler (e.g., as command) converts the assembly code into machine code or object code, creating object files (with a .o or .obj extension).

* Linking: The linker (e.g., ld command) combines the object files with libraries and generates the final executable. It resolves references between files and libraries, producing a complete program.

# pre-processor general rule

* Directive: These are commands that tell a compiler to skip part of a file, include another file or 
define another file or macro.All directive commands begin with sharp hash symbol (#)

* constant
#define [indentifier name] [value]
 * Macro like function declaration
#define Macro_Name(arg1, arg2,.....) [code to expand to]
