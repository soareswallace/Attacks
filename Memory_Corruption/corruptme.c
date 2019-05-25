/* Shellter Labs - Welcome Lesson (Binary exploitation - Memory corruption)
 * Author: intrd - http://dann.com.br
 */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
  volatile int var1;
  char buffer[40];
  if(argc == 1) {
      errx(1, "missing argument..");
  }
  var1 = 0;
  strcpy(buffer, argv[1]);
  if(var1 != 0) {
		printf("\n>> Wow, you win! you've changed the variable value to: 0x%08x\n", var1);
	} else {
    printf("Nope! try again.. the variable stills storing the 0 value.\n");
	}
}