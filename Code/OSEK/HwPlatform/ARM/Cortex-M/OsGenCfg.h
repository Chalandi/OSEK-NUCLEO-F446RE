// **********************************************************************************************************************
//                                                  OSEK OS Configuration                                                
// **********************************************************************************************************************
// Note: This file is automatically generated from the Excel file OsekCfg.xlsm, Please do not modify it manually !
// **********************************************************************************************************************

// **********************************************************************************************************************
// Filename        : osGenCfg.h
// 
// Author          : Chalandi Amine
//
// Owner           : Chalandi Amine
// 
// Excel File      : D:\GHS_PRJ\MyOSEK\Osek_Renesas\SW\OSEK\HwPlatform\Renesas\F1x\R7F701035\Generator\OsekCfg.xlsm
// 
// Generation Date : February 21, 2020 16:20
// 
// Description     : OSEK based application config
// 
// **********************************************************************************************************************

#include "OsGenMac.h"


//=============================================================================
//  OS Configuration
//=============================================================================

OS_CONFIG_BEGIN

  OS_TASK_BEGIN
    OS_TASK_DEF(T1, 1, 1024, 1, OS_AUTOSTART, EXTENDED, FULL_PREEMPT)
    OS_TASK_DEF(T2, 5, 1024, 1, OS_AUTOSTART, EXTENDED, FULL_PREEMPT)
  OS_TASK_END
  
  OS_EVENT_BEGIN
    OS_EVENT_DEF(EVT_BLINK_GREEN_LED_FAST, (1UL << 0))
    OS_EVENT_DEF(EVT_BLINK_GREEN_LED_SLOW, (1UL << 1))
  OS_EVENT_END
  
  OS_ALARM_BEGIN
    OS_ALARM_DEF(ALARM_BLINK_GREEN_LED_FAST, ALARM_SET_EVENT, EVT_BLINK_GREEN_LED_FAST, T1, 0                )
    OS_ALARM_DEF(ALARM_BLINK_GREEN_LED_SLOW, ALARM_SET_EVENT, EVT_BLINK_GREEN_LED_SLOW, T2, 0                )
    OS_ALARM_DEF(ALARM_BLINK_GREEN_LED_FREQ, ALARM_CALLBACK ,                        0,  0, ToggleTheGreenLed)
  OS_ALARM_END
  
  OS_RESOURCE_BEGIN
    OS_RESOURCE_DEF(RES_SCHEDULER, RES_SCHEDULER_PRIO, { 1,1 })
  OS_RESOURCE_END

OS_CONFIG_END

//=============================================================================
//  FE Interrupts Configuration
//=============================================================================

OS_FE_INTERRUPT_BEGIN
  OS_FE_INTERRUPT_CAT2_DEF(FeUndefined) /* FEINT 000 */
OS_FE_INTERRUPT_END

//=============================================================================
//  EI Interrupts Configuration
//=============================================================================

OS_INTERRUPT_BEGIN
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 0 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 1 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 2 --> NMI
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 3 --> HardFault
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 4 --> MemManage
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 5 --> BusFault
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 6 --> UsageFault
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 7 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 8 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 9 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 10 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 11 --> SVCall
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 12 --> Debug Monitor
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 13 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 14 --> PendSV
  OS_INTERRUPT_CAT2_DEF(SysTickTimer, 5, NESTED)  // 15 --> Systick
  OS_INTERRUPT_CAT1_DEF(OsIsr_DummyIntFunc, 4, NOT_NESTED)     // 16 --> WWDG
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 17 --> PVD
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 18 --> TAMP_STAMP
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 19 --> RTC_WKUP
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 20 --> FLASH
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 21 --> RCC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 22 --> EXTI0
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 23 --> EXTI1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 24 --> EXTI2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 25 --> EXTI3
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 26 --> EXTI4
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 27 --> DMA1_Stream0
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 28 --> DMA1_Stream1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 29 --> DMA1_Stream2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 30 --> DMA1_Stream3
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 31 --> DMA1_Stream4
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 32 --> DMA1_Stream5
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 33 --> DMA1_Stream6
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 34 --> ADC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 35 --> CAN1_TX
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 36 --> CAN1_RX0
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 37 --> CAN1_RX1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 38 --> CAN1_SCE
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 39 --> EXTI9_5
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 40 --> TIM1_BRK_TIM9
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 41 --> TIM1_UP_TIM10
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 42 --> TIM1_TRG_COM_TIM11
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 43 --> TIM1_CC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 44 --> TIM2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 45 --> TIM3
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 46 --> TIM4
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 47 --> I2C1_EV
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 48 --> I2C1_ER
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 49 --> I2C2_EV
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 50 --> I2C2_ER
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 51 --> SPI1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 52 --> SPI2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 53 --> USART1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 54 --> USART2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 55 --> USART3
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 56 --> EXTI15_10
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 57 --> RTC_Alarm
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 58 --> OTG_FS WKUP
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 59 --> TIM8_BRK_TIM12
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 60 --> TIM8_UP_TIM13
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 61 --> TIM8_TRG_COM_TIM14
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 62 --> TIM8_CC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 63 --> DMA1_Stream7
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 64 --> FMC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 65 --> SDIO
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 66 --> TIM5
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 67 --> SPI3
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 68 --> UART4
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 69 --> UART5
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 70 --> TIM6_DAC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 71 --> TIM7
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 72 --> DMA2_Stream0
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 73 --> DMA2_Stream1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 74 --> DMA2_Stream2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 75 --> DMA2_Stream3
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 76 --> DMA2_Stream4
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 77 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 78 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 79 --> CAN2_TX
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 80 --> CAN2_RX0
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 81 --> CAN2_RX1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 82 --> CAN2_SCE
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 83 --> OTG_FS
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 84 --> DMA2_Stream5
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 85 --> DMA2_Stream6
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 86 --> DMA2_Stream7
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 87 --> USART6
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 88 --> I2C3_EV
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 89 --> I2C3_ER
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 90 --> OTG_HS_EP1_OUT
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 91 --> OTG_HS_EP1_IN
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 92 --> OTG_HS_WKUP
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 93 --> OTG_HS
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 94 --> DCMI
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 95 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 96 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 97 --> FPU
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 98 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 99 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 100 --> SPI4
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 101 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 102 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 103 --> SAI1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 104 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 105 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 106 --> Reserved
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 107 --> SAI2
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 108 --> QuadSPI
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 109 --> HDMI-CEC
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 110 --> SPDIF-Rx
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 111 --> FMPI2C1
  OS_INTERRUPT_CAT2_DEF(Undefined, 0, NOT_NESTED)     // 112 --> FMPI2C1 error
OS_INTERRUPT_END


//=============================================================================
//  Hooks Configuration
//=============================================================================
#define STARTUPHOOK            0
#define ERRORHOOK              0
#define SHUTDOWNHOOK           0
#define PRETASKHOOK            0
#define POSTTASKHOOK           0

//=============================================================================
//  Interrupt Configuration
//=============================================================================
#define FE_INTERRUPT           0
#define INTERRUPT              1


//=============================================================================
//  Clock Configuration
//=============================================================================
#define CPU_FREQ_MHZ           80U
#define SYS_TICK_US            1000U


//=============================================================================
//  Interrupt Mask Configuration
//=============================================================================
#define OS_CAT1_PRIO_MASK       3U

