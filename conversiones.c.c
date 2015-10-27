#include <stdio.h>  //libreria de entrada/salida

float mega,bits, byte, tera, kilo;

int main ()
{//inicio
         printf("Dame un numero: ");
         scanf("%f",&mega);
         
         bits = mega*8388608;
         byte = mega*1048576;
         tera = mega*0.00000095367;
         kilo = mega*1024;
         
         printf ("el resultado en bits es: %.0f\n", bits);
         printf ("el resultado en byte es: %.0f\n", byte);
         printf ("el resultado en tera es: %f\n", tera);
         printf ("el resultado en kilo es: %.0f\n", kilo);
         
}//fin
         
         
