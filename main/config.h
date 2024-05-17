/** \file config.h
 *  Mar 2022
 *  Maestría en SIstemas Embebidos - Sistemas embebidos distribuidos
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/* versión ESP-IDF */
#define ESPIDF_v4 // comentar esta línea para la versión 5

/* configuración WIFI */
#define ESP_WIFI_SSID "HITRON-A440" // "SSID wifi"
#define ESP_WIFI_PASS "CDBD8Hitron" // "pass wifi"

/*  Configuracion MQTT  */
#define PORT_MQTT 1883                        // default
#define IP_BROKER_MQTT "192.168.0.4"          // Broker MQTT
#define USER_MQTT "usuario"                   // Usuario de MQTT
#define PASSWD_MQTT "usuariopassword"         // Contraseña de MQTT

/*  configuración IO */
#define BLINK_GPIO CONFIG_BLINK_GPIO  // port 2 para NodeMcu-23S

/* Configuración CRONO  */


#endif