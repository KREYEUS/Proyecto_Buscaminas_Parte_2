// Nombres de los integrantes del grupo: Senbo Zhou Pan y Ximena Pizarro

#include "Celda.h"
using namespace std;

void inicializar(tCelda& celda)
{
	celda.visible = false;
	celda.estado = VACIA;
	celda.numero = 0;
	celda.marcada = false;
}

tEstado dameEstado(const tCelda& celda)
{
	return celda.estado;
}

int dameNumero(const tCelda& celda)
{
	return celda.numero;
}

bool esVisible(const tCelda& celda)
{
	bool visible;

	if (celda.visible == true)
	{
		visible = true;
	}
	else
	{
		visible = false;
	}

	return visible;
}

bool  esMina(const tCelda& celda)
{
	bool mina;

	if (celda.estado == MINA)
	{
		mina = true;
	}
	else
	{
		mina = false;
	}

	return mina;
}

bool estaVacia(const tCelda& celda)
{
	bool vacia;

	if (celda.estado == VACIA)
	{
		vacia = true;
	}
	else
	{
		vacia = false;
	}

	return vacia;
}

bool contieneNumero(const tCelda& celda)
{
	bool numero;

	if (celda.estado == NUMERO)
	{
		numero = true;
	}
	else
	{
		numero = false;
	}

	return numero;
}

bool estaMarcada(const tCelda& celda)
{
	bool marcada;

	if (celda.marcada == true)
	{
		marcada = true;
	}
	else
	{
		marcada = false;
	}

	return marcada;
}

void  descubrir_celda(tCelda& celda)
{
	celda.visible = true;
}

void ocultarCelda(tCelda& celda)
{
	celda.visible = false;
}

void  poner_mina(tCelda& celda) {
	celda.estado = MINA;
}

void  marcar_celda(tCelda& celda)
{
	celda.marcada = true;
}

void  desmarcar_celda(tCelda& celda)
{
	celda.marcada = false;
}

void poner_numero(tCelda& celda, int num) {
	celda.numero = num;

	if (celda.estado == VACIA) {
		celda.estado = NUMERO;
	}
}