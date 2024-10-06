#include <stdio.h>
#include "display_manager.h"
#include "hd44780.h"
#include "pcf8574.h"

void lcd_screen_menu_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin);
void lcd_screen_time_edit_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin);
void lcd_screen_accept_config_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin);
void lcd_screen_running_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin);
void lcd_screen_cancel_process_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin);


lcd_screen_manager_t lcd_screen_managers[] = {
        lcd_screen_menu_manager,
        lcd_screen_time_edit_manager,
        lcd_screen_accept_config_manager,
        lcd_screen_running_manager,
        lcd_screen_cancel_process_manager
};

/**
 * @brief 
 * 
 * @param screen 
 * @param cursor_pos 
 * @param button_pin 
 */
void lcd_screen_menu_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin){
    if(!screen || !cursor_pos)
        return;
}

/**
 * @brief 
 * 
 * @param screen 
 * @param cursor_pos 
 * @param button_pin 
 */
void lcd_screen_time_edit_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin){
    if(!screen || !cursor_pos)
        return;
}

/**
 * @brief 
 * 
 * @param screen 
 * @param cursor_pos 
 * @param button_pin 
 */
void lcd_screen_accept_config_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin){
    if(!screen || !cursor_pos)
        return;
}

/**
 * @brief 
 * 
 * @param screen 
 * @param cursor_pos 
 * @param button_pin 
 */
void lcd_screen_running_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin){
    if(!screen || !cursor_pos)
        return;
}

/**
 * @brief 
 * 
 * @param screen 
 * @param cursor_pos 
 * @param button_pin 
 */
void lcd_screen_cancel_process_manager(display_states_t *screen, int8_t *cursor_pos, uint8_t button_pin){
    if(!screen || !cursor_pos)
        return;
}