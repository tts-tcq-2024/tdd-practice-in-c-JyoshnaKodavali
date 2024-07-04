#include <stdlib.h> // For atoi function
#include <string.h> // For strtok function


int add(const char* input){
  return 0;
}

int add(const char* input) {
    // Convert input string to integer
    int num = atoi(input);
    
    // Return the number (for this test case, it's just returning the parsed integer)
    return num;
}

int add(const char* input) {
    // Temporary buffer to hold the input string
    char buffer[256];
    strncpy(buffer, input, sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null termination
    
    // Parse the input string using strtok
    const char* delim = ",";
    char* token = strtok(buffer, delim);
    
    // Variables to hold the numbers and sum
    int sum = 0;
    
    // Loop through tokens and compute sum
    while (token != NULL) {
        sum += atoi(token); // Convert token to integer and add to sum
        token = strtok(NULL, delim); // Get next token
    }
    
    return sum;
}

int add(const char* input) {
    // Temporary buffer to hold the input string
    char buffer[256];
    strncpy(buffer, input, sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null termination
    
    // Parse the input string using strtok
    const char* delimiters = ",\n";
    char* token = strtok(buffer, delimiters);
    
    // Variables to hold the numbers and sum
    int sum = 0;
    
    // Loop through tokens and compute sum
    while (token != NULL) {
        sum += atoi(token); // Convert token to integer and add to sum
        token = strtok(NULL, delimiters); // Get next token
    }
    
    return sum;
}

int add(const char* input) {
    // Temporary buffer to hold the input string
    char buffer[256];
    strncpy(buffer, input, sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null termination
    
    // Parse the input string using strtok
    const char* delimiters = ",";
    char* token = strtok(buffer, delimiters);
    
    // Variables to hold the numbers and sum
    int sum = 0;
    
    // Loop through tokens and compute sum
    while (token != NULL) {
        int num = atoi(token); // Convert token to integer
        if (num <= 1000) {
            sum += num; // Add to sum only if number is <= 1000
        }
        token = strtok(NULL, delimiters); // Get next token
    }
    
    return sum;
}


