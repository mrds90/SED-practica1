##!/bin/bash
# Configuración del broker y topic a escuchar.
# Configuración inicial:
broker="192.168.0.4"
port="1883"
topic="marcos_practica1/rssi"
archivo="out/recibidos.txt"
#--------------------------------------------------
# Ponemos el cliente de mosquitto a escuchar
mosquitto_sub -t $topic -h $broker -p $port -v | while read value;    do
ts=$(date "+%d/%m/%Y %H:%M:%S") # Agregamos una marca de tiempo en la variable ts (opcional).
# Guardamos valores:
echo "$ts $value" >> $archivo   # guardamos datos en archivo
echo "$value"                   # mostramos el resultado por consola
done