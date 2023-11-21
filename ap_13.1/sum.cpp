#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    pi = 4 * atan(1.);
    n = 0;
    a = -1 / x;
    s = a + pi / 2;
    do {
        n++;
        dod(); // виклик процедури обчислення доданку
        s += a;
    } while (fabs(a) > e);
}