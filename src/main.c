read_binary_file();
read_text_file();




iterators

int main() {
	setup();
while(true){
loop();
}
}

var file = null;
setup(){
file = read_binary_file();
}
loop(){
file
}


#include <stdio.h>
int main() {
    FILE* file = fopen("example.txt", "r");
    if (file) {
        const int bufferSize = 256;
        char buffer[bufferSize];
        
        while (fgets(buffer, bufferSize, file)) {
            std::cout << buffer;
        }
        
        fclose(file);
    }
    
    return 0;
}
