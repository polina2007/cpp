// �������� ����� �����, ���������� ��� ����������� �������
int power15(int n)
{
	int m = n;
	n *= n;
	n *= n;
	n *= n;
	n *= n;
	n /= m;
	return n;
}

/*
�������� ����� n, ���������� n^11
*/
int power11(int n)
{
	int m = n;
	n *= n;
	m *= n;
	n *= n;
	n *= n;
	n *= m;
	return n; // ���� ��� ���������� ����, �� ��� ��������
}

/*
�������� ����� n, ���������� n^20
*/
int power20(int n)
{
	n *= n;
	n *= n;
	int m = n;
	n *= n;
	n *= n;
	n *= m;
	return n; // ���� ��� ���������� ����, �� ��� ��������
}
