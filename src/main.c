#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <strings.h>
#include <assert.h>

FILE* file = NULL;
const int bufferSize = 5;

void setup() {
    file = fopen("main.c", "r");
    assert(file);
}

unsigned int last_new_line_offset = -1;
unsigned int number_of_newlines = 0;

bool found_newline = false;
        
char* get_next_line_from_text_file(char *buffer, int n, FILE *stream, int* line_number) {
    if (stream == NULL || n < 1 || buffer == NULL) {
        return NULL;
    }

    if (found_newline != 0) {
        number_of_newlines = number_of_newlines + 1;
        found_newline = false;
    }
    // read 10 characters which including the invisible \0
    char* ret = fgets(buffer, n, stream);
    if (ret == NULL) {
        return NULL;
    }
    // \0 is always at the last element [n-1]
    for (int i = 0; i < n; i++) {
        if (buffer[i] == '\n') {
            if (i > 0 && buffer[i - 1] == '\r') {
                buffer[i - 1] = '\0';
            } else {
                buffer[i] = '\0';
            }
            found_newline = true;
            break;
        }
    }
    
    if (line_number != NULL) {
        *line_number = number_of_newlines + 1;
    }

    return ret;
}

void loop() {
    int buffer_current_line_number = -1;
    int buffer_previous_line_number = -1;
    
    char buffer[10];
    while(get_next_line_from_text_file(buffer, sizeof(buffer), file, &buffer_current_line_number) != NULL) {
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