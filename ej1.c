# incluye  < stdio.h >
# incluye  < stdlib.h >

vacío  principal ()
{
 int resistencias [ 6 ] = { 0 }, I = 1 ;
 printf ( " ingrese resistencias \ n " );
 para (I = 1 ; I < 6 ; I ++) {
 scanf ( " % d " , & resistencias [I]);
 }
 para (I = 1 ; I < 6 ; I ++) {
resistencias [ 0 ] = resistencias [ 0 ] + resistencias [I];
 }
sistema ( " cls " );
 printf ( " % d " , resistencias [ 0 ]);
