/**
  ******************************************************************************
  * @file    dht22.h 
  * @author  Joe Todd
  * @version 
  * @date    
  * @brief   Header for dht22.c
  *
  ******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DHT22_H__
#define __DHT22_H__

#include <stdbool.h>
#include <stdint.h>


/* #define DEBUG    */

extern uint16_t dht22_get_humidity(void);
extern int16_t dht22_get_temp(void);
extern bool dht22_read(void);
extern bool dht22_check_checksum(void);
extern uint8_t dht22_get_checksum(void);

#ifdef DEBUG
extern void dht22_print(void);
#endif

#endif
