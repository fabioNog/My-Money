#ifndef LEXICO_H
#define LEXICO_H

#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <queue>
#include <utility>
#include <fstream>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cctype>
#include "globals.h"

extern Node *nodo;

extern int indice;

extern int linha;

extern int length;

void decls (const char *buffer);

void var_decls (const char *buffer);

void casaToken(int token, const char *buffer);

void imprimir_nodo(Node *nodo);

void imprimir_hash(const int n);

void palavras_reservadas();

int string_token(std::string str);

int contains(int i, const char *string);

float carregaValor(std::string str);

Node* inserir_hash(const int pos, const std::string str, const int token, float value, int init, int tipo);

unsigned int ELFHash(const char* str, unsigned int len);

void testeInserirHash(std::string str, int token, float value, int init, int tipo);

void procuraHash(std::string str, float value);

void automatoAntigo(const char *str, const int length);

Node* automato(const char *str);

void aloca_hash(const int n);


extern int indice;
#endif
