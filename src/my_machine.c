#include "driver.h"

#ifdef EEPROM_ENABLE
#include "eeprom/eeprom.h"
#endif

#ifdef HAS_BOARD_INIT

void board_init (void)
{
#ifdef EEPROM_ENABLE
	i2c_eeprom_init();
#endif
}

#endif
