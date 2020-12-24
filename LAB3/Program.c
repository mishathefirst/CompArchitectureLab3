#include <reg51.h>
	char x;   
	char code y[]= "This programmator"; 
	char xdata yy[20]; 
	   


main() {
	
	char i; 
	char addition = 0;
  x = 0; 
	
	
	for (i = 0; i < 17; i++) {
		yy[i + addition] = y[i];
		if (y[i] == "r") {
			addition++;
			yy[i + addition] = " ";
		}
	}
	
	
	while(1);
}