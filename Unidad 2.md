<div align="center">  
	 
### 💻 UNIDAD 2: ESTRUCTURAS ALGORÍTMICAS DE CONTROL ✨<br><br>
</div>

## 📘 Índice de Contenidos

### 1. CONTENIDOS DE LA UNIDAD

- **1.1.** [Estructuras condicionales (tipos y ejercicios en diagrama de flujo y en C)]()
  - [Estructura Condicional Simple (Si ..Entonces)]()
  - [Estructura Condicional Doble (Si ..Entonces, Sino ..)]()
  - [Estructura Condicional Múltiple (En caso de ....)]()
- **1.2.** [Estructuras repetitivas (tipos y ejercicios en diagrama de fl ujo y en C)]()
  - [Estructura Mientras]()
  - [Estructura Hacer .. Mientras (Repetir ..Hasta)]()
  - [Estructura Para]()
- **1.3.** [Ejercicio combinando estructura condicional y repetitiva (Python)]()  
  - [Descripción del problema]()  
  - [Diagrama de flujo simplificado]()
  - [Programa]()
  - [Verificación]()
- **1.4.** [Principales dificultades en la aplicación de los contenidos.]()  
- **1.5.** [Reflexión crítica de los aprendizajes de la unidad.]()  

### 2. TAREAS ENTREGADAS Y ACTIVIDADES ELABORADAS

#### ✏️ *Aprendizaje Autónomo*
- **2.1.** [Diferencias entre los tipos de estructuras condicionales]()  
- **2.2.** [Cuadro comparativo entre las estructuras repetitivas]()

#### 🧪 *Aprendizaje Práctico Experimental*
- **2.3.** [Aplicación de estructuras condicionales en la resolución de problemas]()  
- **2.4.** []()

---

## 🗂️ CONTENIDOS DE LA UNIDAD

### 1.1. ESTRUCTURAS CONDICIONALES<br>
	
### 🔹 Estructura Condicional Simple (if)
&nbsp;&nbsp;&nbsp;&nbsp;Evalúa una condición booleana:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**✓** Si la condición es verdadera, ejecuta un bloque de código.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**✕** Si es falsa, no hace nada y continúa con la ejecución.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Es la forma más básica de decisión.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** Elaboración de un algoritmo que acepte un número y muestre en pantalla si es par. <br><br>
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="818" height="307" alt="image" src="https://github.com/user-attachments/assets/3cc7a25f-18ce-47c8-b407-c6ddb363b764" /></p><br><p align = "center">*Imagen 1: Diagrama de flujo del ejercicio de la Estructura Condicional Simple (if)* </p><br>
	► **Ejercicio en C**
	<p align = "center"><img width="632" height="431" alt="image" src="https://github.com/user-attachments/assets/392727b6-e1da-4ecc-b70c-daa444e648b2" /></p><br><p align = "center">*Imagen 2: Código del ejercicio en C de la Estructura Condicional Simple (if)* </p><br>

### 🔹 Estructura Condicional Doble (if - else)
&nbsp;&nbsp;&nbsp;&nbsp;Extiende el if simple para manejar dos caminos posibles:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**✓** Uno si la condición es verdadera<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**✕** Otro si la condición es falsa.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Muy útil cuando se debe elegir entre dos opciones mutuamente excluyentes.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** Elaboración de un algoritmo que acepte un número y muestre en pantalla si es par o impar.<br><br>
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="952" height="303" alt="image" src="https://github.com/user-attachments/assets/d767058d-c352-4be3-9aab-3e9bf00e41ff" /></p><br><p align = "center">*Imagen 3: Diagrama de flujo del ejercicio de la Estructura Condicional Doble (if - else)* </p><br>
	► **Ejercicio en C**<br>
	<br><p align = "center"><img width="628" height="283" alt="image" src="https://github.com/user-attachments/assets/a8efa708-7167-47ac-8f65-eaee0845b99c" /></p><br><p align = "center">*Imagen 4: Código del ejercicio en C de la Estructura Condicional Doble (if - else)* </p><br>

### 🔹 Estructura Condicional Múltiple (switch - case)
&nbsp;&nbsp;&nbsp;&nbsp;Permite evaluar distintos casos específicos según el valor de una variable.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Cada valor posible activa un bloque de instrucciones diferente.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Incluye la opción default para manejar cualquier caso no previsto.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**➡** Es práctico cuando existen varias alternativas claramente definidas, como menús o selección de opciones.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** Elaboración de una calculadora que según la letra seleccionada: multiplique, sume, reste o divida.<br><br>
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="1854" height="331" alt="image" src="https://github.com/user-attachments/assets/0fe03695-f0c6-408c-8a31-c5fbe08d6f35" /></p><br><p align = "center">*Imagen 5: Diagrama de flujo del ejercicio de la Estructura Condicional Múltiple (switch - case)* </p><br>
	► **Ejercicio en C**<br>
	<p align = "center"><img width="1150" height="992" alt="image" src="https://github.com/user-attachments/assets/ba22d11a-a1b0-4ca4-9ca1-bd351280e7c8" /></p><br><p align = "center">*Imagen 6: Código del ejercicio en C de la Estructura Condicional Múltiple (switch - case)* </p><br>

### 1.2. ESTRUCTURAS REPETITIVAS
### 🔹 Estructura del Ciclo Mientras (While) 
&nbsp;&nbsp;&nbsp;&nbsp;Es un bucle condicional en el cual el número de repeticiones depende de las instrucciones y los datos a procesar.<br>
&nbsp;&nbsp;&nbsp;&nbsp;La condición se comprueba al inicio del ciclo:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**➡** Si la condición es verdadera, se ejecuta el bloque de instrucciones; si es falsa, el ciclo no se ejecuta.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Es comúnmente usada cuando no se conoce la cantidad exacta de veces que se repetirá el ciclo.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** Elaboración de un programa donde se sumen los 5 primeros numeros enteros positivos.<br><br>
	► **Diagrama de Flujo**<br>
	<p align = "center"><img width="436" height="321" alt="image" src="https://github.com/user-attachments/assets/fb7bc693-5c40-4717-af55-2ac950fc0766" /></p><br><p align = "center"> *Imagen 7: Diagrama de flujo del ejercicio de la Estructura del Ciclo Mientras (While)* </p><br>
	► **Ejercicio en C**<br>
	<p align = "center"><img width="535" height="359" alt="image" src="https://github.com/user-attachments/assets/8b2a9c21-71a9-4a68-9bfa-134b7b94b446" /></p><br><p align = "center">*Imagen 8: Código del ejercicio en C de la Estructura del Ciclo Mientras (While)* </p><br>
	
### .3. EJERCICIO COMBINADO












### 3. [📎 ANEXOS](Unidad%201.md#%EF%B8%8F-anexos)

---
