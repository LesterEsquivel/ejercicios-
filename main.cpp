#include <iostream>

//Estructuras de control condicionales (IF - IF ELSE):
//Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no
/*int main() {
    int edad;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Eres mayor de edad\n";
    } else {
        std::cout << "No eres mayor de edad.\n";
    }

    return 0;
}*/

//Escribir un programa que pida al usuario dos números y determine cuál es el mayor de los dos.

/*void compararNumbers(int num1, int num2) {
    if (num1 > num2) {
        std::cout << "El numero mayor es " << num1 << ".\n";
    } else if (num1 < num2) {
        std::cout << "El numero mayor es " << num2 << ".\n";
    } else {
        std::cout << "Ambos numeros son iguales.\n";
    }
}

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    compararNumbers(num1, num2);

    return 0;
}*/

//Escribir un programa que pida al usuario un número entero y determine si es par o impar.
/*void esParOImpar(int num) {
    if (num % 2 == 0) {
        std::cout << "El numero es par.\n";
    } else {
        std::cout << "El numero es impar.\n";
    }
}

int main() {
    int num;
    std::cout << "Ingrese el numero: ";
    std::cin >> num;

    esParOImpar(num);

    return 0;
}*/

//Estructuras de control Iterativas ( FOR - WHILE):
//Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.
/*long long factorial(int num) {
    long long resultado = 1;
    int numeroActual = 1;
    while (numeroActual <= num) {
        resultado *= numeroActual;
        numeroActual++;
    }
    return resultado;
}

int main() {
    int num;
    std::cout << "Ingresar numero: ";
    std::cin >> num;

    std::cout << "El factorial de " << num << " es " << factorial(num) << ".\n";

    return 0;
}*/

//Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for.
/*int main() {
    int userNumber;

    std::cout << "Ingrese un numero entre 10 y 30: ";
    std::cin >> userNumber;

    if(userNumber < 10 || userNumber > 30) {
        std::cout << "Ese numero está fuera de rango. Inténtalo de nuevo." << std::endl;
        return 1;
    }

    std::cout << "Los numeros impares del 1 al " << userNumber << " are: ";
    for(int i = 1; i <= userNumber; i++) {
        if(i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}*/

//Escribir un programa que realice lo mismo que el ejercicio anterior, pero usando el buqle while.
/*int main() {
    int num;
    std::cout << "Ingrese un numero entre 10 y 30: ";
    std::cin >> num;

    while (num < 10 || num > 30) {
        std::cout << "Entrada inválida. Por favor introduzca un número entre 10 y 30: ";
        std::cin >> num;
    }

    int i = 1;
    while (i <= num) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
        i++;
    }

    return 0;
}*/

//Estructuras de control de selección (SWITCH):
//Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.
int main() {
    int num;
    std::cout << "ingrese un numero entre 1 y 5: ";
    std::cin >> num;

    switch(num) {
        case 1:
            std::cout << "lunes" << std::endl;
            break;
        case 2:
            std::cout << "martes" << std::endl;
            break;
        case 3:
            std::cout << "miercoles" << std::endl;
            break;
        case 4:
            std::cout << "jueves" << std::endl;
            break;
        case 5:
            std::cout << "viernes" << std::endl;
            break;
        default:
            std::cout << "entrada invalida" << std::endl;
    }

    return 0;
}