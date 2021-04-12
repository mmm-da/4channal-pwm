#ifndef __STM32F0xx_IT_H
#define __STM32F0xx_IT_H

void NMI_Handler(void);
void HardFault_Handler(void);
void SVC_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void DMA1_Channel2_3_IRQHandler(void);
void DMA1_Channel4_5_IRQHandler(void);
void TIM1_CC_IRQHandler(void);
void TIM3_IRQHandler(void);
void I2C1_IRQHandler(void);
void USART1_IRQHandler(void);

#endif /* __STM32F0xx_IT_H */
