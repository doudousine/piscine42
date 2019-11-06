//HOW TO MAKE A MAIN
//
//include the necessary libs

#include <stdio.h> // FORBIDDEN in files you have to return, but you can put it in your main
#include <unistd.h> //ALLOWED
#include <stdlib.h>// ONLY INCLUDE IF YOU HAVE TO USE MALOCC 

//if you need more, just look up man for the function you wanna import
//


//PUT YOUR FONCTION PROTOTYPES OR DEFINITIONS HERE
//THIS IS A PROTOTYPE
//I'm commenting them because these functions arent actually defined
//and compiling this would cause a bug

//int hi_im_defined_in_another_file();
//int to_call_me_put_me_in_the_compilation_command_next_to_main();

//
//THIS IS A DEFINITION

void hi_im_defined_here (char *c) //im passing c in the main to test pointers real quick
{
	write (1, "I exist!\n", 9);
	*c = 'o';
}

void hi_im_defined_here_too (char *s) //im passing c in the main to test pointers real quick
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &(s[i]), 1);
		i++;
	}
	write(1, "\n", 1);
}
//NOW EVERYTHING IS SETUP
//THIS IS THE MAIN

int main(int argc, char **argv)//include args, just to get used to how they work
{
	
	//THIS IS YOUR TESTING FIELD
	//DEFINE YOUR VARIABLES
	int i = 17;
	char c = '!';
	char *s_constant = "i can read this string, but i CAN NOT change it, or the program will crash with BUS ERROR\n";
	//here we're declaring a pointer to the FIRST CHARACTER OF THIS STRING, which is then followed by all the other characters
	char s_editable[] = "i can read this string, AND edit this string, size depends on the lenght of this phrase\n";
	//same thing here, but different notation to show the compiler that string can be changed
	char s_editable_fixed[100] = "i can read this string, AND edit this string, my size is set to 100 MAX by DEFAULT\n";
	//same but with fix value

	//HEAR, CALL YOUR FUNCTIONS
	//AND/OR VISUALIZE RESULTS
	//YOU CAN ALSO JUST USE PYTHON TUTOR
	//BUT IT WILL ALSO NEED A MAIN, JUST NO VISUALIZATION
	
	/* uncommenting this will cause an error on compilation, because im calling
	 * and i have prototypes
	 * but they dont exist outside, they are defined nowhere
	 * to make it work, you'd have to define them somewhere, lets say in test.c
	 * then run this
	 * gcc test.c main.c
		hi_im_defined_in_another_file();
		to_call_me_put_me_in_the_compilation_command_next_to_main();
	*/

	hi_im_defined_here(&c); //C was declared without a pointer, '&' means we're sending his ADRESS, then we will use a pointer to get FETCH that in the function
				//with the '*' notation
	hi_im_defined_here_too(s_constant); //S was declared as a pointer to the beginning of a string, so we can just pass it normally

	printf("la chaine s : %s\n", s_constant); //this is a forbidden functions in files to turn in but you can use it in main for testing and showing values!
					//it takes any number of arguments, and you can type whaatever you want it in, it will print it
					//example below
	printf("la chiffre int i vaut %i et le caractere char c vaut %c ! on n'oublie pas le slashN pour retourner a la ligne a la fin.\n", i, c);
	
	//contact me for questions : sydjbrl@gmail.com
	return (0);
}
