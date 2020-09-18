namespace First {
	struct element {
		double num;
		int k;
		struct element* next;
	};
	struct line {
		int n;
		int k;
		element* num;
	};
	template <class type>
	int getNum(type& a)
	{
		std::cin >> a;
		if (!std::cin.good()) // ���������� ������ ����� ��� ����� �����
			return -1;
		return 1;
	}

	line* input(int&, int&); // ���� �������
	void output(const char* msg, line a[], int m); // ����� �������
	line* erase(line*& a, int m); // ������������ ������� ������
	double min(double a[], int m, int(*f)(double, double)); // ���������� min/max �������� �������
	line* res_matrix(int m, int c, line* lines);
	line* newline(line*&, int m);
	inline int isgreater(double a, double b);
}