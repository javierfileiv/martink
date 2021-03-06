#pragma once

#if defined(CONFIG_STM32F103) || defined(CONFIG_STM32F100MDVL)
#include "CMSIS/stm32f10x.h"
#include "f10x/stm32f10x_usart.h"
#include "f10x/stm32f10x_i2c.h"
#include "f10x/stm32f10x_gpio.h"
#include "f10x/stm32f10x_spi.h"
#include "f10x/stm32f10x_rcc.h"
#include "f10x/stm32f10x_tim.h"
#include "f10x/stm32f10x_adc.h"
#include "f10x/stm32f10x_dma.h"
#include "f10x/misc.h"
#endif

#include "uart.h"
#include "gpio.h"
#include "time.h"
#include "spi.h"
#include "twi.h"
#include "pwm.h"
#include "adc.h"
#include "clock.h"

//#define eeprom_update_block(a, b, c) {}
//#define eeprom_read_block(a, b, c) {}
