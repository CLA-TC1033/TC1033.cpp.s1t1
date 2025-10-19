# Ejercicio-Estructuras de Control y Funciones

## Descripción del Problema

Resolver los ejercicios de programación (1,3,7 y 8) sobre Estructuras de Control y Funciones.

## Ejemplo de ejecución

```
Dame un numero:10
Dame otro numero:15
¿Que deseas hacer (S)umar (R)estar (M)ultiplicar?S
10+15=25
Suma de pares entre 0 y 100:2550
Serie armonica para a=1, d=3, n=25:
Termino 1:1
Termino 2:4
Termino 3:7
Termino 4:10
Termino 5:13
Termino 6:16
Termino 7:19
Termino 8:22
Termino 9:25
Termino 10:28
Termino 11:31
Termino 12:34
Termino 13:37
Termino 14:40
Termino 15:43
Termino 16:46
Termino 17:49
Termino 18:52
Termino 19:55
Termino 20:58
Termino 21:61
Termino 22:64
Termino 23:67
Termino 24:70
Termino 25:73
Valor total de la serie:925
Media geometrica del 1 al 3:1.81712
Media armonica del 1 al 3:1.63636
```

## Objetivo

- Busca que el código pase correctamente todas las pruebas
   * Solamente cambia los archivos permitidos para lograr este objetivo (abajo se indican las reglas específicas)
   
- Las GitHub Actions deberán presentar una palomita en verde si se han satisfecho todas las pruebas, y una cruz roja cuando alguna (o todas) las pruebas han fallado.
   * **Recomendación:** Puedes dar clic en la cruz roja para verificar cual de las pruebas ha fallado (o si el código no ha compilado correctamente).
   * **Recomendación:** En caso de que el Autograding no muestre pruebas o no funcione, contacta a tu profesor mediante un issue.

## Instrucciones

- Deberás modificar el archivo `exercise.cpp`  y agregar la programación adicional que sea necesaria.

Explicación de los otros archivos:

- Archivo `test/tests.cpp` tiene las pruebas de esta actividad (NO LO CAMBIES!)
- Archivo `makefile` tienes los comandos para ejecutar la actividad (NO LO CAMBIES!)
- Archivo  `./build/appTests` se generará después de compilar (para **pruebas locales**, solo ejecútalo)

## Comandos para pruebas locales, ejecución y depuración

- Comando para construir y ejecutar pruebas: `make` o `make test` o `make ctest`
    * Si el ejecutable ya está construido, sólo teclea : `./build/appTests`

- Comando para construir y ejecutar la aplicación: `make run` 
    * Si el ejecutable ya está construido, sólo teclea : `./build/exercise`
      
- Comando para depurar: `make debug`
    * Para conocer los comandos de depuración consulta:
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/

- Comando para depurar con `vsCode`: `make debugvs` 
    * Abre el programa principal.
    * Utiliza el depurador de la IDE.
      
- Comando para depurar pruebas con `vsCode`: `make debugtest` 
    * Abre el programa principal.
    * Utilizar el depurador de la IDE.
- Comando para limpieza de binarios `make clean`
    * Úselo cuando desee eliminar cualquier binario que se haya generado en la carpeta `build`.
    * Úselo cuando detecte que algún binario no está actualizado o bien no se hubiere construido conrrectamente.

## Instrucciones para construir y ejecutar la aplicación y pruebas usando CMake

1. Entrar al directorio de construcción:
   ```sh
   cd build
   ```

2. Configurar el proyecto con CMake:
   ```sh
   cmake -DTEST_EXECUTABLE=ON ..
   cmake -DMAIN_EXECUTABLE=ON ..
   ```

3. Construir la aplicación:
   ```sh
   cmake --build .
   ```

4. Ejecutar la aplicación:
   ```sh
   ./exercise
   cd ..
   ```
5. Ejecutar las pruebas:
   ```sh
   ./appTests
   cd ..
   ```
## Revisión de estándares de codificación con IA

1. Abre GitHub Copilot (`Ctrl+Alt+I`).
2. Selecciona el modo `Ask` y el modelo `Auto`.
3. Coloca como contexto el/los `<archivo.cpp/hpp>`(s) a verificar la aplicación de estándares de programación. 
4. Usa cualquiera de los siguientes *prompts*:
```
/rev-std
```
o bien:
```
Revisa la aplicación de cada uno de los estándares de codificación. Si se cumple el estándar indícalo con la frase: "**CUMPLE**". Sí no se cumple algún estandar índicalo con la frase: "**¡NO CUMPLE!**" y muestra para ese estandar un ejemplo de código que sí lo cumple y que sea diferente al revisado con el fin de ilustrar como se puede cumplir. No ofrezcas sugerencias para mi código.
```
4. Verifica los cambios sugeridos y realiza aquéllos que consideres convenientes.
5. Verifica que pasa todas las pruebas.
6. Empuja tu programación a GitHub.

## Aplicación de estándares de codificación con IA

1. Abre GitHub Copilot (`Ctrl+Alt+I`).
2. Coloca como contexto el/los `<archivo.cpp/hpp>`(s) a aplicar los estándares de programación. 
4. Usa el siguiente *prompt*:
```
/app-std
```
4. Verifica los cambios sugeridos y edita/confirma aquéllos que consideres convenientes.
5. Verifica que pasa todas las pruebas y que el programa principal se ejecuta correctamente.
6. Empuja tu programación a GitHub.

## Notas

- El código será evaluado solamente si compila.
   * La razón de esto es, si no compila no es posible generar el ejecutable y realizar las pruebas.

- Algunos casos de prueba podrían recibir calificación individual, otros podrían recibir calificación y si pasan todos juntos (o todas las pruebas en conjunto).

- La calificación final se otorgará de manera automática en cada *commit*, y se evaluará solamente hasta la fecha limite de la actividad.

Para dudas adicionales, consulta a tu profesor.

## License

MIT License 2020
