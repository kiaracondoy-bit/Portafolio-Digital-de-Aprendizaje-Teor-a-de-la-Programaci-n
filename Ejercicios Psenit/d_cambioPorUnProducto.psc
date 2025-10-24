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
