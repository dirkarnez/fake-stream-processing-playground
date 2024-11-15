// read_binary_file();
// read_text_file();


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

FILE* file = NULL;
const int bufferSize = 5;

void setup() {
    file = fopen("main.c", "r");
    assert(file);
}

unsigned int nth_line = -1;
unsigned int last_new_line_offset = -1;

// while(get_next_line(buffer, sizeof(buffer), file)) {
        
int get_next_line(char *buffer, int n, FILE *stream, int* line_number) {
    if (stream == NULL || n < 1 || buffer == NULL) {
        return -1; // Invalid input
    }
    
    *line_number = 0;
    
    // fgets(str, n, stream);
    // int len = ftell(stream);
    // printf("%s = %d 字节\n", str, len);
    

    // int current_line = 0;

    // // Read lines until the nth line or end of file
    while (fgets(buffer, n, stream)) {
        for (int i = 0; i < sizeof(buffer); i++) {
            if (buffer[i] == '\n') {
                *line_number = *line_number + 1;
                break;
            }
        }
    }

    // Return -1 if the nth line does not exist
    return -1;
}

// fseek( fp, 7, SEEK_SET );
 
void loop() {
    //char buffer[bufferSize];
        
    // while (fgets(buffer, bufferSize, file)) {
    //     printf("->%s<-", buffer);
    // }
    
    // char* line = 
    // get_nth_line(i, file);
    // i++;
     
     
    int line_number = -1;
    char buffer[5];
    while(get_next_line(buffer, sizeof(buffer), file, &line_number)) {
        printf("%d: %s", line_number, buffer);
    }
}


void clean() {
    fclose(file);
}

int main() {
	setup();
// 	while(1){
// 		loop();
// 	}
	loop();
	clean();
}
