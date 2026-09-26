# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
Tiene que recibir números para detectar cuales son pares, si son pares los va guardando para después mostrarte el cuantos y cuales pares se guardaron, se puede usar para series de números muy extensas y saber cuales son pares y cuales no
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 números

**Salidas:**
1. cantidad de pares
2. cuales son los pares

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Solo reflejar números pares
- No aceptar decimales

**Tamaño del arreglo y por qué** (piensa en el peor caso):
5 casillas del arreglo, tiene que ser del 0-4 y maximo tener 5 pares

**¿El 0 y los negativos son pares? ¿Por qué?**
Sí, porque no tienen residuo al dividirlo entre 2

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Se suma 1 en el contador y se pide el siguiente número

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8, 2 | 0, 1 |
| 2 | 6, 7, 2, 3, 24 | 6, 2, 24 | 0, 1, 2 |
| 3 | -6, 0, 87, -62, 23 | -6, 0, -62 | 0, 1, 2 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** Sí

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

Guardar los numeros pares de 5 numeros
Ingresa un n├║mero entero: -6
Ingresa un n├║mero entero: 0
Ingresa un n├║mero entero: 87
Ingresa un n├║mero entero: -62
Ingresa un n├║mero entero: 23
Pares encontrados: 3
Mostrar pares: -6
Mostrar pares: 0
Mostrar pares: -62
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
Pares encontrados: 5
Mostrar pares: 0
Mostrar pares: 2
Mostrar pares: 4
Mostrar pares: 6
Mostrar pares: 8

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
Se guardan los números en diferentes posiciones, entonces se guardan tanto para par como impar

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | 2 pares: 2, 4 | Sí |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | 2 pares: 8, 2 | Sí |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | 5 pares | Sí |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | 0 pares | Sí |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | 2 pares: 0, -4 | Sí |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | Entrada no válida. Escribe un número entero | Sí |
| Caso propio 1 | -4, -2, 0, 2, 4 | 5 pares | 5 pares | Sí |
| Caso propio 2 | 31, 25, 10, 2, -88 | 3 pares: 10, 2, -88 | 3 pares: 10, 2, -88 | Sí |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | el mensaje "Pares encontrados" y "Mostrar pares" salía seguido | Agregué el código << "\n" después del mensaje pero antes de saltar línea | Sí |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| De momento nada | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
A seguir practicando el uso de while, if, std cout y las variables

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Nada

**¿Qué fue lo más difícil y cómo lo resolví?**
El usar leerEntero y lo resolví con ayuda de ia con preguntas y pistas

**¿Qué pregunta me quedó sin responder?**
Ninguna

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
Porque esa cuenta todos los números y el arreglo solo los pares

## 13. Lista de verificación antes de entregar (Fase 5)

- [Sí] Llené todas las secciones (no quedan `_____`)
- [Sí] Mi programa compila sin advertencias
- [Sí] Probé todos los casos de la tabla
- [Sí] Hice los Experimentos A y B y dejé el código correcto al terminar
- [Sí] No modifiqué `utilerias.h`
- [Sí] Hice al menos 3 commits con mensajes claros
- [Sí] Hice `git push` y verifiqué mi fork en GitHub
- [Sí] Entregué el enlace de mi fork en Classroom