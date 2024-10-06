#include <stdio.h>
#include <stdint.h>

typedef enum {
    SCREEN_MENU = 0,
    SCREEN_TIME_EDIT = 1,
    SCREEN_ACCEPT_CONFIG = 2,
    SCREEN_RUNNING = 3,
    SCREEN_CANCEL_PROCESS = 4
} display_states_t;

typedef void (*lcd_screen_manager_t)(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin);