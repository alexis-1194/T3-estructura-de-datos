#pragma once
int edad(Fecha fn) {
	if (fn.m > 11 || fn.m == 11 && fn.d > 8) return 2019 - fn.a - 1;
	else return 2019 - fn.a;
}

int diasTranscurridos(Fecha fn) {
	int dacum = 0;
	for (int i = 0; i < fn.m; i++) {
		if (fn.m == 4 || fn.m == 6 || fn.m == 9 || fn.m == 11)
			dacum += 30;
		else if (fn.m == 2)
			dacum += 28;
		else
			dacum += 31;
	}
	/**/
	return fn.d + dacum /*+ fn.h*3600 + fn.min*60 + fn.sec*/;
}

void insertarArbol(nodoArbolT*& R, Transaccion dato) {
	if (R == NULL) {
		nodoArbolT* Aux = new nodoArbolT;
		Aux->dato = dato;
		Aux->der = Aux->izq = NULL;
		R = Aux;
	}
	else {
		if (diasTranscurridos(dato.fmov) > diasTranscurridos(R->dato.fmov)
			/* && edad(dato.unCliente.fnac) > edad(R->dato.unCliente.fnac)*/)insertarArbol(R->izq, dato);
		else if (diasTranscurridos(dato.fmov) < diasTranscurridos(R->dato.fmov)
			/* && edad(dato.unCliente.fnac) < edad(R->dato.unCliente.fnac)*/)insertarArbol(R->der, dato);
	}
}

void insertarArbolXEdad(nodoArbolT*& R, Transaccion dato) {
	if (R == NULL) {
		nodoArbolT* Aux = new nodoArbolT;
		Aux->dato = dato;
		Aux->der = Aux->izq = NULL;
		R = Aux;
	}
	else {
		if (edad(dato.unCliente.fnac) > edad(R->dato.unCliente.fnac)
			/*&& diasTranscurridos(dato.fmov) > diasTranscurridos(R->dato.fmov)*/
			)insertarArbolXEdad(R->izq, dato);
		else if (edad(dato.unCliente.fnac) < edad(R->dato.unCliente.fnac)
			/*&& diasTranscurridos(dato.fmov) < diasTranscurridos(R->dato.fmov)*/
			)insertarArbolXEdad(R->der, dato);
	}
}

void verArbol(nodoArbolT* R, int n, Transaccion A[], int pos[], int& x) {
	if (R != NULL) {
		verArbol(R->der, n + 1, A, pos, x);
		A[x] = R->dato; pos[x] = n; x++;
		verArbol(R->izq, n + 1, A, pos, x);
	}
}