/**
 * @file report.h
 * @author Marcos Dominguez (mrds0690@gmail.com)
 * @brief Manage reports
 * @version 0.1
 * @date 2024-05-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef REPORT_H
#define REPORT_H

#include <stdint.h>

#define ENABLE_RSSI_MEASUREMENT 1
#define DISABLE_RSSI_MEASUREMENT 0

void REPORT_RSSIReportEnable(uint8_t enable);

uint8_t REPORT_RSSIReportCheck(void);


#endif /* REPORT_H */