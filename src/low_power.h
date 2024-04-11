/**
  ******************************************************************************
  * @file    LowPower.h
  * @author  Frederic Pillon
  * @brief   Header for Low Power module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2020 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LOW_POWER_H
#define __LOW_POWER_H

/* Includes ------------------------------------------------------------------*/
#include "stm32_def.h"
#if 0
#include "uart.h"
#endif

#if defined(HAL_PWR_MODULE_ENABLED) && !defined(HAL_PWR_MODULE_ONLY)

#ifdef __cplusplus
extern "C" {
#endif

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void LowPower_init();
void LowPower_EnableWakeUpPin(PinName pin, uint32_t mode);
#if 0
void LowPower_EnableWakeUpUart(serial_t *serial, void (*FuncPtr)(void));
#endif
void LowPower_sleep(uint32_t regulator);
#if 0
void LowPower_stop(serial_t *obj);
#else
void LowPower_stop(void);
#endif
void LowPower_standby(void);
void LowPower_shutdown(bool isRTC);
/* Weaked function */
void SystemClock_ConfigFromStop(void);
#ifdef __cplusplus
}
#endif

#endif /* HAL_PWR_MODULE_ENABLED  && !HAL_PWR_MODULE_ONLY */

#endif /* __LOW_POWER_H */
