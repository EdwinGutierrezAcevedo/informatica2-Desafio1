#ifndef FUNCIONES_H
#define FUNCIONES_H

unsigned char* loadPixels(QString input, int &width, int &height);
bool exportImage(unsigned char* pixelData, int width,int height, QString archivoSalida);
unsigned int* loadSeedMasking(const char* nombreArchivo, int &seed, int &n_pixels);

void xorOperacion(unsigned char* pixelData, const unsigned char* otherData, int totalBytes);//Operacion Xor
void rotarCanales(unsigned char* pixelData, int totalBytes, int rotateAmount, bool toLeft);// Operaacion Rotacion
unsigned char rotarDerecha(unsigned char byte, int count);
unsigned char rotarIzquierda(unsigned char byte, int count);
#endif // FUNCIONES_H
