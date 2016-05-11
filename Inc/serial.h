#include <stdint.h>

typedef enum {
  SERIAL_TX = 0x01,
  SERIAL_RX = 0x02,
	SERIAL_RXTIMEOUT
} serial_status;

/* We need to implement own __FILE struct */
/* FILE struct is used from __FILE */
struct __FILE {
    int dummy;
};

void Serial_WriteBytes(uint8_t * data, uint32_t length);
void Serial_WriteString(char * str);
void Serial_WriteInt(int32_t i);
void Serial_ExecutePendingTransmits(void);
void Serial_InitRxSequence(void);
void Serial_CheckRxTimeout(void);