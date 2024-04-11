/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma autom�tica.
 * - Si le pasamos "Hola mundo" nos retornar�a "odnum aloH"
 */

#include <iostream>
#include <string>

void TraverseString(std::string& text1, int N)
{
    // Traverse the string 
    for (int i = text1.length() - 1; i >= 0; --i) { //En esta parte hice un loop hacia atr�s

        // Print current character 
        std::cout << text1[i] << " ";
    }

}

int main()
{
    std::string text1 = "Hola Mundo";

    //Almacenar tama�o de string
    int N = text1.length();

    //Llamada a la funci�n
    TraverseString(text1,N);

}

