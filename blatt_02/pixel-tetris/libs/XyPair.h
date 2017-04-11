//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#ifndef PG2_SL_SOSE2017_XYPAIR_H
#define PG2_SL_SOSE2017_XYPAIR_H


class XyPair {

public:
    XyPair(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

private:
    int x;
    int y;
};


#endif //PG2_SL_SOSE2017_XYPAIR_H
