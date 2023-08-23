#ifndef DHT11_H_
#define DHT11_H_

#include "driver/gpio.h"

#define DHT_GPIO 25

enum dht11_status
{
    DHT11_CRC_ERROR = -2,
    DHT11_TIMEOUT_ERROR,
    DHT11_OK
};

struct dht11_reading
{
    int status;
    int temperature;
    int humidity;
};
extern struct dht11_reading dht11_cur_data;
/**
 * Starts DHT11 sensor task.
 */
void DHT11_task_start(void);

/**
 * Function prototypes
 */

void DHT11_init(gpio_num_t);

struct dht11_reading DHT11_read();

#endif