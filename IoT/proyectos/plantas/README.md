La pagina web está hosteada en el siguiente link:

    http://iotptealto.pythonanywhere.com/

En caso de usar una esp8266 este es el driver de instalación: 

    https://arduino.esp8266.com/stable/package_esp8266com_index.json

Este proyecto en un comienzo corresponde a una página web creada en django, donde se muestren los registros de temperatura y humedad de una planta, se realizó un circuito prototipo con arduino, sensores de huemedad y temperatura, en el primer prototipo utilizamos los siguientes materiales: 
    - Arduino UNO R3
    - Sensor de temperatura DHT11
    - Sensor de humedad de suelo (Moisture sensor)

Se construyó una API djangorestframework para envíar las lecturas de los sensores por peticiones HTTP (Codigo en carpeta "codigos_arduino" > "Planta_POSTWIFI")
    
Se creó un segundo prototipo utilizado otro microcontrolador con Wifi:
    - NodeMCU esp8622 
