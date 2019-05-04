#ifndef TARIF_H
#define TARIF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int n = 6;

typedef struct tarifbook {
char company[10];
char tarif[10];
int gb;
int min;
int sms;
int min_mezhgorod;
int price;
} data;

typedef struct {
short min;
short sms;
short gb;
char min_mezhgorod;
} my_tarif;

#endif