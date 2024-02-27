# Programa de Visual Studio C# y Arduino Uno en Comunicación Serial RS232 🔄💻

Este proyecto proporciona un ejemplo de comunicación serial RS232 entre un programa desarrollado en Visual Studio C# y un Arduino Uno. La comunicación serial RS232 permite la transferencia de datos entre el programa en C# y el Arduino Uno, lo que permite controlar el Arduino y recibir datos desde él.

## Descripción 🛠️

El proyecto incluye dos partes principales:

- **Código en Visual Studio C#:** En la carpeta `CSharp_Code` encontrarás el código fuente del programa desarrollado en Visual Studio C#. Este programa establece una conexión serial RS232 con el Arduino Uno y envía comandos para controlar el Arduino y recibir datos desde él.

- **Código en Arduino:** En la carpeta `Arduino_Code` encontrarás el código fuente del programa que se carga en el Arduino Uno. Este código establece la comunicación serial RS232 con el programa en C# y realiza acciones según los comandos recibidos.

## Requisitos 📦

- Visual Studio (preferiblemente Visual Studio 2019) instalado en tu sistema.
- Arduino IDE instalado en tu sistema para cargar el código en el Arduino Uno.
- Un Arduino Uno o compatible.
- Cable USB para conectar el Arduino Uno al ordenador.

## Uso 📝

1. **Clonar el Repositorio:** Clona este repositorio en tu sistema local utilizando Git.

2. **Abrir el Proyecto en Visual Studio:** Abre el proyecto en Visual Studio y compila el código en C#.

3. **Cargar el Código en el Arduino:** Abre el código en la carpeta `Arduino_Code` en el Arduino IDE y carga el programa en el Arduino Uno.

4. **Ejecutar el Programa en Visual Studio:** Ejecuta el programa en Visual Studio para establecer la comunicación serial RS232 con el Arduino Uno y controlar o recibir datos desde él.

## Contribuciones 🚀

¡Contribuciones son bienvenidas! Si tienes ideas para mejorar el programa, corregir errores o agregar nuevas características, no dudes en abrir un "issue" o enviar un "pull request".

## Créditos 🙌

Este proyecto fue creado por PICAIO SAS y está inspirado en proyectos similares de la comunidad de desarrollo de software y Arduino.

## Licencia 📝

Este proyecto está bajo la licencia [MIT](LICENSE).
