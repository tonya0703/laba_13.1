namespace nsVar { // добавляємо до простору імен
	int n; // визначення змінних
	double x, x_p, x_k, dx, e, a, s, pi;
};


#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних

using namespace nsVar;

void nsDod::dod() {
	a *= -(2 * n - 1.) / ((2 * n + 1) * x * x); // доданок домножується на
} // коефіцієнт рекурентності