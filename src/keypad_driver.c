#include <gpio.h>
#include <keypad_driver.h>
#include <unistd.h>

void keypad_init(){
    return;
}

char keypad_read(){
    return '\0';
}





// #include <gpio.h>
// #include <keypad_driver.h>
// #include <unistd.h>

// // Assume a 3x3 keypad
// #define ROWS 3
// #define COLS 3

// // Define GPIO pins for rows and columns
// #define ROW1_PIN GPIO_PIN_0
// #define ROW2_PIN GPIO_PIN_1
// #define ROW3_PIN GPIO_PIN_2
// #define COL1_PIN GPIO_PIN_3
// #define COL2_PIN GPIO_PIN_4
// #define COL3_PIN GPIO_PIN_5

// void keypad_init() {
//     // Initialize GPIO pins for rows (input with pull-up)
//     gpio_init_input(ROW1_PIN, GPIO_PULL_UP);
//     gpio_init_input(ROW2_PIN, GPIO_PULL_UP);
//     gpio_init_input(ROW3_PIN, GPIO_PULL_UP);

//     // Initialize GPIO pins for columns (output low)
//     gpio_init_output(COL1_PIN, GPIO_LOW);
//     gpio_init_output(COL2_PIN, GPIO_LOW);
//     gpio_init_output(COL3_PIN, GPIO_LOW);
// }

// char keypad_read() {
//     char key = '\0';

//     // Check each column
//     for (int col = 0; col < COLS; col++) {
//         // Set the current column low
//         gpio_set_output(COL1_PIN + col, GPIO_LOW);

//         // Check each row
//         for (int row = 0; row < ROWS; row++) {
//             // If a key is pressed (row is low)
//             if (gpio_read_input(ROW1_PIN + row) == GPIO_LOW) {
//                 // Map the row and column to a key value (customize based on your keypad)
//                 key = '1' + row + col * ROWS;
//             }
//         }

//         // Set the current column high again
//         gpio_set_output(COL1_PIN + col, GPIO_HIGH);
//     }

//     // Delay for stability (adjust as needed)
//     usleep(10000);

//     return key;
// }

// int main() {
//     // Initialize keypad
//     keypad_init();

//     while (1) {
//         // Read key from keypad
//         char pressed_key = keypad_read();

//         // If a key is pressed, print the key
//         if (pressed_key != '\0') {
//             printf("Key pressed: %c\n", pressed_key);
//         }
//     }

//     return 0;
// }

