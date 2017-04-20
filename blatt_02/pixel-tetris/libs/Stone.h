//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#ifndef PG2_SL_SOSE2017_STONE_H
#define PG2_SL_SOSE2017_STONE_H


#include "XyPair.h"

#define STONE_DIMENSION_DEFAULT 4

class Stone {

private:
    char buffer[STONE_DIMENSION_DEFAULT][STONE_DIMENSION_DEFAULT];
    XyPair pos = XyPair(0, 0);
    XyPair size = XyPair(STONE_DIMENSION_DEFAULT, STONE_DIMENSION_DEFAULT);

public:
    Stone();

    int pos_x();

    int pos_y();

    int size_x();

    int size_y();

    char getBuffer(XyPair coord);
};


#endif //PG2_SL_SOSE2017_STONE_H
