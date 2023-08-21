# 0x18-dynamic_libraries
A dynamic library, also known as a shared library, is a type of library in computer programming that contains reusable code, functions, and resources that can be used by multiple programs. Unlike static libraries, which are included entirely within each program that uses them, dynamic libraries are loaded into memory at runtime, and multiple programs can share the same copy of the library. This helps in reducing the overall disk space usage and memory consumption, as well as allowing updates to the library without recompiling every program that uses it.

Here's how dynamic libraries work:

Compilation: Dynamic libraries are compiled similarly to regular source code. However, the resulting compiled code is not directly included in the final executable.

Linking: During the linking phase, the program's binary contains references to the functions and resources in the dynamic library, but not the actual implementation of those functions.

Loading at Runtime: When the program is run, the operating system's dynamic linker loads the necessary dynamic libraries into memory based on the references in the program's binary.

Symbol Resolution: The dynamic linker resolves the references to the functions in the dynamic library by finding the corresponding implementations in the loaded library. This process is known as symbol resolution.

Execution: The program executes as usual, using the functions and resources provided by the loaded dynamic library.