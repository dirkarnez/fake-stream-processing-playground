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

unsigned int last_new_line_offset = -1;
unsigned int number_of_newlines = 0;

int found_newline = 0;
// while(get_next_line(buffer, sizeof(buffer), file)) {
        
char* get_next_line(char *buffer, int n, FILE *stream, int* line_number) {
    if (stream == NULL || n < 1 || buffer == NULL) {
        return NULL;
    }
    
    
    // fgets(str, n, stream);
    
    // printf("%s = %d 字节\n", str, len);
    

    if (found_newline != 0) {
         number_of_newlines = number_of_newlines + 1;
         found_newline = 0;
    }

    found_newline = 0;
    // // Read lines until the nth line or end of file
    char* ret = fgets(buffer, n, stream);
    for (int i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] == '\n') {
            buffer[i] = '\0';
            // fseek( stream, -5 , SEEK_CUR );
            found_newline = 1;
            break;
        }
    }
    
    
    *line_number = number_of_newlines + 1;
    
    //last_new_line_offset = ftell(stream);
    
    // Return -1 if the nth line does not exist
    return ret;
}

// 
 
void loop() {
    int buffer_current_line_number = -1;
    int buffer_previous_line_number = -1;
    
    char buffer[10];
    while(get_next_line(buffer, sizeof(buffer), file, &buffer_current_line_number) != NULL) {
        if (buffer_current_line_number != buffer_previous_line_number) {
            printf("\n%d: ", buffer_current_line_number);
        }
        printf("%s", buffer);
        buffer_previous_line_number = buffer_current_line_number;
    }
}


void clean() {
    fclose(file);
}

int main() {
	setup();
	while(1){
		loop();
	}
	clean();
}
