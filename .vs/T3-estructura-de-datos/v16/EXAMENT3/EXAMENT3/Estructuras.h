#pragma once
struct Fecha
{
	int d, m, a, h, min, sec;
};

struct Cliente
{
	char DNI[9];
	char nombreCompleto[50];
	char genero[15];
	Fecha fnac;
};

struct Transaccion
{
	Cliente unCliente;
	char tipoMovimiento[15];
	Fecha fmov;
};

//struct nodoDTransaccion
//{
//	Transaccion dato;
//	nodoDTransaccion* izq, * der;
//};

struct nodoArbolT
{
	Transaccion dato;
	nodoArbolT* izq, * der;
};

//nodoDTransaccion *I, * D;
nodoArbolT* R = NULL;
int n = 0;

nodoArbolT* RM = NULL;
int nM = 0;

nodoArbolT* RF = NULL;
int nF = 0;

Transaccion A[50];
//nodoArbolT* R1 = NULL;
//int n1 = 0;
Transaccion M[50];
Transaccion F[50];
