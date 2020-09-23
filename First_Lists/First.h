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
		line* next;
	};
	template <class type>
	int getNum(type& a)
	{
		std::cin >> a;
		if (!std::cin.good()) // ���������� ������ ����� ��� ����� �����
			return -1;
		return 1;
	}
	int getNut(int& a, const char* msg) {
		const char* pr = "";
		do {
			std::cout << pr << std::endl;
			std::cout << msg;
			pr = "You are wrong; repeat please!";
			if (getNum(a) < 0) {
				return -1;
			}
		} while (a < 1);
	}
	double getEl(double& a) {
		const char* pr = "";
		do {
			std::cout << pr;
			std::cout << "Element number->";
			pr = "You enter 0. Try again.";
			if (getNum(a) < 0) {
				return -1;
			}
		} while (a == 0);
		std::cout << std::endl;
		return 1;
	}
	line* input(int&, int&); // ���� �������
	line* input_element(line*&, int, double);
	line* input_line(line*&, int);
	line* new_line(line*&, int m);
	element* new_element(element*&, int, double);
	line* res_matrix(int m, int c, line* lines);
	element* serch_min(element*, int&, double&, int&, int&);
	void output(const char*, line*);
	void output_with_zero(const char*, line*, int, int, int);// ����� �������
	line* erase(line*& a, int m); // ������������ ������� ������
	void first_zero(element*, int&, double&, int&);
}