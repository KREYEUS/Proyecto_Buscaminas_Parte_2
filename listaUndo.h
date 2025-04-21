// Nombres de los integrantes del grupo: Senbo Zhou Pan y Ximena Pizarro

#pragma once

#include "listaPosiciones.h" // A�ado este cabecero, provisional

const int MAX_UNDO = 100;

typedef struct {
	tListaPosiciones lista[MAX_UNDO];
	int cont;
} tListaUndo;


void inicializar(tListaUndo& lista_undo);
void insertar_final(tListaUndo& lista_undo, const tListaPosiciones& lista_pos);
tListaPosiciones ultimos_movimientos(tListaUndo& lista_undo);