# COMO GENERAR WAVS

La función "grabarVectorAudio" que esta en Funciones_TPI.cpp, permite hacer la grabacion de los vectores audio a un archivo.
Luego, para correr el script de python:

- Abrir una consola (en Windows, una consola de Anaconda).
- Cambiar al directorio donde se encuentra txt2wav.py (en el folder UtilesPython)
- La linea a correr es:

python txt2wav.py --txt folderOrigen/archivoTxt --wav folderDestino/archivoWav --frecuencia 16000

- Se puede ver la ayuda con:
python txt2wav.py --help
