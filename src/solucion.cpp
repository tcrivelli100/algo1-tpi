#include "ejercicios.h"
#include "Funciones_TPI.h"
#include "math.h"

/************************** EJERCICIO grabacionValida **************************/
bool grabacionValida(audio s, int prof, int freq){
    return false;
}

/************************** EJERCICIO elAcaparador **************************/
int elAcaparador(sala m, int freq, int prof){
    return -1;
}

/************************** EJERCICIO ardillizar **************************/
sala ardillizar(sala m, int prof, int freq){
    sala res;
    return res;
}

/************************** EJERCICIO flashElPerezoso **************************/
sala flashElPerezoso(sala m, int prof, int freq){
    sala res;
    return res;
}

/************************** EJERCICIO silencios **************************/
lista_intervalos silencios(audio s, int prof, int freq, int umbral){
    lista_intervalos res;
    return res;
}

/************************** EJERCICIO hayQuilombo **************************/
bool hayQuilombo(sala m, int prof, int freq, int umbral){
    return false;
}

/************************** EJERCICIO sinSilencios **************************/
audio sinSilencios(audio s, int freq, int prof, int umbral) {
    audio result;
    return result;
}

/************************** EJERCICIO encontrarAparicion **************************/
int encontrarAparicion(audio x, audio y, int freq, int prof){
    return -1;
}

/************************** EJERCICIO medirLaDistancia **************************/
tuple<int,lista_distancias> medirLaDistancia(sala m, audio frase, int freq, int prof){
    tuple<int,lista_distancias> out;
    return out;
}
/************************** EJERCICIO compararSilencios **************************/
float compararSilencios(audio x, int freq, int prof, int locutor, int umbralSilencio){
  return 0.1;
}

/************************** EJERCICIO resultadoFinal **************************/
float resultadoFinal(sala m, int freq, int prof, int umbralSilencio){
  return 0.1;
}
