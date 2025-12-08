<div align = "center">

# 💻 UNIDAD 2: ESTRUCTURAS ALGORÍTMICAS DE CONTROL ✨<br><br>
</div>

## 📘 ÍNDICE DE CONTENIDOS

### Contenidos de la Unidad

***1.** [Estructuras condicionales (tipos y ejercicios en diagrama de flujo y en C)](Unidad%202.md#11-estructuras-condicionales)*
  - [Estructura Condicional Simple (Si ..Entonces)](Unidad%202.md#-estructura-condicional-simple-if)
  - [Estructura Condicional Doble (Si ..Entonces, Sino ..)](Unidad%202.md#-estructura-condicional-doble-if---else)
  - [Estructura Condicional Múltiple (En caso de ....)](Unidad%202.md#-estructura-condicional-m%C3%BAltiple-switch---case)<br>

***2.** [Estructuras repetitivas (tipos y ejercicios en diagrama de fl ujo y en C)](Unidad%202.md#12-estructuras-repetitivas)*
  - [Estructura Mientras](Unidad%202.md#-estructura-del-ciclo-mientras-while)
  - [Estructura Hacer .. Mientras (Repetir ..Hasta)](Unidad%202.md#-estructura-del-ciclo-hacer--mientras-do---while)
  - [Estructura Para](Unidad%202.md#-estructura-del-ciclo-para-for)<br>

***3.** [Ejercicio combinando estructura condicional y repetitiva en Python](Unidad%202.md#13-ejercicio-combinando-estructura-condicional-y-repetitiva-en-python)*  
  - [Descripción del problema](Unidad%202.md#-descripci%C3%B3n-del-problema)  
  - [Diagrama de flujo simplificado](Unidad%202.md#-diagrama-de-flujo-simplificado)
  - [Programa](Unidad%202.md#-programa)
  - [Verificación](Unidad%202.md#-verificaci%C3%B3n)<br>

***4.** [Principales dificultades en la aplicación de los contenidos](Unidad%202.md#4-principales-dificultades-en-la-aplicaci%C3%B3n-de-los-contenidos)*<br>

***5.** [Reflexión crítica de los aprendizajes de la unidad](Unidad%202.md#5-refelxi%C3%B3n-cr%C3%ADtica-de-los-aprendizajes-de-la-unidad)*<br>

***6.** [Tareas entregadas y elaboradas](Unidad%202.md#%EF%B8%8F-6-tareas-entregadas)*<br>
- [Aprendizaje Autónomo](Unidad%202.md#61-aprendizaje-aut%C3%B3nomo-aa)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [Diferencias entre los tipos de estructuras condicionales](Unidad%202.md#-diferencias-entre-los-tipos-de-estructuras-condicionales)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [Cuadro comparativo entre las estructuras repetitivas](Unidad%202.md#-cuadro-comparativo-entre-las-estructuras-repetitivas)<br>

- [Aprendizaje Práctico Experimental](Unidad%202.md#62-aprendizaje-pr%C3%A1ctico-experimental-ape)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [Aplicación de estructuras condicionales en la resolución de problemas](Unidad%202.md#-aplicaci%C3%B3n-de-estructuras-condicionales-en-la-resoluci%C3%B3n-de-problemas)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ [Aplicación de estructuras repetitivas en la resolución de problemas](Unidad%202.md#-aplicaci%C3%B3n-de-estructuras-repetitivas-en-la-resoluci%C3%B3n-de-problemas)<br>  

## 📘 ÍNDICE DE IMÁGENES
- [Imagen 1](Unidad%202.md#-estructura-condicional-simple-if): Diagrama de flujo del ejercicio de la Estructura Condicional Simple (if)
- [Imagen 2](Unidad%202.md#imagen-1-diagrama-de-flujo-del-ejercicio-de-la-estructura-condicional-simple-if-): Código del ejercicio en C de la Estructura Condicional Simple (if)
- [Imagen 3](Unidad%202.md#-estructura-condicional-doble-if---else): Diagrama de flujo del ejercicio de la Estructura Condicional Doble (if - else)
- [Imagen 4](Unidad%202.md#imagen-3-diagrama-de-flujo-del-ejercicio-de-la-estructura-condicional-doble-if---else-): Código del ejercicio en C de la Estructura Condicional Doble (if - else)
- [Imagen 5](Unidad%202.md#-estructura-condicional-m%C3%BAltiple-switch---case): Diagrama de flujo del ejercicio de la Estructura Condicional Múltiple (switch - case)
- [Imagen 6](Unidad%202.md#imagen-5-diagrama-de-flujo-del-ejercicio-de-la-estructura-condicional-m%C3%BAltiple-switch---case-): Código del ejercicio en C de la Estructura Condicional Múltiple (switch - case)
- [Imagen 7](Unidad%202.md#-estructura-del-ciclo-mientras-while): Diagrama de flujo del ejercicio de la Estructura del Ciclo Mientras (While)
- [Imagen 8](Unidad%202.md#-imagen-7-diagrama-de-flujo-del-ejercicio-de-la-estructura-del-ciclo-mientras-while-): Código del ejercicio en C de la Estructura del Ciclo Mientras (While)
- [Imagen 9](Unidad%202.md#-estructura-del-ciclo-hacer--mientras-do---while): Diagrama de flujo del ejercicio de la Estructura del Ciclo Hacer .. Mientras (Do - while)
- [Imagen 10](Unidad%202.md#-imagen-9-diagrama-de-flujo-del-ejercicio-de-la-estructura-del-ciclo-hacer--mientras-do---while-): Código del ejercicio en C de la Estructura del Ciclo Hacer .. Mientras (Do - while)
- [Imagen 11](Unidad%202.md#-estructura-del-ciclo-para-for): Diagrama de flujo del ejercicio de la Estructura del Ciclo Para (For)
- [Imagen 12](Unidad%202.md#-imagen-11-diagrama-de-flujo-del-ejercicio-de-la-estructura-del-ciclo-para---for-): Código del ejercicio en C de la Estructura del Ciclo Para (For)
  
---

## 🗂️ CONTENIDOS DE LA UNIDAD

### 1. ESTRUCTURAS CONDICIONALES<br>
	
### 🔹 Estructura Condicional Simple (if)
&nbsp;&nbsp;&nbsp;&nbsp;Evalúa una condición booleana:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;***✓*** Si la condición es verdadera, ejecuta un bloque de código.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;***✕*** Si es falsa, no hace nada y continúa con la ejecución.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Es la forma más básica de decisión.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Elaboración de un algoritmo que acepte un número y muestre en pantalla si es par. <br><br>*
&nbsp;&nbsp;&nbsp;&nbsp;► **Diagrama de Flujo**<br>
<p align = "center"><img width="913" height="230" alt="image" src="https://github.com/user-attachments/assets/96bdeecf-70d9-4407-a648-67c4a017e3e0" /></p>

#### <p align = "center">*Imagen 1: Diagrama de flujo del ejercicio de la Estructura Condicional Simple (if)* </p>

&nbsp;&nbsp;&nbsp;&nbsp;► **Ejercicio en C**<br><br>
<p align = "center"><img width="632" height="431" alt="image" src="https://github.com/user-attachments/assets/392727b6-e1da-4ecc-b70c-daa444e648b2" /></p>

#### <p align = "center">*Imagen 2: Código del ejercicio en C de la Estructura Condicional Simple (if)* </p><br>

### 🔹 Estructura Condicional Doble (if - else)
&nbsp;&nbsp;&nbsp;&nbsp;Extiende el if simple para manejar dos caminos posibles:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;***✓*** Uno si la condición es verdadera<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;***✕*** Otro si la condición es falsa.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Muy útil cuando se debe elegir entre dos opciones mutuamente excluyentes.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Elaboración de un algoritmo que acepte un número y muestre en pantalla si es par o impar.<br><br>*
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="1148" height="306" alt="image" src="https://github.com/user-attachments/assets/28a11a07-d204-4422-ad55-f96dea679460" /></p>
#### <p align = "center">*Imagen 3: Diagrama de flujo del ejercicio de la Estructura Condicional Doble (if - else)* </p><br>
	
&nbsp;&nbsp;&nbsp;&nbsp;► **Ejercicio en C**<br>
	<br><p align = "center"><img width="628" height="283" alt="image" src="https://github.com/user-attachments/assets/a8efa708-7167-47ac-8f65-eaee0845b99c" /></p>
	
#### <p align = "center">*Imagen 4: Código del ejercicio en C de la Estructura Condicional Doble (if - else)* </p><br>

### 🔹 Estructura Condicional Múltiple (switch - case)
&nbsp;&nbsp;&nbsp;&nbsp;Permite evaluar distintos casos específicos según el valor de una variable.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Cada valor posible activa un bloque de instrucciones diferente.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Incluye la opción default para manejar cualquier caso no previsto.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Es práctico cuando existen varias alternativas claramente definidas, como menús o selección de opciones.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Elaboración de una calculadora que según la letra seleccionada: multiplique, sume, reste o divida.<br><br>*
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="1854" height="207" alt="image" src="https://github.com/user-attachments/assets/678b8b2c-ca1f-4a1e-93fc-ec976db90f1b" /></p>
#### <p align = "center">*Imagen 5: Diagrama de flujo del ejercicio de la Estructura Condicional Múltiple (switch - case)* </p><br>
&nbsp;&nbsp;&nbsp;&nbsp;► **Ejercicio en C**<br><br>
	<p align = "center"><img width="1150" height="992" alt="image" src="https://github.com/user-attachments/assets/ba22d11a-a1b0-4ca4-9ca1-bd351280e7c8" /></p>
#### <p align = "center">*Imagen 6: Código del ejercicio en C de la Estructura Condicional Múltiple (switch - case)* </p><br>

### 2. ESTRUCTURAS REPETITIVAS
### 🔹 Estructura del Ciclo Mientras (While) 
&nbsp;&nbsp;&nbsp;&nbsp;Es un bucle condicional en el cual el número de repeticiones depende de las instrucciones y los datos a procesar.<br>
&nbsp;&nbsp;&nbsp;&nbsp;La condición se comprueba al inicio del ciclo:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ***✓*** Si la condición es verdadera, se ejecuta el bloque de instrucciones
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ***✕*** Si es falsa, el ciclo no se ejecuta.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Es comúnmente usada cuando no se conoce la cantidad exacta de veces que se repetirá el ciclo.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Elaboración de un programa donde se sumen los 5 primeros numeros enteros positivos.<br><br>*
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="525" height="320" alt="image" src="https://github.com/user-attachments/assets/8cf64079-77fd-4c04-a692-293dd7866a9a" /></p>
#### <p align = "center"> *Imagen 7: Diagrama de flujo del ejercicio de la Estructura del Ciclo Mientras (While)* </p><br>
&nbsp;&nbsp;&nbsp;&nbsp;► **Ejercicio en C**<br>
	<p align = "center"><img width="535" height="359" alt="image" src="https://github.com/user-attachments/assets/8b2a9c21-71a9-4a68-9bfa-134b7b94b446" /></p>
#### <p align = "center">*Imagen 8: Código del ejercicio en C de la Estructura del Ciclo Mientras (While)* </p><br>

### 🔹 Estructura del Ciclo Hacer .. Mientras (Do - while)
&nbsp;&nbsp;&nbsp;&nbsp;Es un bucle condicional que comprueba la condición al final del ciclo.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Garantiza que las instrucciones dentro del bucle se ejecuten al menos una vez, independientemente de la condición.<br>
&nbsp;&nbsp;&nbsp;&nbsp;El ciclo termina cuando la condición se cumple.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Se utiliza cuando se desea asegurar la ejecución inicial de las instrucciones antes de evaluar la condición.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Elaboración de un programa donde se cuenta los números positivos introducidos por teclado y se detiene el bucle cuando <br>&nbsp;&nbsp;&nbsp;&nbsp;se lee un número negativo o cero.<br><br>*
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="701" height="460" alt="image" src="https://github.com/user-attachments/assets/978d4687-c109-4537-913a-3aaee99fac93" /></p>
#### <p align = "center"> *Imagen 9: Diagrama de flujo del ejercicio de la Estructura del Ciclo Hacer .. Mientras (Do - while)* </p><br>
&nbsp;&nbsp;&nbsp;&nbsp;► **Ejercicio en C**<br><br>
	<p align = "center"><img width="763" height="433" alt="image" src="https://github.com/user-attachments/assets/6b813939-d52f-4270-8c2d-567b632b1d7f" /></p>
#### <p align = "center">*Imagen 10: Código del ejercicio en C de la Estructura del Ciclo Hacer .. Mientras (Do - while)* </p><br>

### 🔹 Estructura del Ciclo Para (For)
&nbsp;&nbsp;&nbsp;&nbsp;Es un bucle de control que repite las acciones del cuerpo del ciclo por un número específico de veces.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Requiere un contador que controla la cantidad de iteraciones.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Se debe especificar:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- El valor de inicio del contador.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- El valor final del contador.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- El valor del paso (incremento o decremento).<br>
&nbsp;&nbsp;&nbsp;&nbsp;Es útil cuando se conoce de antemano la cantidad exacta de repeticiones necesarias.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Elaboración de un algoritmo que muestre en pantalla la suma de las siguientes sumas sucesivas: 1/2 + 1/3 + 1/4 + 1/5 <br>&nbsp;&nbsp;&nbsp;&nbsp;+...+ 1/50.*
<br><br>
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="1253" height="562" alt="image" src="https://github.com/user-attachments/assets/a7682b30-16e2-48c7-806f-f9e04dc0c9b1" /></p>
#### <p align = "center"> *Imagen 11: Diagrama de flujo del ejercicio de la Estructura del Ciclo Para (For)* </p><br>
&nbsp;&nbsp;&nbsp;&nbsp;► **Ejercicio en C**<br><br>
	<p align = "center"><img width="527" height="455" alt="image" src="https://github.com/user-attachments/assets/f0de149a-84f4-4f82-b58f-6d6105a57b4d" /></p>
#### <p align = "center">*Imagen 12: Código del ejercicio en C de la Estructura del Ciclo Para (For)* </p><br>
	
---
### 3. EJERCICIO COMBINANDO ESTRUCTURA CONDICIONAL Y REPETITIVA EN PYTHON<br>
### 🔹 Descripción del problema

### 🔹 Diagrama de flujo simplificado

### 🔹 Programa

### 🔹 Verificación



---
### 4. PRINCIPALES DIFICULTADES EN LA APLICACIÓN DE LOS CONTENIDOS
Durante el proceso de aprendizaje enfrenté varias dificultades que logré superar con práctica y acompañamiento. Entre ellas destaco:  

❀ ***Estructuras repetitivas (bucles)***  
&nbsp;&nbsp;&nbsp;&nbsp;Al inicio me resultó complicado comprender el uso de **contadores** y **acumuladores**. No entendía en qué momento debía inicializar cada <br>&nbsp;&nbsp;&nbsp;&nbsp;uno ni cómo aplicarlos según el problema. Con la ayuda del docente y la práctica constante, poco a poco estos conceptos se fueron <br>&nbsp;&nbsp;&nbsp;&nbsp;aclarando y se volvieron más manejables.  

❀ ***Comprensión de la lógica detrás del código***  
&nbsp;&nbsp;&nbsp;&nbsp;En ocasiones me costaba visualizar cómo las instrucciones se ejecutaban paso a paso dentro de un ciclo. Aprendí que es útil trazar el <br>&nbsp;&nbsp;&nbsp;&nbsp;programa manualmente (simularlo en papel) mediante **pruebas de esctritorio** para entender mejor su funcionamiento.  

❀ ***Aplicación en diferentes lenguajes***  
&nbsp;&nbsp;&nbsp;&nbsp;Al principio me limité a trabajar solo en C, pero comprendí que es importante **practicar en otros lenguajes** como Python o Java para <br>&nbsp;&nbsp;&nbsp;&nbsp;fortalecer la lógica y no depender de una sola sintaxis.  

❀ ***Gestión del tiempo en la resolución de problemas***  
&nbsp;&nbsp;&nbsp;&nbsp;Me tomó más tiempo de lo esperado resolver algunos ejercicios, especialmente los que combinaban condicionales y repetitivas. Aprendí que <br>&nbsp;&nbsp;&nbsp;&nbsp;la **organización previa del algoritmo** facilita mucho la codificación posterior.  

❀ ***Confianza en mis habilidades***  
&nbsp;&nbsp;&nbsp;&nbsp;Al inicio sentía inseguridad al enfrentar problemas nuevos. Con la práctica y el acompañamiento de la docente, fui ganando confianza y <br>&nbsp;&nbsp;&nbsp;&nbsp;entendí que equivocarse es parte del proceso de aprendizaje.  

---
### 5. REFELXIÓN CRÍTICA DE LOS APRENDIZAJES DE LA UNIDAD
❃ ***Importancia de los aprendizajes adquiridos***  
&nbsp;&nbsp;&nbsp;&nbsp;Soy consciente de que los conocimientos obtenidos en esta unidad con respecto a los temas de estructuras condicionales y repetitivas son <br>&nbsp;&nbsp;&nbsp;&nbsp;y serán fundamentales a lo largo de mi formación como programadora, ya que permiten **facilitar y optimizar la resolución de <br>&nbsp;&nbsp;&nbsp;&nbsp;problemas** en distintos contextos.

❃ ***Aporte de la docente en el proceso***  
&nbsp;&nbsp;&nbsp;&nbsp;Considero que la enseñanza impartida por la docente fue **precisa y esencial**, lo que contribuyó de manera significativa al <br>&nbsp;&nbsp;&nbsp;&nbsp;entendimiento y correcta aplicación de las **estructuras condicionales y repetitivas**.

❃ ***Valor de los diagramas de flujo***
<br>&nbsp;&nbsp;&nbsp;&nbsp;El trabajo constante con **diagramas de flujo** resultó especialmente interesante y, al reflexionar, reconozco que es una herramienta <br>&nbsp;&nbsp;&nbsp;&nbsp;muy importante. Estos diagramas permiten **sintetizar la lógica detrás del programa**, lo cual es imperativo en proyectos donde se <br>&nbsp;&nbsp;&nbsp;&nbsp;requiere diseñar soluciones antes de codificarlas. Comprendí que dominar estas herramientas no solo mejora la calidad del código, <br>&nbsp;&nbsp;&nbsp;&nbsp;sino también la **capacidad de planificar soluciones eficientes**. Esto será clave en mi desarrollo profesional y en la creación de <br>&nbsp;&nbsp;&nbsp;&nbsp;programas más estructurados y claros.

---
### 🗂️ 6. TAREAS ENTREGADAS

### 6.1. APRENDIZAJE AUTÓNOMO (AA)
### 🔹 [Diferencias entre los tipos de estructuras condicionales](UNIDAD%202/Teoría%20de%20la%20programación%20-U2-%20AA%201.pdf)
&nbsp;&nbsp;&nbsp;&nbsp;En el trabajo AA1 se elaboró una infografía enfocada en el tema de estructuras condicionales. Para ello, se realizó una investigación 
<br>&nbsp;&nbsp;&nbsp;&nbsp;que permitió definir los tres tipos de estructuras condicionales revisadas en clase, junto con su respectiva forma de uso. Además, se <br>&nbsp;&nbsp;&nbsp;&nbsp;desarrolló un ejercicio en la plataforma HackerRank, aplicando de manera práctica los conocimientos adquiridos.

### 🔹 [Cuadro comparativo entre las estructuras repetitivas](UNIDAD%202/Teoría%20de%20la%20programación%20-U2-%20AA%202.pdf)
&nbsp;&nbsp;&nbsp;&nbsp;En el trabajo AA2 se presentó un informe sobre las estructuras o bucles repetitivos. Se llevó a cabo una investigación para definir tres <br>&nbsp;&nbsp;&nbsp;&nbsp;tipos de bucles, describiendo su estructura y mostrando un ejemplo sencillo de aplicación. Posteriormente, se resolvió un ejercicio <br>&nbsp;&nbsp;&nbsp;&nbsp;propuesto en la plataforma OmegaUp, en el cual se implementaron estas estructuras repetitivas. El código fue desarrollado, validado y <br>&nbsp;&nbsp;&nbsp;&nbsp;registrado como evidencia del aprendizaje.

### 6.2. APRENDIZAJE PRÁCTICO EXPERIMENTAL (APE)
### 🔹 [Aplicación de estructuras condicionales en la resolución de problemas](UNIDAD%202/Teoría%20de%20la%20programación%20-U2-%20APE%201.pdf)
&nbsp;&nbsp;&nbsp;&nbsp;El APE1 tuvo como objetivo la práctica de las estructuras condicionales. Para ello, se utilizó el ejercicio desarrollado en el examen de <br>&nbsp;&nbsp;&nbsp;&nbsp;la primera unidad, al cual se le añadió una calificación cualitativa para los estudiantes según su nota. Además, se realizó la <br>&nbsp;&nbsp;&nbsp;&nbsp;validación del código y se registraron las respuestas a las preguntas de control, demostrando el dominio del tema.

### 🔹 [Aplicación de estructuras repetitivas en la resolución de problemas](UNIDAD%202/Teoría%20de%20la%20programación%20-U2-%20APE%202.pdf)
&nbsp;&nbsp;&nbsp;&nbsp;El APE2 fue una continuación del APE1, en el que se implementaron estructuras repetitivas para controlar los datos ingresados por el <br>&nbsp;&nbsp;&nbsp;&nbsp;usuario, asegurando que las notas estuvieran dentro del rango permitido. Se añadió un bucle for que permitió aplicar el programa a <br>&nbsp;&nbsp;&nbsp;&nbsp;toda una clase, ingresando la cantidad de alumnos a evaluar y repitiendo las instrucciones las veces necesarias. Finalmente, se <br>&nbsp;&nbsp;&nbsp;&nbsp;elaboró la documentación correspondiente del ejercicio, junto con las respuestas a las preguntas de control, conclusiones y <br>&nbsp;&nbsp;&nbsp;&nbsp;recomendaciones.
