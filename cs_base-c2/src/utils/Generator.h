

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef enum NumberKind {
    Float,
    Int,
    Random
} NumberKind;


typedef enum SeriesKind {
    Single,
    Linear,
    Alternating,
    Fibonacci,
    Primes
} SeriesKind;


typedef enum NumberParams_Random_SeedWith {
    Time
} NumberParams_Random_SeedWith;


typedef struct NumberParams_Random_Between {
    int* min;
    int* max;
} NumberParams_Random_Between;


typedef struct NumberParams_Random {
    enum NumberParams_Random_SeedWith seedWith;
    struct NumberParams_Random_Between between;
} NumberParams_Random;


typedef union NumberParams {
    NumberParams_Random random;
} NumberParams;


typedef struct NumberGen {
    int length;
    NumberKind numberKind;
    SeriesKind seriesKind;
    NumberParams params;
} NumberGen;


float* GenerateFloat(NumberGen numberParameters) {
    float* floats = { 0 };
    return floats;
}


int* GenerateInt(NumberGen numberParameters) {
    int* ints = { 0 };
    return ints;
}


int* GenerateRandom(NumberGen numberParameters) {
    printf("Into GenerateRandom\n");
    srand(time(NULL));

    int* rands = malloc(sizeof(int) * numberParameters.length);

    int min = *numberParameters.params.random.between.min;
    int max = *numberParameters.params.random.between.max;
    bool minMaxAvail = (numberParameters.params.random.between.min != NULL && numberParameters.params.random.between.max != NULL);

    for (int i = 0; i < numberParameters.length; i++) {
        if (minMaxAvail) {
            int minMaxSpread = max - min;
            int randVal =  + rand() / (RAND_MAX / (minMaxSpread + 1) + 1);
            rands[i] = randVal;
        } else {
            int randVal = rand();
            rands[i] = randVal;
        }
    }
    return rands;
}


void* GenerateNumbers(NumberGen numberGen) {
    printf("Into Generate\n");

    if (numberGen.numberKind == Float) {
        float* floats = GenerateFloat(numberGen);
        return floats;
    } else if (numberGen.numberKind == Int) {
        int* ints = GenerateInt(numberGen);
        return ints;
    } else if (numberGen.numberKind == Random) {
        int* rands = GenerateRandom(numberGen);
        return rands;
    }
    return NULL;
}

