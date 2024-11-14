read_binary_file();
read_text_file();



#include <stdio.h>

int main() {
	setup();
	while(true){
		loop();
	}
}


	
    // FILE* file = fopen("main.c", "r");
    // if (file) {
    //     const int bufferSize = 256;
    //     char buffer[bufferSize];
        
    //     while (fgets(buffer, bufferSize, file)) {
    //         printf("%s", buffer);
    //     }
        
    //     fclose(file);
    // }
    
