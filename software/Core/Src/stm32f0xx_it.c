#include "main.h"
#include "stm32f0xx_it.h"

extern DMA_HandleTypeDef hdma_i2c1_rx;
extern DMA_HandleTypeDef hdma_i2c1_tx;
extern I2C_HandleTypeDef hi2c1;
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim3;
extern DMA_HandleTypeDef hdma_usart1_rx;
extern DMA_HandleTypeDef hdma_usart1_tx;
extern UART_HandleTypeDef huart1;

void NMI_Handler(void){

}

void HardFault_Handler(void){
  while (1){

  }
}

void SVC_Handler(void){

}


void PendSV_Handler(void){

}

void SysTick_Handler(void){
  HAL_IncTick();
}

void DMA1_Channel2_3_IRQHandler(void){
  HAL_DMA_IRQHandler(&hdma_i2c1_tx);
  HAL_DMA_IRQHandler(&hdma_i2c1_rx);
}

void DMA1_Channel4_5_IRQHandler(void){
  HAL_DMA_IRQHandler(&hdma_usart1_tx);
  HAL_DMA_IRQHandler(&hdma_usart1_rx);
}

void TIM1_CC_IRQHandler(void){
  HAL_TIM_IRQHandler(&htim1);
}


void TIM3_IRQHandler(void){
    HAL_TIM_IRQHandler(&htim3);
}

void I2C1_IRQHandler(void){
  if (hi2c1.Instance->ISR & (I2C_FLAG_BERR | I2C_FLAG_ARLO | I2C_FLAG_OVR)) {
    HAL_I2C_ER_IRQHandler(&hi2c1);
  } else {
    HAL_I2C_EV_IRQHandler(&hi2c1);
  }
}

void USART1_IRQHandler(void){
  HAL_UART_IRQHandler(&huart1);
}
