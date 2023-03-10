# 0x09. C - Static libraries
## Tasks 
* create static library libmy.a containing prototype functions
	* use gcc -c *c command to convert to object files
	* use ar rcs libmy.a
	* use ar -t <filename> & nm <filename>
* create  a script called create_static_lib.sh that creates a static library
called liball.a from all the .c files that are in the current directory.
	* chmod u+x <filename>
