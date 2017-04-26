#include "libs/Field.h"
#include "test/FieldTest.h"
#include "test/StoneTest.h"

int main() {
    int errors = 0;

    // Teste Field-Klasse
    Field field;
    FieldTest fieldTest(field);
    int errors_field = 0;
    errors_field += fieldTest.test();
    errors += errors_field;

    // Teste Stone-Klasse
    Stone stone;
    StoneTest stoneTest(stone);
    int errors_stone = 0;
    errors_stone += stoneTest.test();
    errors += errors_stone;

    return errors;
}