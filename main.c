#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "featureDTD/verifyDtd.h"
#include "featureXML/xmlFunctions.h"

int main()
{
    //DTD
    char* nomFichierDTD = "dtd1.dtd" ;
    char** tabNameElement = malloc(sizeof(char*)*TAILLE_MAX);
    char** tabAttributElement = malloc(sizeof(char*)*TAILLE_MAX);

    int nbElementDTD = lireDTD(nomFichierDTD, tabNameElement, tabAttributElement);

    //XML
    char* nomFichierXML = "fichierxml.xml" ;

    lireXML(nomFichierXML, tabNameElement, tabAttributElement, nbElementDTD);

    return 0 ;
}
