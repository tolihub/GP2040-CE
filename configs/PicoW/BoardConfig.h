/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICOW_BOARD_CONFIG_H_
#define PICOW_BOARD_CONFIG_H_

#include "enums.pb.h"

#define BOARD_CONFIG_LABEL "Pico-W"

// Main pin mapping Configuration
//                          // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define PIN_DPAD_UP     2   // UP     | UP     | UP      | UP       | UP     | UP     |
#define PIN_DPAD_DOWN   3   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   | 
#define PIN_DPAD_RIGHT  4   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  | 
#define PIN_DPAD_LEFT   5   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   | 
#define PIN_BUTTON_B1   6   // B1     | A      | B       | Cross    | 2      | K1     |
#define PIN_BUTTON_B2   7   // B2     | B      | A       | Circle   | 3      | K2     |
#define PIN_BUTTON_R2   8   // R2     | RT     | ZR      | R2       | 8      | K3     |
#define PIN_BUTTON_L2   9   // L2     | LT     | ZL      | L2       | 7      | K4     |
#define PIN_BUTTON_B3   10  // B3     | X      | Y       | Square   | 1      | P1     |
#define PIN_BUTTON_B4   11  // B4     | Y      | X       | Triangle | 4      | P2     |
#define PIN_BUTTON_R1   12  // R1     | RB     | R       | R1       | 6      | P3     |
#define PIN_BUTTON_L1   13  // L1     | LB     | L       | L1       | 5      | P4     |
#define PIN_BUTTON_S1   16  // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define PIN_BUTTON_S2   17  // S2     | Start  | Plus    | Start    | 10     | Start  |
#define PIN_BUTTON_L3   18  // L3     | LS     | LS      | L3       | 11     | LS     |
#define PIN_BUTTON_R3   19  // R3     | RS     | RS      | R3       | 12     | RS     |
#define PIN_BUTTON_A1   20  // A1     | Guide  | Home    | PS       | 13     | ~      |
#define PIN_BUTTON_A2   21  // A2     | ~      | Capture | ~        | 14     | ~      |
#define PIN_BUTTON_FN   -1  // Hotkey Function                                        |

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   | 
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  | 
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   | 
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define BOARD_LEDS_PIN 28

#define LED_BRIGHTNESS_MAXIMUM 50
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 1

#define LEDS_DPAD_LEFT   0
#define LEDS_DPAD_DOWN   1
#define LEDS_DPAD_RIGHT  2
#define LEDS_DPAD_UP     3
#define LEDS_BUTTON_B3   4
#define LEDS_BUTTON_B4   5
#define LEDS_BUTTON_R1   6
#define LEDS_BUTTON_L1   7
#define LEDS_BUTTON_B1   8
#define LEDS_BUTTON_B2   9
#define LEDS_BUTTON_R2   10
#define LEDS_BUTTON_L2   11

#define HAS_I2C_DISPLAY 1
#define I2C_SDA_PIN 0
#define I2C_SCL_PIN 1
#define I2C_BLOCK i2c0
#define I2C_SPEED 400000
#define DISPLAY_FLIP 0
#define DISPLAY_INVERT 0
#define DISPLAY_SAVER_TIMEOUT 0

#define BUTTON_LAYOUT BUTTON_LAYOUT_STICK
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_VEWLIX
#define SPLASH_MODE SPLASH_MODE_NONE
#define SPLASH_CHOICE SPLASH_CHOICE_MAIN
#define SPLASH_DURATION 7500

#endif