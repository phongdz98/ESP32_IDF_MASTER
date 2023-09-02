#ifndef APP_NVS_H_
#define APP_NVS_H_

#include "esp_wifi_types.h"

/**
 * Save station mode WiFi credentials to NVS
 * @return ESP_OK if successful.
*/
esp_err_t app_nvs_save_sta_creds(void);

/**
 * Loads the previously saved credentials were found. 
*/
bool app_nvs_load_sta_creds(void);

/**
 * Clears station mode credentials from NVS
 * @return ESP_OK if successful.
*/
esp_err_t app_nvs_clear_sta_creds(void);

#endif