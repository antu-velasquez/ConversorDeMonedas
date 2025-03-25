# Conversor de Monedas en C

## Descripción

Este proyecto es un conversor de monedas simple desarrollado en C. Permite a los usuarios convertir entre Quetzales (GTQ), Dólares Estadounidenses (USD) y Euros (EUR) utilizando tipos de cambio aproximados.

## Características

* Conversión entre Quetzales, Dólares y Euros.
* Selección de la conversión mediante un menú numérico.
* Ingreso de la cantidad a convertir por el usuario.
* Visualización del resultado con dos decimales.
* Manejo de opciones inválidas.

## Prerrequisitos

* Un compilador de C (como GCC) instalado en tu sistema.

## Cómo compilar y ejecutar

1. Guarda el código fuente en un archivo llamado `conversor.c`.
2. Abre una terminal o línea de comandos.
3. Navega al directorio donde guardaste el archivo `conversor.c`.
4. Compila el programa usando GCC:

   ```bash
   gcc conversor.c -o conversor

 5. Ejecuta el programa:

./conversor

## Uso

El programa mostrará un menú con las opciones de conversión disponibles.
Ingresa el número de la opción deseada y presiona Enter.
Ingresa la cantidad a convertir y presiona Enter.
El programa mostrará el resultado de la conversión.

## Limitaciones

* Los tipos de cambio utilizados son aproximados y pueden no ser precisos.
* El programa no maneja errores de entrada (por ejemplo, ingresar letras en lugar de números).
* El programa no permite convertir entre otras monedas.

## Posibles mejoras

* Utilizar una API para obtener tipos de cambio actualizados.
* Agregar validación de entrada para evitar errores.
* Permitir la conversión entre más monedas.
* Implementar una interfaz gráfica de usuario.

## Autor

Antulio Velasquez - antulio.velasquez@galileo.edu - carnet 24006945


