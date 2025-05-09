/*
 * stm32f407xx_gpio_drive.h
 *
 *  Created on: Apr 30, 2025
 *      Author: Hareesh
 */

#ifndef INC_STM32F407XX_GPIO_DRIVE_H_
#define INC_STM32F407XX_GPIO_DRIVE_H_

#include <stm32f407xx.h>

/*GPIO configuration structure */
typedef struct{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPupdControl;
	uint8_t GPIO_PinOPtype;
	uint8_t GPIO_PinAltFunMode;
}GPIO_PinConfig_t;
/*GPIO handle structure*/
typedef struct{
	GPIOx_RegDef_t *pGPIOx;
	GPIO_PinConfig_t	GPIO_confg;
	char	GPIO_Port;
}GPIO_handle_t;
#endif /* INC_STM32F407XX_GPIO_DRIVE_H_ */

/*GPIO PIN Numbers*/
#define GPIO_PIN_0	0
#define GPIO_PIN_1	1
#define GPIO_PIN_2	2
#define GPIO_PIN_3	3
#define GPIO_PIN_4	4
#define GPIO_PIN_5	5
#define GPIO_PIN_6	6
#define GPIO_PIN_7	7
#define GPIO_PIN_8	8
#define GPIO_PIN_9	9
#define GPIO_PIN_10	10
#define GPIO_PIN_11 11
#define GPIO_PIN_12	12
#define GPIO_PIN_13	13
#define GPIO_PIN_14	14
#define GPIO_PIN_15	15

/**GPIO PIN MODES**/
#define GPIO_MODE_IN		0
#define GPIO_MODE_OUT		1
#define GPIO_MODE_ALTFN		2
#define GPIO_MODE_ANALOG	3
#define GPIO_MODE_IT_FT		4
#define GPIO_MODE_IT_RT		5
#define GPIO_MODE_IT_FRT	6
/***GPIO OUTPUT TYPE********/
#define GPIO_OUTTYPE_PP		0
#define GPIO_OUTTYPE_OD		1
/******GPIO PIN SPEEDS ******/
#define GPIO_SPEED_LOW		0
#define GPIO_SPEED_MEDIUM	1
#define GPIO_SPEED_HIGH		2
#define GPIO_SPEED_V_HIGH	3

/********GPIO PIN PULUP/DOWN************/
#define GPIO_NO_PUPD		0
#define GPIO_PU				1
#define GPIO_PD				2

/*GPIO API's */
/*GPIO Peripharal clock control*/
void GPIO_PeripClkCntr(GPIOx_RegDef_t *pGPIOx, uint8_t EnorDI);
void GPIO_PeripClkCntr_Alt(char GPIO_Port, uint8_t EnorDI);
/*GPIO Init and Dinit*/
void GPIO_Init(GPIO_handle_t *pGPIOHandle);
void GPIO_Dinit(GPIOx_RegDef_t *pGPIOx);
/*Data read and write*/
uint8_t GPIO_ReadfromInputPin(GPIOx_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadfromInputPort(GPIOx_RegDef_t *pGPIOx);
void GPIO_WritetoOutputPin(GPIOx_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WritetoOutputPort(GPIOx_RegDef_t *pGPIOx,uint16_t Value);
void GPIO_ToggleOutPin(GPIOx_RegDef_t *pGPIOx, uint8_t PinNumber);
/*IRQ configurations and ISR handling*/
void GPIO_IRQConfig(uint8_t IRQnuber, uint8_t EnorDi );
void GPIO_IRQPriority_Config(uint8_t IRQnumber, uint32_t Priority);
void GPIO_IRQHandling(uint8_t PinNumber);
