#define MICROPY_HW_BOARD_NAME       "FRCMotorTester"
#define MICROPY_HW_MCU_NAME         "STM32F405RG"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LCD          (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SDCARD    (0)

// HSE is 16MHz
#define MICROPY_HW_CLK_PLLM (8)
#define MICROPY_HW_CLK_PLLN (168)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

// The pyboard has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (0)

// UART config
// #define MICROPY_HW_UART1_NAME "XB"
// #define MICROPY_HW_UART1_PORT (GPIOB)
// #define MICROPY_HW_UART1_PINS (GPIO_PIN_6 | GPIO_PIN_7)
// #define MICROPY_HW_UART2_PORT (GPIOA)
// #define MICROPY_HW_UART2_PINS (GPIO_PIN_2 | GPIO_PIN_3)
// #define MICROPY_HW_UART2_RTS  (GPIO_PIN_1)
// #define MICROPY_HW_UART2_CTS  (GPIO_PIN_0)
// #define MICROPY_HW_UART3_NAME "YB"
// #define MICROPY_HW_UART3_PORT (GPIOB)
// #define MICROPY_HW_UART3_PINS (GPIO_PIN_10 | GPIO_PIN_11)
// #define MICROPY_HW_UART3_RTS  (GPIO_PIN_14)
// #define MICROPY_HW_UART3_CTS  (GPIO_PIN_13)
// #define MICROPY_HW_UART4_NAME "XA"
// #define MICROPY_HW_UART4_PORT (GPIOA)
// #define MICROPY_HW_UART4_PINS (GPIO_PIN_0 | GPIO_PIN_1)
// #define MICROPY_HW_UART6_NAME "YA"
// #define MICROPY_HW_UART6_PORT (GPIOC)
// #define MICROPY_HW_UART6_PINS (GPIO_PIN_6 | GPIO_PIN_7)

// I2C buses
// #define MICROPY_HW_I2C1_NAME "X"
// #define MICROPY_HW_I2C1_SCL (pin_B6)
// #define MICROPY_HW_I2C1_SDA (pin_B7)
// #define MICROPY_HW_I2C2_NAME "Y"
// #define MICROPY_HW_I2C2_SCL (pin_B10)
// #define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI buses
#define MICROPY_HW_SPI1_NAME "X"
#define MICROPY_HW_SPI1_NSS  (pin_A4) // X5
#define MICROPY_HW_SPI1_SCK  (pin_A5) // X6
#define MICROPY_HW_SPI1_MISO (pin_A6) // X7
#define MICROPY_HW_SPI1_MOSI (pin_A7) // X8
// #define MICROPY_HW_SPI2_NAME "Y"
// #define MICROPY_HW_SPI2_NSS  (pin_B12) // Y5
// #define MICROPY_HW_SPI2_SCK  (pin_B13) // Y6
// #define MICROPY_HW_SPI2_MISO (pin_B14) // Y7
// #define MICROPY_HW_SPI2_MOSI (pin_B15) // Y8

// CAN buses
#define MICROPY_HW_CAN1_NAME "YA"
#define MICROPY_HW_CAN1_TX   (pin_B9) // Y4
#define MICROPY_HW_CAN1_RX   (pin_B8) // Y3
// #define MICROPY_HW_CAN2_NAME "YB"
// #define MICROPY_HW_CAN2_TX   (pin_B13) // Y6
// #define MICROPY_HW_CAN2_RX   (pin_B12) // Y5

// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
#define MICROPY_HW_USRSW_PIN        (pin_B4)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// The pyboard has 2 LEDs
#define MICROPY_HW_LED1             (pin_B6)
#define MICROPY_HW_LED2             (pin_B7)
//#define MICROPY_HW_LED3_PWM         { TIM2, 2, TIM_CHANNEL_1, GPIO_AF1_TIM2 }
//#define MICROPY_HW_LED4_PWM         { TIM3, 3, TIM_CHANNEL_1, GPIO_AF2_TIM3 }
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS              (1)
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
//#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

