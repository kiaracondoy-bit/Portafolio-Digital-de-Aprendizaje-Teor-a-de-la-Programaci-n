<div align = "center">

# 💻 UNIDAD 3: PROGRAMACIÓN MODULAR Y ESTRUCTURA DE DATOS ESTÁTICAS ✨<br><br>
</div>

## 📘 ÍNDICE DE CONTENIDOS

### Contenidos de la Unidad

***1.** [Modularidad](Unidad%203.md#1-modularidad)*
  - [Teoría](Unidad%203.md#-teoría)
  - [Funciones](Unidad%203.md#-funciones)
  - [Ejemplo con pase de parámetro por valor](Unidad%203.md#-ejemplo-con-pase-de-parámetro-por-valor)
  - [Ejemplo con pase por referencia](Unidad%203.md#-ejemplo-con-pase-por-referencia)<br>

***2.** [Arreglos](Unidad%203.md#2-arreglos)*
  - [Unidimensionales (Vector/Lista)](Unidad%203.md#-unidimensionales-vectorlista)
  - [Bidimensionales  (Matriz)](Unidad%203.md#-bidimensionales--matriz)
  - [Tridimensionales](Unidad%203.md#-tridimensionales)<br>

***3.** [Principales dificultades en la aplicación de los contenidos](Unidad%203.md#3-principales-dificultades-en-la-aplicación-de-los-contenidos)*<br>

***4.** [Reflexión crítica de los aprendizajes de la unidad](Unidad%203.md#4-reflexión-crítica-de-los-aprendizajes-de-la-unidad)*<br>

***5.** [Tareas entregadas y elaboradas](Unidad%203.md#%EF%B8%8F-5-tareas-entregadas)*<br>
- [Aprendizaje Autónomo](Unidad%203.md#51-aprendizaje-autónomo-aa)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [AA1. Curso Fundamentos de Python 1. Computación UNL](Unidad%203.md#-aa1-curso-fundamentos-de-python-1-computaci%C3%B3n-unl)<br>

- [Aprendizaje Práctico Experimental](Unidad%203.md#52-aprendizaje-práctico-experimental-ape)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [APE1. Construcción de funciones y procedimientos en un lenguaje de programación](Unidad%203.md#-ape1-construcci%C3%B3n-de-funciones-y-procedimientos-en-un-lenguaje-de-programaci%C3%B3n)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [APE2. Implementación de funciones utilizando elpaso de parámetros por valor y porreferencia](Unidad%203.md#-ape2-implementaci%C3%B3n-de-funciones-utilizando-elpaso-de-par%C3%A1metros-por-valor-y-porreferencia)<br>  

---

## 📘 ÍNDICE DE IMÁGENES
- [Imagen 1: Ejemplo de Paso por Valor: Duplicar un Número](Unidad%203.md#-ejemplo-con-pase-de-par%C3%A1metro-por-valor)
- [Imagen 2: Intercambio de Valores Usando Paso por Referencia](Unidad%203.md#-ejemplo-con-pase-por-referencia)
- [Imagen 3: Mostrar el arreglo Unideimensional o lista](Unidad%203.md#-unidimensionales-vectorlista)
- [Imagen 4: Mostrar el arreglo bidimensional o matriz](Unidad%203.md#-bidimensionales--matriz)
- [Imagen 5: Mostrar el arreglo tridimensional](Unidad%203.md#-tridimensionales)

---

## 🗂️ CONTENIDOS DE LA UNIDAD

### 1. MODULARIDAD<br>
	
### 🔹 Teoría
&nbsp;&nbsp;&nbsp;&nbsp;La modularidad consiste en dividir un programa en partes más pequeñas y manejables llamadas módulos. Cada módulo es<br> 
&nbsp;&nbsp;&nbsp;&nbsp;independiente y cumple una función específica dentro del sistema [4].<br> 

&nbsp;&nbsp;&nbsp;&nbsp;***❀ Características principales:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Independencia: cada módulo puede desarrollarse, probarse y mantenerse por separado.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Reutilización: un módulo puede usarse en diferentes programas o proyectos.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Mantenibilidad: facilita localizar y corregir errores.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Escalabilidad: permite agregar nuevas funcionalidades sin afectar el resto del sistema.<br> 


&nbsp;&nbsp;&nbsp;&nbsp;***◈ Ventajas:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Código más claro y legible.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Menor duplicación de código.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Facilita el trabajo en equipo (cada programador puede trabajar en un módulo distinto).<br> 

### 🔹 Funciones
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Una función es un bloque de código que realiza una tarea específica y puede ser llamado desde cualquier parte del programa [5].<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Las funciones son una forma de implementar modularidad.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un programa modular se compone de múltiples funciones (o clases/módulos en otros lenguajes).<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Cada función debe cumplir una sola responsabilidad (principio SRP).<br> <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Estructura general de una función (ejemplo en C):* <br> 
&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Elaboración de un algoritmo use una función que sume dos números. <br><br>*

```c

    #include <stdio.h>
    int sumar(int a, int b) {
        return a + b; 
    }
    int main() {
        int x = 5, y = 3;
        int resultado = sumar(x, y); 
        printf("La suma es: %d\n", resultado);
        return 0;
    }
```

### 🔹 Ejemplo con pase de parámetro por valor
&nbsp;&nbsp;&nbsp;&nbsp;Cuando se utiliza el pase de parámetros por valor, se crea una copia del valor de la variable que se pasa a la función. Esto significa <br>&nbsp;&nbsp;&nbsp;&nbsp;que cualquier cambio realizado en la variable dentro de la función no afectará a la variable original fuera de ella<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Ejemplo de Paso por Valor: Duplicar un Número <br><br>*
<p align = "center"><img width="666" height="432" alt="image" src="https://github.com/user-attachments/assets/7d374349-e492-4f2a-aafc-08c0f5e05193" /></p>

#### <p align = "center">*Imagen 1: Ejemplo de Paso por Valor: Duplicar un Número* </p><br>

&nbsp;&nbsp;&nbsp;***◈ Explicación del ejercicio:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Este programa duplica el valor de una variable, pero como usa paso por valor, la función recibe una copia de a.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Por eso, el valor original de a no cambia, solo cambia la copia dentro de la función.<br> 


### 🔹 Ejemplo con pase por referencia
&nbsp;&nbsp;&nbsp;&nbsp;El pase de parámetros por referencia es un método en programación donde, en lugar de pasar una copia del valor de una variable <br>
&nbsp;&nbsp;&nbsp;&nbsp;a una función, se pasa una referencia a la variable original. Esto significa que cualquier cambio realizado en el parámetro dentro de<br> &nbsp;&nbsp;&nbsp;&nbsp;la función afectará directamente a la variable original.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Intercambio de Valores Usando Paso por Referencia<br><br>*
<p align = "center"><img width="799" height="481" alt="image" src="https://github.com/user-attachments/assets/11bca9e0-040d-49d2-8d4d-fb876bf5a9da" /></p>

#### <p align = "center">*Imagen 2: Intercambio de Valores Usando Paso por Referencia* </p><br>

&nbsp;&nbsp;&nbsp;***◈ Explicación del ejercicio:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;• En main() se declaran dos variables:<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- a = 3<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- b = 5<br> 
&nbsp;&nbsp;&nbsp;&nbsp;• Se llama a la función:<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;intercambiarNumeros(&a, &b);<br> 
&nbsp;&nbsp;&nbsp;&nbsp;• Aquí se envían las direcciones de memoria de a y b (por eso el &).<br> 
&nbsp;&nbsp;&nbsp;&nbsp;• Dentro de la función:<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- x y y son punteros que apuntan a a y b.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Se usa una variable auxiliar aux para hacer el intercambio:<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- aux = *x  → guarda el valor de a<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- *x = *y   → ahora a toma el valor de b<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- *y = aux  → ahora b toma el valor original de a<br> 
&nbsp;&nbsp;&nbsp;&nbsp;• La función imprime los valores ya intercambiados.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;• Al volver a main(), se imprimen nuevamente a y b, mostrando que sí cambiaron fuera de la función, gracias al paso por <br> 
&nbsp;&nbsp;&nbsp;&nbsp;referencia.<br> 

---

### 2. ARREGLOS<br>

### 🔹 Unidimensionales (Vector/Lista)

&nbsp;&nbsp;&nbsp;&nbsp;***❀ Definición:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un arreglo unidimensional es una estructura de datos que permite almacenar un conjunto de elementos del mismo<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;tipo. Cada elemento del arreglo se identifica mediante un índice, que indica su posición dentro del arreglo.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;La primera posición del arreglo tiene un índice de 0, la segunda posición tiene un índice de 1, y así sucesivamente.<br> 

&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Mostrar el arreglo unideimensional o lista<br><br>*
<p align = "center"><img width="676" height="432" alt="image" src="https://github.com/user-attachments/assets/e8a000bb-852d-43c0-a975-2a3760baead8" /></p>

#### <p align = "center">*Imagen 3: Mostrar el arreglo Unideimensional o lista* </p><br>

&nbsp;&nbsp;&nbsp;***◈ Explicación del ejercicio:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Este ejemplo en C lo que hace es trabajar con un arreglo unidimensional y mostrar cómo acceder a cada uno de sus <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;elementos mediante un bucle for y el contador para la posición del arreglo.

### 🔹 Bidimensionales  (Matriz)

&nbsp;&nbsp;&nbsp;&nbsp;***❀ Definición:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un arreglo bidimensional, también conocido como matriz, es una estructura de datos que permite almacenar un <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;conjunto de elementos en una tabla de filas y columnas. Cada elemento de la matriz se identifica mediante dos<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;índices: uno para la fila y otro para la columna.<br>

&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Mostrar el arreglo bidimensional o matriz<br><br>*
<p align = "center"><img width="906" height="669" alt="image" src="https://github.com/user-attachments/assets/3afb3eb5-c078-4163-8c76-2c31c39d0160" /></p>

#### <p align = "center">*Imagen 4: Mostrar el arreglo bidimensional o matriz* </p><br>

&nbsp;&nbsp;&nbsp;***◈ Explicación del ejercicio:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Este ejemplo en C lo que hace es trabajar con un arreglo bidimensional y mostrar cómo acceder a cada uno de <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;sus elementos de forma similar a un arreglo unidimensional, es decir, con un bucle for, con la diferencia que <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;se usan dos bucles para recrrer filas y columnas del arreglo. <br>

### 🔹 Tridimensionales

&nbsp;&nbsp;&nbsp;&nbsp;***❀ Definición:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un arreglo tridimensional es una estructura de datos que almacena elementos en tres dimensiones: capas, filas <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;y columnas. Se puede imaginar como una pila de matrices bidimensionales, donde cada matriz representa una capa.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;En C, se declara especificando el tamaño de cada dimensión.<br>

&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Mostrar el arreglo tridimensional<br><br>*
<p align = "center"><img width="1117" height="718" alt="image" src="https://github.com/user-attachments/assets/5c14e8ef-f91d-455e-a427-afd1ee38851b" /></p>

#### <p align = "center">*Imagen 5: Mostrar el arreglo tridimensional* </p><br>

&nbsp;&nbsp;&nbsp;***◈ Explicación del ejercicio:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Este ejemplo en C lo que hace es trabajar con un arreglo tridimensional y mostrar cómo acceder a cada uno de <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;sus elementos mediante la implementación de tres bucles for, los cuales recorren, capas, filas y columnas.<br>

---
### 3. PRINCIPALES DIFICULTADES EN LA APLICACIÓN DE LOS CONTENIDOS
Durante el proceso de aprendizaje enfrenté varias dificultades que logré superar con práctica y acompañamiento. Entre ellas destaco:  

❀ ***Parámetros por paso de referencia***  <br>
&nbsp;&nbsp;&nbsp;&nbsp;Al inicio no comprendía cómo ni por qué se utilizaban los punteros en las funciones. Esto generaba confusión respecto a la <br> &nbsp;&nbsp;&nbsp;&nbsp;modificación de valores dentro de los procedimientos. Con la práctica entendí que el paso por referencia permite que una función <br>
&nbsp;&nbsp;&nbsp;&nbsp;altere directamente el valor de las variables originales, lo cual es fundamental para acumular resultados sin necesidad de recurrir a<br> &nbsp;&nbsp;&nbsp;&nbsp;variables globales. Esta comprensión fue clave para mejorar la eficiencia y claridad de mis programas.<br>

❀ ***Comprensión de la lógica detrás de las funciones y arreglos***  <br>
&nbsp;&nbsp;&nbsp;&nbsp;Al principio me resultaba difícil entender cómo se recorrían los arreglos y cómo se integraban con las funciones. Esto ocasionaba <br> &nbsp;&nbsp;&nbsp;&nbsp;errores en la lógica de mis programas. Sin embargo, mediante ejercicios guiados y la repetición de ejemplos prácticos, logré asimilar<br> &nbsp;&nbsp;&nbsp;&nbsp;la importancia de los bucles y la correcta indexación de los arreglos. Ahora reconozco que estas estructuras son esenciales para <br> &nbsp;&nbsp;&nbsp;&nbsp;organizar datos y resolver problemas de manera sistemática.<br>

❀ ***Aplicación de la modularidad en proyectos***<br>
&nbsp;&nbsp;&nbsp;&nbsp;Otra dificultad fue dividir correctamente un problema en módulos independientes. Tendía a concentrar demasiada lógica en una sola<br> &nbsp;&nbsp;&nbsp;&nbsp;función, lo que hacía el código menos legible. Con la práctica comprendí que la modularidad no solo facilita la lectura y <br> &nbsp;&nbsp;&nbsp;&nbsp;mantenimiento del programa, sino que también permite reutilizar funciones en diferentes contextos.<br>

---
### 4. REFLEXIÓN CRÍTICA DE LOS APRENDIZAJES DE LA UNIDAD
❃ ***Importancia de los aprendizajes adquiridos***  <br>
&nbsp;&nbsp;&nbsp;&nbsp;Los contenidos vistos en esta unidad los considero fundamentales, ya que demuestran cómo la programación estructurada y modular<br>
&nbsp;&nbsp;&nbsp;&nbsp;permite resolver problemas de manera más ordenada y eficiente. Estos conocimientos no solo son aplicables en el ámbito académico, sino<br>
&nbsp;&nbsp;&nbsp;&nbsp;también en el profesional, donde la claridad y la reutilización del código son altamente valoradas.<br>


❃ ***Aporte de la docente en el proceso***  <br>
&nbsp;&nbsp;&nbsp;&nbsp;La enseñanza impartida por la docente fue óptima, pues se enfocó en que los estudiantes comprendieran los conceptos antes de avanzar.<br> &nbsp;&nbsp;&nbsp;&nbsp;Gracias a ello, la modularidad y el manejo de estructuras de datos estáticas fueron asimilados con mayor facilidad. El acompañamiento<br> &nbsp;&nbsp;&nbsp;&nbsp;constante permitió que las dudas se resolvieran oportunamente, generando confianza en el proceso de aprendizaje<br>

❃ ***Autocrítica y proyección personal*** <br>
&nbsp;&nbsp;&nbsp;&nbsp;Considero que los temas de arreglos y modularidad requieren un estudio más profundo por cuenta propia, ya que el tiempo en clase no<br> &nbsp;&nbsp;&nbsp;&nbsp;fue suficiente para alcanzar un dominio completo. Es necesario reforzar estos conocimientos mediante práctica adicional y proyectos<br>
&nbsp;&nbsp;&nbsp;&nbsp;personales, lo que permitirá afianzar la lógica de programación y adquirir mayor seguridad al enfrentar problemas más complejos.<br>


---
### 🗂️ 5. TAREAS ENTREGADAS

### 5.1. APRENDIZAJE AUTÓNOMO (AA)
### 🔹 [AA1. Curso Fundamentos de Python 1. Computación UNL](UNIDAD%203/Actividades/AA1%20-%20Python_Essentials_1_certificate_kiaracondoy.pdf)
&nbsp;&nbsp;&nbsp;&nbsp;En el trabajo AA1 se desarrolló el Curso virtual de Fundamentos de Python de Cisco Networking Academy. En el mismo se desarrollaron<br>
&nbsp;&nbsp;&nbsp;&nbsp;ejercicios y actividades para aprender la sintaxis y lógica usada en este lenguaje de alto nivel.<br>


### 5.2. APRENDIZAJE PRÁCTICO EXPERIMENTAL (APE)
### 🔹 [APE1. Construcción de funciones y procedimientos en un lenguaje de programación](UNIDAD%203/Actividades/Teoría%20de%20la%20programación%20-U3-%20APE%201.pdf)
&nbsp;&nbsp;&nbsp;&nbsp;El APE1 iene como propósito introducir y reforzar los fundamentos de la programación modular, destacando el uso de funciones y el <br>
&nbsp;&nbsp;&nbsp;&nbsp;manejo de parámetros por valor y por referencia. Se plantea como una guía teórica y práctica para que el estudiante comprenda cómo <br> &nbsp;&nbsp;&nbsp;&nbsp;dividir un problema en módulos más pequeños y manejables, logrando así programas más claros, reutilizables y fáciles de mantener.<br>
&nbsp;&nbsp;&nbsp;&nbsp;El APE espera que el estudiante experimente y consolide los conceptos de modularidad y funciones, aplicándolos en problemas guiados <br> &nbsp;&nbsp;&nbsp;&nbsp;por el docente. De esta manera, se fortalece la capacidad de análisis, diseño y codificación de soluciones estructuradas en programación.<br>



### 🔹 [APE2. Implementación de funciones utilizando elpaso de parámetros por valor y porreferencia.](UNIDAD%203/Actividades/Teoría%20de%20la%20programación%20-U3-%20APE%202.c)
&nbsp;&nbsp;&nbsp;&nbsp;El APE2 tuvo como propósito que el estudiante consolidara sus conocimientos sobre programación modular y el uso de funciones con paso<br> &nbsp;&nbsp;&nbsp;&nbsp;de parámetros por valor y por referencia. Se desarrolló un programa que simula la atención de clientes en un local de videojuegos,<br> 
&nbsp;&nbsp;&nbsp;&nbsp;calculando el valor a pagar según la consola utilizada y acumulando el total recaudado en el día.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Se trabajó en cuatro fases principales:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Análisis del problema: identificación de entradas, procesos y salidas.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Diseño modular: definición de funciones para el cálculo individual y acumulado.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Codificación: implementación en un lenguaje de programación aplicando buenas prácticas.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Pruebas: verificación de resultados y manejo de errores en datos inválidos.<br>
&nbsp;&nbsp;&nbsp;&nbsp;El resultado fue un programa funcional que permitió reforzar la comprensión de la modularidad y el manejo de parámetros, logrando un<br> &nbsp;&nbsp;&nbsp;&nbsp;aprendizaje práctico y guiado.<br>


