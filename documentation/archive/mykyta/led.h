#ifndef __LED_H
#define __LED_H

#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"

#define LED_4   GPIO_Pin_12
#define LED_3   GPIO_Pin_13
#define LED_5   GPIO_Pin_14
#define LED_6   GPIO_Pin_15

#define LED_GREEN   LED_4
#define LED_ORANGE  LED_3
#define LED_RED     LED_5
#define LED_BLUE    LED_6
#define LED_ALL     LED_4 | LED_3 | LED_5 | LED_6

// Default GPIO_InitTypeDef for leds
#define LED_DEFAULT_CONFIG_GPIO_Pin     LED_ALL
#define LED_DEFAULT_CONFIG_GPIO_Mode    GPIO_Mode_OUT
#define LED_DEFAULT_CONFIG_GPIO_Speed   GPIO_Speed_100MHz
#define LED_DEFAULT_CONFIG_GPIO_OType   GPIO_OType_PP
#define LED_DEFAULT_CONFIG_GPIO_PuPd    GPIO_PuPd_NOPULL

// Function prototypes

/// @brief Get GPIO config and set it by default
/// @param led_config 
/// @return led_config seted by default
GPIO_InitTypeDef led_config_set_default(GPIO_InitTypeDef);

/// @brief Get GPIO config and set it by default for current led
/// @param led_config, led
/// @return led_config seted for current led
GPIO_InitTypeDef led_config_set_default_for(GPIO_InitTypeDef, uint32_t);

// TODO: Add next functions: turn on led, is led turn on, turn off led.

#endif