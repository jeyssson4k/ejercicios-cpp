#include <iostream>

//imprimir los primeros 100 numeros primos 

// usamos short porque es mas pequeño que int
// busqueda recomendada: tipos de datos primitivos en C++

bool validarPrimo(short numero);

int main(){
    bool primo = false; 
    for(short i = 2; i <= 100; i++){
        primo = validarPrimo(i);
        if(primo == true){
            std::cout<<i;
            std::cout<<std::endl;
        }
    }
    
    return 0;
}

bool validarPrimo(short numero){
    bool estado = true;
    for(short divisor = 2; divisor < numero; divisor++){
        if(numero%divisor == 0){
            estado = false;
            break;
        }
    }
    return estado;
}


/*
tipoRetorno nombreFuncion (tipoDato parametro1, tipoDato parametro2, ...)
{
    contenido...

    retorno variableTipoRetorno
}
*/


// tipoDato nombreVariable = valor;

/*
for(tipoDato variable = valorInicial; condicion; incremento/decremento){
    contenido ...
}
*/
