[🛑 Volver al Portafolio Digital de Aprendizaje](<https://github.com/kiaracondoy-bit/Portafolio-Digital-de-Aprendizaje-Teor-a-de-la-Programaci-n/blob/main/Portafolio%20Teor%C3%ADa%20de%20la%20Programaci%C3%B3n.md#-4-programaci%C3%B3n-por-bloques>)<br><br>

---
 <div align="center">  
	 
### 💻 UNIDAD 1: FUNDAMENTOS DE ALGORITMOS Y PROGRAMASS ✨<br><br>
</div>

1. [CONTENIDOS DE LA UNIDAD](Unidad%201.md#%EF%B8%8F-contenidos-de-la-unidad)

     1.1. [ALGORITMOS](Unidad%201.md#-1-algoritmos)<br>
     1.2. [ELEMENTOS BÁSICOS DE ALGORITMOS Y PROGRAMAS](Unidad%201.md#-2-elementos-b%C3%A1sicos-de-algoritmos-y-programas)<br>
     1.3. [REPRESENTACIÓN DE ALGORITMOS](Unidad%201.md#-3-representaci%C3%B3n-de-algoritmos)<br>
          	- [Pseudocódigo](Unidad%201.md#%EF%B8%8F-pseudoc%C3%B3digo)<br>
         	 - [Diagrama de Flujo](Unidad%201.md#-diagrama-de-flujo)<br>
     1.4.  [PROGRAMACIÓN POR BLOQUES](Unidad%201.md#-4-programaci%C3%B3n-por-bloques)<br>
     1.5.  [LENGUAJES DE PROGRAMACIÓN Y SU CLASIFICAACIÓN](Unidad%201.md#-5-lenguajes-de-programaci%C3%B3n-y-su-clasificaci%C3%B3n)<br>
     1.6.  [PRINCIPALES DIFICULTADES EN LA APLICACIÓN DE LOS CONTENIDOS](Unidad%201.md#-6-principales-dificultades-en-la-aplicaci%C3%B3n-de-los-contenidos)<br>
     1.7.  [REFLEXIÓN CRÍTICA SOBRE LOS APRENDIZAJES](Unidad%201.md#-7-reflexi%C3%B3n-cr%C3%ADtica-sobre-los-aprendizajes)<br>


2. [TAREAS ENTREGADAS Y ACTIVIDADES ELABORADAS](Unidad%201.md#%EF%B8%8F-tareas-entregadas-y-actividades-elaboradas)<br>

   	 ***Aprendizaje Autónomo***<br>
	 2.1. [Herramientas de algoritmos (pseudocódigo y diagramas de flujo)]()<br>
  	 2.2. [Instalación de lenguajes de programación (C, Python o Java)]()<br>

	 ***Aprendizaje Práctico Experimental***<br>
     2.3. [Primer acercamiento a la construcción de algoritmos con estructuras secuenciales en pseudocódigo]()<br>
     2.4. [Del diseño del algoritmo con estructuras secuenciales a la construcción del programa]()<br>
	 
3. [ANEXOS](Unidad%201.md#%EF%B8%8F-anexos)
<br>

---

### 🗂️ CONTENIDOS DE LA UNIDAD

### 🔹 1. ALGORITMOS

Un **algoritmo** es una **secuencia finita, ordenada y lógica de pasos** que permiten **resolver** un problema o **realizar** una tarea específica.
Cada paso debe ser *claro, preciso* y producir un resultado *concreto*. [1]

##### Clasificación

* 🔢 **Cuantitativos:** Basados en operaciones matemáticas o cálculos numéricos.
* 🔤 **Cualitativos:** Descritos con lenguaje natural, usando palabras y frases.

##### Características Principales

* *Preciso:* Cada instrucción tiene un significado claro.
* *Finito:* Tiene un número limitado de pasos.
* *Definido:* Produce el mismo resultado con los mismos datos de entrada.
* *Ordenado:* Las instrucciones deben seguir una secuencia lógica.
* *Eficiente:* Resuelve el problema en el menor tiempo posible.

#### Partes del algoritmo

* *Entrada:* Datos proporcionados por el usuario.
* *Proceso:* Cálculos u operaciones que transforman los datos.
* *Salida:* Resultados obtenidos.

#### Proceso Para Resolver Un Problema Mediante Un Algoritmo

1. *Análisis del problema:* Comprender qué se necesita resolver.
2. *Definición de entradas:* Identificar los datos que se requieren.
3. *Definición del proceso:* Establecer las operaciones necesarias.
4. *Definición de salidas:* Determinar los resultados esperados.
5. *Diseño del algoritmo:* Representar la solución (pseudocódigo o diagrama de flujo).
6. *Verificación:* Probar el algoritmo con datos de ejemplo.

---

### 🔹 2. ELEMENTOS BÁSICOS DE ALGORITMOS Y PROGRAMAS
Un **algoritmo** no es lo mismo que un **programa (software)**.[1]
| Concepto      | Descripción                                                                                                                             |
| ------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| **Algoritmo** | Es el método lógico o conjunto de pasos para resolver un problema.                                                                         |
| **Programa**  | Es la implementación del algoritmo mediante un lenguaje de programación (como C++, Java o Python) que puede ejecutarse en una computadora. |

#### Elementos Básicos de Algoritmos y Programas
 * **Datos e información**
   Un **dato** es la unidad mínima de información.
   La **información** es el resultado del procesamiento de los datos.
 * **Tipos de datos simples**
   *Enteros:* Valores sin decimales.
   *Reales:* Valores con punto decimal.
   *Carácter:* Un solo símbolo o letra.
   *Cadena:* Conjunto de caracteres.
   *Lógicos:* Verdadero (True) o Falso (False).
  * **Identificadores**
Son los *nombres asignados a variables o constantes*.
  🔸 **Constantes:** No cambian durante la ejecución.
  🔹 **Variables:** Pueden cambiar durante la ejecución.
  * **Instrucciones básicas**
  *Asignación:* Asigna un valor a una variable.
  *Lectura:* Permite ingresar datos.
  *Escritura:* Muestra resultados.
  *Comentarios:* Aclaran el código sin ejecutarse.
---
### 🔹 3. **REPRESENTACIÓN DE ALGORITMOS**

Los algoritmos se pueden representar de dos maneras:

#### ✏️ PSEUDOCÓDIGO

El **pseudocódigo** es una forma textual y estructurada de representar un algoritmo.
Permite **planificar la lógica del programa** sin depender de la sintaxis de un lenguaje de programación. [2]

##### 🪜 Pasos para escribir un algoritmo en pseudocódigo

1. Identificar **entradas, procesos y salidas**.
2. Usar palabras clave como **Inicio**, **Leer**, **Escribir**, **Si**, **Mientras**, **Fin**, etc.
3. Escribir **una instrucción por línea**.
4. Usar **sangría** para indicar jerarquía.
5. Mantener un **orden lógico y coherente**.
6. Revisar la claridad del algoritmo.
<br>
📘 **EJERCICIO EN PSEINT DESARROLLADO:**

```
Algoritmo d_cambioPorUnProducto
	//Declaración de Variables
	Definir dineroInicial, PrecioProducto Como Real
	Definir cambio Como Real
	
	//Datos de Entrada
	Escribir '¿Con cuánto dinero se paga el producto?'
	Leer dineroInicial
	Escribir '¿Cuál es el precio del producto?'
	Leer PrecioProducto
	
	//Proceso
	cambio=dineroInicial-PrecioProducto
	
	//Salida
	Escribir 'El cambio por la compra del producto es: ', cambio
FinAlgoritmo

```
<br>
   
   * 📝 **Redacción explicativa del pseudocódigo "d_cambioPorUnProducto"** <br>
   
   El algoritmo tiene como finalidad calcular el cambio que debe recibir una persona después de pagar un producto. Este ejercicio se desarrolla en la plataforma     PSeInt.
   El algoritmo comienza con la **declaración de variables**, donde se definen `dineroInicial`, `PrecioProducto` y `cambio` como variables de tipo **Real**, ya      que se trabaja con valores de dinero que pueden incluir decimales. Se ubica un comentario que indica el propósito del código de Declarar Variables.
   
   Luego se procede a la **entrada de datos**, donde se solicita al usuario que ingrese dos valores: el monto con el que se paga el producto (`dineroInicial`) y     el precio del producto (`PrecioProducto`). Estas instrucciones se realizan mediante la instrucción **Escribir**, que muestra un mensaje en pantalla, seguida      de **Leer**, que captura el valor ingresado por el usuario. Esta sección también está comentada para indicar que se trata de los datos de entrada.

   Una vez obtenidos los valores, el algoritmo realiza el **proceso de cálculo**, donde se determina el cambio que debe recibir el comprador. Para ello, se resta    el precio del producto al dinero entregado: `cambio = dineroInicial - PrecioProducto`. Esta operación se guarda en la variable `cambio` junto a un comentario     que indica que es el proceso.

   Finalmente, se ejecuta la **salida de datos**, donde se muestra en pantalla el resultado del cálculo. Se utiliza la instrucción **Escribir** para presentar el    mensaje: "El cambio por la compra del producto es: ", seguido del valor almacenado en la variable `cambio`.

El algoritmo termina con la instrucción **FinAlgoritmo**, que indica el cierre del procedimiento. <br>

   * 🔍 **Componentes del algoritmo**
      **Entradas**:
        - `dineroInicial`: monto entregado por el comprador.
        - `PrecioProducto`: precio del producto.
      **Proceso**:
        - `cambio = dineroInicial - PrecioProducto`
      **Salida**:
        - Mostrar el cambio que debe recibir el comprador.

   * 🔍 **Ejecución del algoritmo**<br><br>

   **Caso 1**:
  
*Imagen 1: Ejecución en PSeInt en el primer caso*<br>
<p align = "center"> <img width="522" height="334" alt="image" src="https://github.com/user-attachments/assets/4d3991d1-9f37-4fc1-a8b9-2181479dc757" /> </p>

   **Caso 2**:
  
*Imagen 2: Ejecución en PSeInt en el segundo caso*
<p align = "center"><img width="524" height="338" alt="image" src="https://github.com/user-attachments/assets/480b7a58-df15-4307-b7b8-23af8dcf3bec" /> </p>

  Suponiendo que el usuario paga el producto con *$20.00* y el precio del producto es *$15.65*.
  el algoritmo solicita:  <br>
     *¿Con cuánto dinero se paga el producto?* → El usuario ingresa `20.00`  
     *¿Cuál es el precio del producto?* → El usuario ingresa `15.65`

  En el *proceso*, se calcula el cambio con la fórmula:  
     `cambio = dineroInicial - PrecioProducto`  
     `cambio = 20.00 - 15.65`  
     `cambio = 4.35`

  Finalmente, en la *salida*, el algoritmo muestra en pantalla:  
     *El cambio por la compra del producto es: 4.35*

*También realizamos pruebas de escritorio para validar la solución del programa:*

| Dato de Entrada 1      |   Dato de Entrada 2     | Proceso          | Datos de Salida|
|------------------------|-------------------------|------------------|--------------|
|   Variable 1           |    Variable 2           | cambio=dineroInicial-PrecioProducto|  cambio|             
|      20.00             |       15.65             | cambio=20.00-15.65|    4.35        |
|	   82.5				 |		 62.25			   | cambio=82.50-62.25|	20.25		|


   Con esta comprobamos que la lógica matemática esté correctamente aplicada.


  ***Encuentre los demás algoritmos en PSeInt realizados en clase en:***
📎 [**ANEXO 1**](UNIDAD%201/Ejercicios%20en%20PSeInt)<br><br>

---
#### 🔶 DIAGRAMA DE FLUJO

El **diagrama de flujo** es la **representación gráfica** de un algoritmo mediante **símbolos estandarizados** y **flechas de dirección**. [3]

   En clase se practicó y analizó la estructura de los diagramas de flujo mediante una demostración que evidenció cómo, al desarrollar un código en pseudocódigo     utilizando PSeInt, se genera automáticamente su correspondiente diagrama de flujo. Además, se explicó la forma de representación de los distintos elementos       del    mismo, como los datos de entrada, los procesos, los datos de salida, entre otros.

   * 🧠 **Componentes clave en PSeInt**

| Elemento         | Tipo de símbolo   | Descripción                                     |
|------------------|-------------------|-------------------------------------------------|
| Inicio           | Óvalo             | Marca el comienzo del algoritmo                 |
| Entrada          | Paralelogramo con flecha hacia dentro | Captura los datos del usuario                   |
| Proceso          | Rectángulo con flecha hacia afuera | Realiza el cálculo del cambio                   |
| Salida           | Paralelogramo     | Muestra el resultado del cálculo                |
| Fin              | Óvalo             | Finaliza el algoritmo                           |


📘 **DIAGRAMA DE FLUJO EN PSEINT**

*Imagen 3: Diagrama de flujo en PSeInt*<br>
<p align = "center"><img width="1919" height="1138" alt="image" src="https://github.com/user-attachments/assets/0c060d3d-7cb3-4e67-b7a8-379850348060" /></p>

   * 📝 **Explicación del diagrama de flujo: "d_cambioPorUnProducto"**

El diagrama de flujo de este algoritmo representa gráficamente el pseudocódigo desarrollado en el ejercicio previo.
1. **Inicio**  
   - Se representa con un óvalo. Indica el comienzo del algoritmo.

2. **Entrada de datos**  
   - Se usan **paralelogramos** para mostrar operaciones de entrada/salida:
     - Mostrar mensaje, figura con una flecha hacia dentro: *¿Con cuánto dinero se paga el producto?*
     - Leer valor, figura con una flecha hacia afuera: `dineroInicial`
     - Mostrar mensaje: *¿Cuál es el precio del producto?*
     - Leer valor: `PrecioProducto`

3. **Proceso de cálculo**  
   - Se representa con un **rectángulo**:
     - Operación: `cambio = dineroInicial - PrecioProducto`

4. **Salida de datos**  
   - Otro **paralelogramo**:
     - Mostrar mensaje: *El cambio por la compra del producto es: [cambio]*

5. **Fin**  
   - Se representa con un óvalo. Indica el final del algoritmo.

En el siguiente enlace se pueden visualizar más ejemplos de diagramas de flujo realizados en clase:
📎 [**ANEXOS 2**](UNIDAD%201/Ejercicios%20PSeInt%20con%20Diagrama%20de%20Flujo) 

---
### 🔹 4. PROGRAMACIÓN POR BLOQUES

La **programación por bloques** utiliza **bloques visuales** para construir programas de forma sencilla y gráfica.
Es ideal para principiantes, ya que fomenta el **pensamiento lógico y la comprensión secuencial**.

#### 🧰 Herramientas utilizadas

###### 🧩 **Blockly Games** <br><br>
Plataforma educativa en línea diseñada para enseñar conceptos básicos de programación a principiantes de forma visual e interactiva. Utiliza bloques gráficos que se arrastran y encajan como piezas de rompecabezas, lo que permite construir algoritmos sin necesidad de escribir código.

   **Características principales**:
   - Basado en el lenguaje visual Blockly de Google.
   - Incluye juegos como *Puzzle*, *Maze*, *Bird*, *Turtle*, *Movie*, entre otros.
   - Cada juego introduce progresivamente conceptos como secuencias, bucles, condiciones y funciones.
   - Ideal para aprender lógica de programación sin errores de sintaxis.

📘 **EJERCICIO REALIZADO EN BLOCKLY GAMES**

   *Imagen 4: Ejercicio de Blocky Games en el nivel 7*<br>
<p align = "center"><img width="1214" height="790" alt="Captura de pantalla 2025-10-24 094655" src="https://github.com/user-attachments/assets/6f4cc5d6-0f9a-42d7-aeff-5c77e2b4f601" /> </p> <br><br>
En el nivel 7 de esta plataforma, hay que guiar al personaje a través de un laberinto hasta llegar a la meta, usando instrucciones de programación. Para lograrlo, se construye un algoritmo con bloques que simulan decisiones y movimientos, como si fuera un robot que solo obedece lo que tú le programas.

Para resolver el problema, se usa:
* El bloque de "repetir hasta" que ejecuta instrucciones mientras el personaje no haya llegado al destino. Dentro de ese bucle, se colocó tres condiciones:
- Si hay camino al frente, el personaje avanza.
- Si hay camino a la derecha, el personaje gira a la derecha.
- Si hay camino a la izquierda, el personaje gira a la izquierda.
Esto permite que el personaje explore el laberinto de forma inteligente, tomando decisiones según los caminos disponibles en cada paso.

   * *Al terminar, el código del problema resuelto se presenta como*:<br><br>

   *Imagen 5: Resultado del ejercicio de Blocky Games en el nivel 7*<br>
<p align = "center"><img width="1214" height="790" alt="Captura de pantalla 2025-10-24 094640" src="https://github.com/user-attachments/assets/2bdf1762-b0c2-4efc-aaa4-35f894ac4fcc" /> </p> <br><br>

##### 🎮 **Pilas Bloques**

También es una plataforma educativa diseñada para enseñar programación principiantes, orientada específicamente a jóvenes, de forma visual y divertida. Utiliza bloques gráficos que se arrastran y encajan para construir instrucciones, lo que permite aprender lógica de programación sin necesidad de escribir código.

   **Características principales**:
   - Basada en el entorno de programación visual **Blockly**.
   - Presenta desafíos donde un personaje debe cumplir misiones usando instrucciones como **moverse**, **girar**, **repetir** y **condicionar**.
   - Introduce conceptos como **secuencias**, **bucles**, **condicionales** y **funciones**.
   - Ideal para aprender a programar jugando, desarrollando el pensamiento lógico y la resolución de problemas.

📘 **EJERCICIO REALIZADO EN PILAS BLOQUES**

*Imagen 6: Ejercicio de Pilas Bloques* <br>
<p align = "center"> <img width="1919" height="1032" alt="Captura de pantalla 2025-10-24 094805" src="https://github.com/user-attachments/assets/4e85e6a5-219b-4d0c-a9ac-fbcb4b87d919" /> </p> <br>

En este juego, el objetivo es ayudar a la puma Duba a llegar hasta el churrasco (su comida), evitando los obstáculos como las flores y el agua. Para lograrlo, debes construir una secuencia de instrucciones usando bloques de movimiento y acción.
"Al empezar a ejecutar", se han colocado los siguientes bloques:
- Mover a la derecha
- Mover abajo
- Comer churrasco
Esto significa que, al iniciar el programa, la puma se moverá una casilla a la derecha, luego una hacia abajo, y finalmente comerá el churrasco si está en la posición correcta.

   * *Al terminar la página se presenta como*:<br><br>

*Imagen 7: Resultado del ejercicio de Pilas Bloques*<br>
<p align = "center"> <img width="1919" height="1039" alt="Captura de pantalla 2025-10-24 094820" src="https://github.com/user-attachments/assets/81ad1de1-df70-467c-a0f7-8091224f7e1d" /> </p> <br><br>
Esta metodología de "Programación por Bloques" hace el aprendizaje más visual, dinámico y divertido. 😄

---

### 🔹 5. LENGUAJES DE PROGRAMACIÓN Y SU CLASIFICACIÓN

Los **lenguajes de programación** permiten traducir los algoritmos en programas que la computadora pueda ejecutar.
*Lenguajes de alto nivel*: 
Son más fáciles de aprender y se parecen al lenguaje humano.
Los programas escritos en ellos se llaman **programas fuente**, y necesitan ser **traducidos** para que la computadora los entienda.
* *Clasificación según la traducción*
  🧩 Lenguajes compilados:
  Traducen todo el código antes de ejecutarse.
  Ejemplo: C, C++.
  🪄 Lenguajes interpretados:
  Traducen línea por línea durante la ejecución.
  Ejemplo: Python, PHP, JavaScript.


El desarrollo de los ejercicios en clase se realizó en el entorno de programación Visual Studio Code, una herramienta moderna y multiplataforma utilizada ampliamente por programadores. Visual Studio Code (VS Code) es un editor de código fuente que permite escribir, ejecutar y depurar programas en diversos lenguajes, incluido C. Su interfaz amigable, junto con funciones como el resaltado de sintaxis, la integración de terminal y extensiones personalizadas, facilita el aprendizaje y la práctica de la programación de manera eficiente y organizada.

#### Lenguaje C

El lenguaje C es uno de los más utilizados en la enseñanza de programación por su estructura clara, cercanía al hardware y potencia. [4]

🔹 *Características principales del lenguaje C*
- Codificación estructurada: La conversión de pseudocódigo a C requiere adaptar la lógica, declarar variables, incluir librerías y respetar la sintaxis del lenguaje.
- Archivos fuente: Los programas se guardan con extensión .c y se compilan para generar ejecutables (.exe en Windows).
- Función principal: Todo programa en C inicia en la función main().

📚 *Librerías o bibliotecas*
- Son archivos con extensión .h que contienen funciones reutilizables.
- La más importante es stdio.h, que permite manejar entrada y salida de datos.
- Otras comunes: stdlib.h, string.h, math.h, time.h.

🧮 *Tipos de datos y variables*
- Tipos simples: int, float, char, double, entre otros.
- Las variables deben declararse antes de usarse y pueden inicializarse al momento de la declaración.
- Las cadenas de texto se manejan como arreglos de tipo char.

📌 *Constantes*
- Se pueden declarar con const o con #define.
- Ejemplo: const float PI = 3.1416; o #define PI 3.1416.

➕ *Asignación y operadores*
- Se usa el signo = para asignar valores.
- Operadores como ++ y -- permiten incrementar o decrementar variables.
- Se distingue entre pre-incremento (++x) y post-incremento (x++).

📥 *Entrada y salida de datos*
- Entrada: scanf() con máscaras como %d, %f, %c, %s.
- Salida: printf() para mostrar resultados en pantalla.
- Las máscaras indican el tipo de dato que se lee o imprime.


*Imagen 8: Logo de VS Code* <br>
<p align="center"><img width="57" height="42" alt="image" src="https://github.com/user-attachments/assets/913bfa1d-89b2-4951-885d-34b648406d4a" /></p>

   En clase se trabajó con el lenguaje de programación C, que es un lenguaje compilado, a continuación se presentará un código escrito en lenguaje C:

📘 **EJERCICIO EN LENGUAJE C DESARROLLADO EN VISUAL STUDIO CODE**

*Imagen 9: Programa fuente en Lenguaje C sobre transformaciones de m a km, cm y mm*<br>
<div align="center">  <img width="1399" height="590" alt="image" src="https://github.com/user-attachments/assets/7f991bd3-4a60-4a6c-8805-42439f11bc5f" /> </div>

   * 📝 **Explicación del código**
```c
#include <stdio.h>
```
Esta línea **incluye la biblioteca estándar de entrada/salida**, necesaria para usar funciones como `printf` y `scanf`.

```c
int main()
```
Define la **función principal** del programa y así comienza la ejecución.

```c
float metros, km, cm, mm;
```
- Se declaran cuatro variables de tipo **float** (números decimales):
  - `metros`: va a almacenar la distancia ingresada por el usuario.
  - `km`, `cm`, `mm`: almacenanarán las conversiones a kilómetros, centímetros y milímetros.

```c
printf("Ingrese el valor en metros: \n");
scanf("%f", &metros);
```
- Se muestra un mensaje en pantalla para pedir al usuario que ingrese una distancia en metros.
- Luego, se **lee ese valor** y se guarda en la variable `metros`.

```c
km = metros / 1000;
cm = metros * 100;
mm = metros * 1000;
```
- Se realiza el Proceso con *conversiones*:
  - Kilómetros: se divide entre 1000.
  - Centímetros: se multiplica por 100.
  - Milímetros: se multiplica por 1000.

```c
printf("%.2f m equivale a %.4f km\n", metros, km);
printf("%.2f m equivale a %.2f cm\n", metros, cm);
printf("%.2f m equivale a %.2f mm\n", metros, mm);
```
- Se muestran los resultados en pantalla con **formato decimal**:
  - `.2f` muestra dos decimales.
  - `.4f` muestra cuatro decimales (más precisión para kilómetros).

```c
return 0;
```
- Finaliza el programa

A lo largo del programa se incluyen comentarios para identificar la estructura del mismo.
<br><br>
<br>
#### 🧪 **¿Cómo se compila y ejecuta un programa en C?**

Para compilar y ejecutar un programa en C, se siguen estos pasos básicos desde la terminal en **Visual Studio Code** con el compilador **GCC**:

1.  ✅ *Compilación*
```bash
gcc deMetrosAkmcmmm.c -o deMetrosAkmcmmm
```
- `gcc`: es el comando que llama al compilador de C (GNU Compiler Collection).
- `deMetrosAkmcmmm.c`: es el archivo fuente que contiene el código en C.
- `-o deMetrosAkmcmmm`: indica el nombre del archivo ejecutable que se va a generar.

Este paso traduce el código fuente a un archivo ejecutable que puede correr en el sistema. Si hay errores de sintaxis, el compilador los mostrará aquí.

 2.  ▶️ *Ejecución*
  ```bash
  deMetrosAkmcmmm.exe
  ```
- Este comando ejecuta el programa que acabas de compilar en **Windows**.


*  🎯 *¿Por qué es importante?*
- Permite **ver los resultados reales** del código.
- Ayuda a **detectar errores** y corregirlos.
---

**Compilación del ejercicio previo:**

*Imagen 10: Compilación del programa fuente en Lenguaje C sobre transformaciones de m a km, cm y mm*<br>
<p align="center"> <img width="1485" height="364" alt="Captura de pantalla 2025-10-29 155739" src="https://github.com/user-attachments/assets/14773594-c49c-4996-865e-db4e5714623b" /> </p>

🧮 Este es un ejemplo de ejecución:
Se Ingresó el valor `55` y el programa mostró:

```
55.00m equivale a 0.0550km
55.00m equivale a 5500.00cm
55.00m equivale a 55000.00mm
```

Esto demuestra que el programa **funciona correctamente**, aplicando operaciones matemáticas simples y mostrando los resultados con formato decimal.

Además, la *prueba de escritorio*, confirma la lógica usada:

| Dato de Entrada        |           Proceeso             | Datos de Salida			|
|------------------------|--------------------------------|-------------------------|
|   Variable 1           | km=m/1000; cm=m*100; mm=m*1000 |      		   			|  
|      55.00             | 55/1000;  55*1000;  55*1000    |	0.055km; 5500cm; 55000mm|


Vea más ejemplos de ejercicios en Visual Studio usando lenguaje C en clase:
📎 [**ANEXO 3**](UNIDAD%201/Ejercicios%20en%20Lenguaje%20C)


Podemos ***unificar conocimientos*** y pasar algotirmos de PSeInt a lenguaje C, como el siguiente ejercicio:

En el siguiente ejercicio se resolverá el cálculo del porcentaje de mujeres y hombres en un grupo determinado. 

*Imagen 11: Pseudocódigo en PSeInt de Porcentaje de hombres y mujeres*<br>
<p align = "center"> <img width="1077" height="765" alt="image" src="https://github.com/user-attachments/assets/7a672583-16d7-4b57-8c5d-219e678a29e5" /></p>

   Para resolver el problema planteado, el algoritmo solicita al usuario que ingrese la cantidad de hombres y mujeres, y con esos datos realiza una operación        matemática rrelacionada a la regla de 3, que permite conocer qué porcentaje representa cada grupo respecto al total. 

*A continuación, se procedió a trasladar el código desarrollado en PSeInt al lenguaje de programación C, adaptando su estructura y lógica para cumplir con la sintaxis propia de dicho lenguaje.*

*Imagen 12: Código en Visual Studio Code de porcentaje de hombres y mujeres*<br>
<p align "center"> <img width="1919" height="1140" alt="image" src="https://github.com/user-attachments/assets/f24dfe3f-6d6b-4bc6-ac76-8d109e93f41b" /> </p>

Vea otro ejemplo de un traslado de pseudocódigo a lenguaje C:
📎 [**ANEXO 4**](UNIDAD%201/PSeIntALenguajeC)

<br>
---

### 🔹 6. **PRINCIPALES DIFICULTADES EN LA APLICACIÓN DE LOS CONTENIDOS**

Durante el proceso de aprendizaje, una de las principales dificultades que enfrenté fue comprender la diferencia entre constantes, variables e identificadores, ya que al inicio estos conceptos se me presentaban de forma confusa y difícil de distinguir en la práctica. También me costó adaptarme a la forma en que se “lee” un programa en lenguaje C, especialmente al interpretar correctamente las instrucciones y entender su lógica. Otro aspecto que me generó dudas fue el uso de símbolos como % y &. En el caso del operador %, me tomó tiempo entender que se utiliza para obtener el residuo de una división entre enteros. En cuanto al operador &, me resultó confuso al principio porque se usa para obtener la dirección de memoria de una variable, como en la función scanf(), donde es necesario escribir &variable para que el valor ingresado se almacene correctamente. Sin embargo, con la práctica y el acompañamiento en clase, fui aclarando estas dudas y logrando una mejor comprensión de la estructura del lenguaje.
<br>

---

### 🔹 7. **REFLEXIÓN CRÍTICA SOBRE LOS APRENDIZAJES**

Considero que los contenidos abordados en esta unidad fueron presentados de manera clara y estructurada, lo que facilitó la comprensión de cada tema tratado. A lo largo de las sesiones, se exploraron los fundamentos de los algoritmos y los programas, permitiendo adquirir una base sólida para la elaboración de soluciones en lenguaje C.
También fue notorio como los temas fueron adecuados para un estudiante que inicia en el mundo de la programación, ya que se explicaron de forma concisa y progresiva. Gracias a ello, pude comprender con mayor profundidad conceptos clave como la diferencia entre algoritmo y programa, la lógica secuencial, la prioridad de operadores, la representación de diagramas de flujo y el uso de herramientas digitales aplicadas al desarrollo de software.
En conjunto, esta unidad me brindó las herramientas necesarias para comenzar a construir programas funcionales, entendiendo no solo la sintaxis del lenguaje, sino también la lógica detrás de cada instrucción. Me siento preparada para seguir avanzando en el aprendizaje de la programación con una base firme y clara.
<br>

---
### 🗂️ TAREAS ENTREGADAS Y ACTIVIDADES ELABORADAS

*Actividades Autónomas*

#### [Herramientas de algoritmos (pseudocódigo y diagramas de flujo)](UNIDAD%201/Tareas%20Entregadas%20U1/Condoy_Kiara%20_AA1_U1.pdf)
  En este Aprendizaje Autónomo 1 (AA) de la Unidad 1, se me pidió explorar y utilizar herramientas digitales para trabajar con pseudocódigo y diagramas de flujo. El objetivo fue aplicar los conceptos básicos de algoritmos y programación que hemos visto en clase, usando una herramienta que facilite su comprensión. Para ello, trabajé con PSeInt, una plataforma muy útil para quienes estamos empezando en programación, ya que permite escribir algoritmos de forma sencilla y visual.
La actividad ayudó a entender cómo se estructura un algoritmo, cómo se declaran variables, se reciben datos, se procesan operaciones y se muestran resultados. Además, con esta herramienta se pudo representar todo esto en un diagrama de flujo, lo que permite visualizar mejor cada paso del proceso. Esta práctica sirvió para reforzar la lógica de programación y para familiarizarse con el entorno de desarrollo antes de escribir programas más completos en lenguaje C.

#### [Instalación de lenguajes de programación (C, Python o Java)](UNIDAD%201/Tareas%20Entregadas%20U1/Condoy_Kiara%20_AA2_U1.pdf)
En este AA2 de la Unidad 1, se me pidió revisar los tutoriales oficiales para la instalación del lenguaje de programación C, con el objetivo de comprender el proceso técnico necesario para preparar el entorno de desarrollo en mi computadora. A través de esta práctica, pude a descargar e instalar el compilador MinGW, configurar las variables de entorno del sistema y verificar que el lenguaje estuviera correctamente reconocido por el sistema operativo.
Esta actividad permitió entender la importancia de tener un entorno de programación bien configurado antes de comenzar a escribir código. Además, al finalizar la instalación, se pudo ejecutar mi primer programa en C, el clásico “Hola mundo”, lo que me dio una primera experiencia práctica con el lenguaje. Gracias a este proceso, ya es un nuevo conociemiento el preparar mi equipo para desarrollar programas en C, lo cual es fundamental para avanzar en el aprendizaje de la programación.

*Actividades Práctico Experimental*

#### [Primer acercamiento a la construcción de algoritmos con estructuras secuenciales en pseudocódigo](UNIDAD%201/Tareas%20Entregadas%20U1/Condoy_Kiara%20_APE1_U1.pdf)

En este Aprendizaje Práctico Experimental 1 (APE) correspondiente a la Unidad 1, trabajé por primera vez con la herramienta PSeInt para construir un algoritmo utilizando estructuras secuenciales. El objetivo principal fue conocer bien el entorno de desarrollo de pseudocódigo y aplicar los conceptos básicos de programación que hemos venido aprendiendo en clase.
El ejercicio consistió en desarrollar un algoritmo que permitiera calcular el Índice de Masa Corporal (IMC) de una persona, a partir de su peso y altura. Para ello, se declaró las variables necesarias, ingresó los datos por teclado, realizó el cálculo correspondiente y se mostró el resultado al usuario. Además, se hizo una prueba de escritorio para validar el funcionamiento del algoritmo con diferentes valores de entrada, lo que ayudó a comprobar que la lógica implementada era correcta.
Esta práctica permitió reforzar la comprensión sobre cómo se estructura un algoritmo paso a paso, desde la entrada de datos hasta la salida de resultados. También ayudó a visualizar cómo se aplican las estructuras secuenciales en la resolución de problemas simples, lo cual es fundamental para seguir avanzando en el aprendizaje de la programación.

#### [Del diseño del algoritmo con estructuras secuenciales a la construcción del programa](UNIDAD%201/Tareas%20Entregadas%20U1/Condoy_Kiara%20_APE2_U1.pdf)

En este APE 2 de la Unidad 1, se trabajó en el diseño de un algoritmo que permite calcular la nota mínima necesaria en el tercer certamen (c3) para aprobar la asignatura con una calificación final de 60/100. Utilicé la herramienta PSeInt para construir el pseudocódigo y el diagrama de flujo, aplicando estructuras secuenciales y buenas prácticas de programación.
Primero se identificaron los datos de entrada (c1, c2, nl), se analizó el problema y se dedujo la fórmula matemática para despejar C3. Luego se codificó el algoritmo en lenguaje C usando Visual Studio Code, respetando la sintaxis y documentando el código con comentarios explicativos.
Se realizaron pruebas de escritorio con distintos valores para validar la lógica del algoritmo y se comprobó su funcionamiento mediante la ejecución del programa. Esta práctica me ayudó a consolidar el proceso completo de resolución de problemas: desde el análisis inicial hasta la implementación final, reforzando la comprensión sobre estructuras secuenciales y el desarrollo de soluciones computacionales eficientes.

---
### 🗂️ ANEXOS

* [**ANEXO 1**](UNIDAD%201/Ejercicios%20en%20PSeInt)
* [**ANEXO 2**](UNIDAD%201/Ejercicios%20PSeInt%20con%20Diagrama%20de%20Flujo)
* [**ANEXO 3**](UNIDAD%201/Ejercicios%20en%20Lenguaje%20C)
* [**ANEXO 4**](UNIDAD%201/PSeIntALenguajeC)
