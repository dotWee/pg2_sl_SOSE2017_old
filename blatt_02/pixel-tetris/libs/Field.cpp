//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#include "Field.h"

int Field::pos_x() {
    return pos.getX();
}

int Field::pos_y() {
    return pos.getY();
}

int Field::size_x() {
    return size.getX();
}

int Field::size_y() {
    return size.getY();
}

char Field::getBuffer(XyPair coord) {
    return buffer[coord.getX()][coord.getY()];
}

Field::Field() {

    // Für jede der 22 Spalten
    for (int i = 0; i <= FIELD_HEIGHT; ++i) {

        // Für jede der 12 Zeilen
        for (int j = 0; j <= FIELD_WIDTH; ++j) {
            char *content = &buffer[i][j];

            // Wenn wir uns am äußeren Spielfeldrand befinden...
            if (j == 0 || j == FIELD_WIDTH) {
                buffer[i][j] = (char) 186;
            }

            // Wenn wir uns an der letzten Zeile befinden...
            if (i == FIELD_HEIGHT) {

                // Wenn wir uns an der unteren linken Ecke befinden...
                if (j == 0) {
                    buffer[i][j] = (char) 200;
                }

                    // Wenn wir uns an der unteren rechten Ecke befinden...
                else if (j == FIELD_WIDTH) {
                    buffer[i][j] = (char) 188;
                }

                    // Alle Zeichen zwischen der unteren linken Ecke und der unteren rechten Ecke
                else {
                    buffer[i][j] = (char) 205;
                }
            }

                // Alle Zeichen zwischen den Rändern
            else {
                buffer[i][j] = ' ';
            }
        }
    }
}
