namespace nsVar { // ���������� �� �������� ����
	int n; // ���������� ������
	double x, x_p, x_k, dx, e, a, s, pi;
};


#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������

using namespace nsVar;

void nsDod::dod() {
	a *= -(2 * n - 1.) / ((2 * n + 1) * x * x); // ������� ����������� ��
} // ���������� ������������