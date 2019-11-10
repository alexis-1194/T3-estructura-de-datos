#include <iostream>

#include "Estructuras.h"
#include "Funciones.h"

#include "fmrTransacciones.h"

using namespace EXAMENT3;

void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew fmrTransacciones);
}
