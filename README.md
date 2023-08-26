# learning-Cpp

---

# Aprendiendo C++ desde cero

¡Bienvenido al repositorio de aprendizaje de C++! En este repositorio, te sumergirás en el emocionante mundo de la programación en C++. Ya seas un principiante absoluto o tengas experiencia en otros lenguajes, este recurso está diseñado para ayudarte a comprender los conceptos fundamentales de C++ de una manera clara y accesible.

## ¿Qué encontrarás en este repositorio?

Este repositorio está organizado en lecciones progresivas que cubren desde lo más básico hasta temas más avanzados en C++. Cada lección contiene explicaciones concisas, ejemplos de código y ejercicios prácticos para reforzar tu comprensión. Comenzaremos con los conceptos más simples y avanzaremos gradualmente hacia temas más complejos.

## Empezando con un clásico: ¡Hola, Mundo!

Vamos a comenzar con uno de los primeros pasos en cualquier viaje de programación: imprimir "Hola, Mundo" en la pantalla. Aquí tienes un ejemplo simple en C++:

```cpp
#include <iostream>

int main() {
    std::cout << "Hola, Mundo" << std::endl;
    return 0;
}
```

En este pequeño fragmento de código, exploraremos elementos básicos como incluir bibliotecas, la estructura de una función `main`, la salida de texto y el uso del valor de retorno.


## Contenido
- [x] Hello world
- [x] Tipos de datos
- [x] Variables

## Cómo usar este repositorio

Cada carpeta de lección contendrá el material de aprendizaje correspondiente, incluidos ejemplos de código y posiblemente ejercicios. Te animamos a explorar las lecciones en orden y a practicar cada concepto con el código proporcionado. Si tienes alguna pregunta o enfrentas desafíos, no dudes en abrir un problema en este repositorio para que podamos ayudarte.

## Contribuciones

Este repositorio está abierto a contribuciones. Si tienes sugerencias de mejora, correcciones o deseas agregar contenido adicional, ¡te damos la bienvenida a contribuir! Simplemente envía una solicitud de extracción y revisaremos tus cambios.

¡Esperamos que disfrutes aprendiendo C++ con nosotros!

---
 ## Instalación

## Instalación de C++ en Windows

1. **Instala MinGW:**

   - Descarga el instalador de MinGW desde [este enlace](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/).
   - Ejecuta el instalador descargado y sigue las instrucciones en pantalla.
   - En la ventana de "MinGW Installation Manager", selecciona los componentes `mingw32-base` y `mingw32-gcc-g++` para instalar.
   - Selecciona "Installation" en el menú superior y elige "Apply Changes".

2. **Añade MinGW al PATH:**

   Agrega la ruta `C:\MinGW\bin` (o la ruta de instalación que hayas seleccionado) al entorno PATH de Windows. Esto permitirá que puedas acceder al compilador desde cualquier ubicación en la línea de comandos.

3. **Verifica la instalación:**

   Abre una terminal y escribe `g++ --version` para asegurarte de que el compilador esté instalado y funcionando.

## Instalación de C++ en macOS

1. **Instala Xcode:**

   - Abre la App Store en tu Mac.
   - Busca y descarga Xcode, que es la suite de desarrollo oficial de Apple.

2. **Verifica la instalación:**

   Abre una terminal y escribe `g++ --version` para asegurarte de que el compilador esté instalado y funcionando. Es probable que el compilador GCC ya esté instalado a través de Xcode.

## Instalación de C++ en Linux (Ubuntu)

1. **Instala el compilador:**

   Abre una terminal y ejecuta el siguiente comando:

   ```bash
   sudo apt-get update
   sudo apt-get install g++
   ```

2. **Verifica la instalación:**

   Escribe `g++ --version` en la terminal para asegurarte de que el compilador esté instalado y funcionando.

Recuerda que estos son solo ejemplos básicos de instalación. En algunos sistemas operativos y distribuciones Linux, puede haber variaciones en los nombres de los paquetes o en los métodos de instalación. Es importante consultar la documentación oficial de tu sistema operativo para obtener instrucciones específicas y actualizadas.

# Extensiones en Visual studio code

Visual Studio Code (VS Code) es una herramienta muy popular para programadores y ofrece extensiones que facilitan el desarrollo en diversos lenguajes, incluyendo C++. Sigue estos pasos para instalar las extensiones necesarias:

**Abre Visual Studio Code:**

- Instala la Extensión de C++:
- Abre VS Code.
- Ve a la pestaña "Extensions" (Extensiones) en el menú lateral izquierdo o utiliza el atajo Ctrl+Shift+X.
- Busca "C++" en el cuadro de búsqueda.
- Instala la extensión proporcionada por Microsoft.

** Compilador de C++ **

- En la pestaña extensiones encuentra " C/C++ Compile Run"
- Instala la extensión para pode compilar directamente desde el editor