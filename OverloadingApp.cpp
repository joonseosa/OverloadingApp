#include <iostream>
using std::cout;
using std::endl;

double ave(double n1, double n2)
{
	return((n1 + n2) / 2.0);
}
double ave(double n1, double n2, double n3)
{
	return((n1 + n2 + n3 ) / 3.0);
}


/*
	�Լ��� �����ε��� ���� �ٸ� �Ķ���� ����Ʈ�� ���� �Լ����� ���� �̸����� �����ϴ°��� �ǹ��Ѵ�.
	(�ٸ� �Ű� ������ ���� ���� �̸��� ���� �Լ��� ���� �� �ִ� C++�� ����̴�.)
	
	!C�� ���� ���δٸ� �Լ��̸��� ����ؾ��Ѵ�. C�� �Լ��� �����ε� ����� �������� �ʴ´�.!

	���� �̸��� �Լ��� �߿��� � �Լ��� �����ϴ°��� ������ �����Ϸ��� �Ѵ�.
	����, ��ȯ Ÿ���� �ٸ� �Լ���� ������ �Ҽ�����.   , (��) -> double ave(double n1, double n2) ,int ave(double n1, double n2)


*/
int main() 
{
	cout << ave(3.0, 2.9) << endl;
	cout << ave(3.0, 6.5, 7.0) << endl;

	return 0;
}
