/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Y_RPWM_Pin GPIO_PIN_2
#define Y_RPWM_GPIO_Port GPIOA
#define Y_LPWM_Pin GPIO_PIN_3
#define Y_LPWM_GPIO_Port GPIOA
#define X_Enc1_Pin GPIO_PIN_6
#define X_Enc1_GPIO_Port GPIOA
#define X_Enc2_Pin GPIO_PIN_7
#define X_Enc2_GPIO_Port GPIOA
#define X_ENABLE_Pin GPIO_PIN_0
#define X_ENABLE_GPIO_Port GPIOB
#define Y_ENABLE_Pin GPIO_PIN_1
#define Y_ENABLE_GPIO_Port GPIOB
#define X_STEP_Pin GPIO_PIN_12
#define X_STEP_GPIO_Port GPIOB
#define X_STEP_EXTI_IRQn EXTI15_10_IRQn
#define X_DIR_Pin GPIO_PIN_13
#define X_DIR_GPIO_Port GPIOB
#define Y_STEP_Pin GPIO_PIN_14
#define Y_STEP_GPIO_Port GPIOB
#define Y_STEP_EXTI_IRQn EXTI15_10_IRQn
#define Y_DIR_Pin GPIO_PIN_15
#define Y_DIR_GPIO_Port GPIOB
#define X_RPWM_Pin GPIO_PIN_8
#define X_RPWM_GPIO_Port GPIOA
#define X_LPWM_Pin GPIO_PIN_9
#define X_LPWM_GPIO_Port GPIOA
#define Y_Enc1_Pin GPIO_PIN_6
#define Y_Enc1_GPIO_Port GPIOB
#define Y_Enc2_Pin GPIO_PIN_7
#define Y_Enc2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
