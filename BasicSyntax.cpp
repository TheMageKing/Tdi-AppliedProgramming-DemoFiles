//Hello, World!
//This is a comment.  The two slashes cause the compiler to ignore
//all text after them


#include <iostream>//This is a 'preprocessor directive'.
//It tells the compiler to include the functions and such defined in iostream
//It may look familiar to python users: yes, it does serve the same purpose
//As a side note, this is read as I/O Stream: I/O stands for Input/Output

//Now we start the real meat of the code




/*
  Below is a function declaration: but it's also a SPECIAL function.  main() is where
  the program execution begins: when you hit 'run', its where the computer starts
  (after compiling your code).  

  Also, this is a special type of comment (as seen by the coloring): it's a 'multiline' comment
*/
int main(){
// All functions are declared like this:  return_type + function name(arguments){
// In this case, the return type is INTeger, the name is main, and there are no arguments
// The brackets are used to mark a block of code: we'll use them again, later.

    //Here is one way of printing stuff.  It's inherited from C:
    //it is VERY simple, but doesn't handle more advanced C++ constructs as well.
    printf("hi"); //printf stands for print formatted.
    print("world");//Whoops! I made a mistake! Note the red line under print: it's not defined!

    //Normal functions must return something here.  But main() implicitly returns zero.
    //By convention, return values of zero indicate success, and any other value is an error code.

    //return 451; //commented out code doesn't execute
    /*        ^ is a reference.  Ten points* to whoever tells me what it is to!



            *points not redeemable for anything, at all, ever, period.
    */
             
            


}