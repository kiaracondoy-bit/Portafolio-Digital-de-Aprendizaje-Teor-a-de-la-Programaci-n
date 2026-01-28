<div align = "center">

# 💻 UNIDAD 3: PROGRAMACIÓN MODULAR Y ESTRUCTURA DE DATOS ESTÁTICAS ✨<br><br>
</div>

## 📘 ÍNDICE DE CONTENIDOS

### Contenidos de la Unidad

***1.** [Modularidad]()*
  - [Teoría]()
  - [Funciones]()
  - [Ejemplo con pase de parámetro por valor]()
  - [Ejemplo con pase por referencia]()<br>

***2.** [Arreglos]()*
  - [Unidimensionales (Vector/Lista)]()
  - [Bidimensionales  (Matriz)]()
  - [Tridimensionales]()<br>

***3.** [Principales dificultades en la aplicación de los contenidos]()*<br>

***4.** [Reflexión crítica de los aprendizajes de la unidad]()*<br>

***5.** [Tareas entregadas y elaboradas]()*<br>
- [Aprendizaje Autónomo]()<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ []()<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ []()<br>

- [Aprendizaje Práctico Experimental]()<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ []()<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;◦ []()<br>  

---

## 📘 ÍNDICE DE IMÁGENES
- [Imagen 1](): 


## 🗂️ CONTENIDOS DE LA UNIDAD

### 1. MODULARIDAD<br>
	
### 🔹 Teoría
&nbsp;&nbsp;&nbsp;&nbsp;La modularidad consiste en dividir un programa en partes más pequeñas y manejables llamadas módulos. Cada módulo es 
&nbsp;&nbsp;&nbsp;&nbsp;independiente y cumple una función específica dentro del sistema.<br> 

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
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Una función es un bloque de código que realiza una tarea específica y puede ser llamado desde cualquier parte del programa.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Las funciones son una forma de implementar modularidad.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un programa modular se compone de múltiples funciones (o clases/módulos en otros lenguajes).<br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Cada función debe cumplir una sola responsabilidad (principio SRP).<br> <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Estructura general de una función (ejemplo en C):* <br> 
&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Elaboración de un algoritmo use una función que sume dos números. <br><br>*
   
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

### 🔹 Ejemplo con pase de parámetro por valor
&nbsp;&nbsp;&nbsp;&nbsp;Cuando se utiliza el pase de parámetros por valor, se crea una copia del valor de la variable que se pasa a la función. Esto significa <br>&nbsp;&nbsp;&nbsp;&nbsp;que cualquier cambio realizado en la variable dentro de la función no afectará a la variable original fuera de ella<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;***EJERCICIO:*** *Ejemplo de Paso por Valor: Duplicar un Número <br><br>*
<p align = "center"><img width="666" height="432" alt="image" src="https://github.com/user-attachments/assets/7d374349-e492-4f2a-aafc-08c0f5e05193" /></p>

#### <p align = "center">*Imagen 1: Ejemplo de Paso por Valor: Duplicar un Número* </p><br>

&nbsp;&nbsp;&nbsp;***◈ Explicación del ejercicio:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;Este programa duplica el valor de una variable, pero como usa paso por valor, la función recibe una copia de a.<br> 
&nbsp;&nbsp;&nbsp;&nbsp;Por eso, el valor original de a no cambia, solo cambia la copia dentro de la función.<br> 


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

#### <p align = "center">*Imagen 2: Mostrar el arreglo Unideimensional o lista* </p><br>


### 🔹 Bidimensionales  (Matriz)

&nbsp;&nbsp;&nbsp;&nbsp;***❀ Definición:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un arreglo bidimensional, también conocido como matriz, es una estructura de datos que permite almacenar un <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;conjunto de elementos en una tabla de filas y columnas. Cada elemento de la matriz se identifica mediante dos<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;índices: uno para la fila y otro para la columna.<br>

&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Mostrar el arreglo bidimensional o matriz<br><br>*
<p align = "center"><img width="906" height="669" alt="image" src="https://github.com/user-attachments/assets/3afb3eb5-c078-4163-8c76-2c31c39d0160" /></p>

#### <p align = "center">*Imagen 2: Mostrar el arreglo bidimensional o matriz* </p><br>


### 🔹 Tridimensionales

&nbsp;&nbsp;&nbsp;&nbsp;***❀ Definición:*** <br> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Un arreglo tridimensional es una estructura de datos que almacena elementos en tres dimensiones: capas, filas y<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;columnas. Se puede imaginar como una pila de matrices bidimensionales, donde cada matriz representa una capa.<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;En C, se declara especificando el tamaño de cada dimensión.<br>

&nbsp;&nbsp;&nbsp;&nbsp;***Ejemplo:*** *Mostrar el arreglo tridimensional<br><br>*
<p align = "center"><img width="1117" height="718" alt="image" src="https://github.com/user-attachments/assets/5c14e8ef-f91d-455e-a427-afd1ee38851b" /></p>

#### <p align = "center">*Imagen 2: Mostrar el arreglo tridimensional* </p><br>


---
### 3. PRINCIPALES DIFICULTADES EN LA APLICACIÓN DE LOS CONTENIDOS
Durante el proceso de aprendizaje enfrenté varias dificultades que logré superar con práctica y acompañamiento. Entre ellas destaco:  

❀ ***Estructuras repetitivas (bucles)***  
&nbsp;&nbsp;&nbsp;&nbsp;Al inicio me resultó complicado comprender el uso de **contadores** y **acumuladores**. No entendía en qué momento debía inicializar cada <br>&nbsp;&nbsp;&nbsp;&nbsp;uno ni cómo aplicarlos según el problema. Con la ayuda del docente y la práctica constante, poco a poco estos conceptos se fueron <br>&nbsp;&nbsp;&nbsp;&nbsp;aclarando y se volvieron más manejables.  

❀ ***Comprensión de la lógica detrás del código***  
&nbsp;&nbsp;&nbsp;&nbsp;En ocasiones me costaba visualizar cómo las instrucciones se ejecutaban paso a paso dentro de un ciclo. Aprendí que es útil trazar el <br>&nbsp;&nbsp;&nbsp;&nbsp;programa manualmente (simularlo en papel) mediante **pruebas de esctritorio** para entender mejor su funcionamiento.  



---
### 4. REFELXIÓN CRÍTICA DE LOS APRENDIZAJES DE LA UNIDAD
❃ ***Importancia de los aprendizajes adquiridos***  
&nbsp;&nbsp;&nbsp;&nbsp;Soy consciente de que los conocimientos obtenidos en esta unidad con respecto a los temas de estructuras condicionales y repetitivas son <br>&nbsp;&nbsp;&nbsp;&nbsp;y serán fundamentales a lo largo de mi formación como programadora, ya que permiten **facilitar y optimizar la resolución de <br>&nbsp;&nbsp;&nbsp;&nbsp;problemas** en distintos contextos.

❃ ***Aporte de la docente en el proceso***  
&nbsp;&nbsp;&nbsp;&nbsp;Considero que la enseñanza impartida por la docente fue **precisa y esencial**, lo que contribuyó de manera significativa al <br>&nbsp;&nbsp;&nbsp;&nbsp;entendimiento y correcta aplicación de las **estructuras condicionales y repetitivas**.


---
### 🗂️ 5. TAREAS ENTREGADAS

### 5.1. APRENDIZAJE AUTÓNOMO (AA)
### 🔹 []()
&nbsp;&nbsp;&nbsp;&nbsp;En el trabajo AA1 se elaboró una infografía enfocada en el tema de estructuras condicionales. Para ello, se realizó una investigación 

### 🔹 []()
&nbsp;&nbsp;&nbsp;&nbsp;En el trabajo AA2 se presentó un informe sobre las estructuras o bucles repetitivos. Se llevó a cabo una investigación para definir tres 


### 5.2. APRENDIZAJE PRÁCTICO EXPERIMENTAL (APE)
### 🔹 []()
&nbsp;&nbsp;&nbsp;&nbsp;El APE1 tuvo como objetivo la práctica de las estructuras condicionales. Para ello, se utilizó el ejercicio desarrollado en el examen de 

### 🔹 []()

