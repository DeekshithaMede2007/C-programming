#include <stdio.h> 
struct Status { 
    unsigned int isOn : 1; 
    unsigned int isError : 1; 
    unsigned int mode : 2; // Can store values from 0 to 3 
}; 
int main() { 
    struct Status device = {1, 0, 2}; 
    printf("isOn: %u, isError: %u, mode: %u\n", device.isOn, device.isError, device.mode); 
    return 0; 
} 
