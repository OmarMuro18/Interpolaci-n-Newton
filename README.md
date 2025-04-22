# Ajuste de curvas por diferencias divididas (Ecuaciones Normales)

Este repositorio contiene un programa en C++ que implementa un método para construir las **ecuaciones normales** mediante diferencias divididas, útil en el ajuste de curvas a través de **interpolación polinómica de Newton**.

## 📌 Descripción

- El programa solicita al usuario un conjunto de puntos \((x, y)\).
- Luego, construye una tabla de diferencias divididas utilizando una matriz.
- Calcula los coeficientes de interpolación (valores de `b[]`) que forman parte de la ecuación del polinomio.
- Imprime la tabla con los valores intermedios y finales que permiten formar el polinomio interpolante.

## 🧮 Fórmula empleada

Utiliza la **fórmula general de Newton hacia adelante** con diferencias divididas para interpolación:

\[
f(x) = b_0 + b_1(x - x_0) + b_2(x - x_0)(x - x_1) + \ldots
\]

donde los coeficientes \(b_i\) se obtienen a partir de diferencias divididas.

## 🧠 ¿Qué hace el código?

- **Entrada de usuario:** Solicita al usuario ingresar `n` pares de puntos `(x, y)`.
- **Construcción de la tabla:** Utiliza un arreglo de dos dimensiones para construir la tabla de diferencias divididas.
- **Cálculo de coeficientes:** Extrae los coeficientes `b` que serán usados en la interpolación.
- **Salida:** Muestra paso a paso la tabla y los coeficientes obtenidos.
