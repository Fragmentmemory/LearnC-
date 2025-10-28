#include<iostream>

unsigned int s_state{ 0 };

void seedPRNG(unsigned int seed) {
	// ʹ�ø��������ӳ�ʼ��״ֵ̬
	s_state = seed;
}

unsigned int LCG16() {
	// ������һ��α�����

	// �����úܴ�ĳ����޸�״ֵ̬ʹ�䳬��16λ��Χ
	s_state = 8253729 * s_state + 2396403;
	return s_state % 32768; // ����16λ��Χ�ڵ�ֵ��0��32767��
}

void print10() {
	// ��ӡ10��α�����
	for(int count{1};count <= 10; ++count) {
		std::cout << LCG16() << '\t';
	}
	std::cout << std::endl;
}

int main() {
	unsigned int x{};
	std::cout << "Enter seed value: ";
	std::cin >> x;

	seedPRNG(x);
	print10();

	return 0;
}
