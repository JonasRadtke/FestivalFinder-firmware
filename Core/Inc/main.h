/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_3_Pin GPIO_PIN_0
#define BUTTON_3_GPIO_Port GPIOA
#define LED_DOUT_Pin GPIO_PIN_1
#define LED_DOUT_GPIO_Port GPIOA
#define RFM_DIO0_Pin GPIO_PIN_0
#define RFM_DIO0_GPIO_Port GPIOB
#define RFM_DIO1_Pin GPIO_PIN_1
#define RFM_DIO1_GPIO_Port GPIOB
#define POWER_SEL_Pin GPIO_PIN_11
#define POWER_SEL_GPIO_Port GPIOA
#define BUTTON_1_Pin GPIO_PIN_12
#define BUTTON_1_GPIO_Port GPIOA
#define RFM_RESET_Pin GPIO_PIN_15
#define RFM_RESET_GPIO_Port GPIOA
#define CHARGE_EN_Pin GPIO_PIN_5
#define CHARGE_EN_GPIO_Port GPIOB
#define QON_Pin GPIO_PIN_6
#define QON_GPIO_Port GPIOB
#define BUTTON_2_Pin GPIO_PIN_7
#define BUTTON_2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
