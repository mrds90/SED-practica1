
#include "main.h"
#include "config.h"
#include "report.h"

#define SEC_TO_MS(x) ((x) * 1000)

const char *TAG = "MAIN";


/*******************************************************************************
 Programa principal
******************************************************************************/
void app_main(void) {
    IO_gpioInit();
    WIFI_init();
    MQTT_init();

    // MQTT_subscribe("marcos_practica1/led");
    MQTT_subscribe("marcos_practica1/enable_rssi");

    while (1) {
        if (REPORT_RSSIReportCheck() != 0) {
            static int8_t rssi_pow = 0;
            static char msg[50];
            rssi_pow = WIFI_getRSSI();
            sprintf(msg, "%d", rssi_pow);
            MQTT_publish("marcos_practica1/rssi", msg);
            ESP_LOGI(TAG, "marcos_practica1/rssi, mensaje %s\n", msg);
            CRONO_delayMs(450);
            if (IO_getLed() == 0) {
                IO_setLed(1);
                MQTT_publish("marcos_practica1/led", "ON");
            }
        }
        else {
            if (IO_getLed() != 0) {
                IO_setLed(0);
                MQTT_publish("marcos_practica1/led", "OFF");
            }
        }
        CRONO_delayMs(50);
    }
}
