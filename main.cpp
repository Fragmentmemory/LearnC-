#include<iostream>

unsigned int LCG16() {
	static unsigned int s_state{ 0 };// ֻ�е�һ�ε���ʱ��ʼ��

	// ������һ��α�����

	// �����úܴ�ĳ����޸�״ֵ̬ʹ�䳬��16λ��Χ
	s_state = 8253729 * s_state + 2396403;
	return s_state % 32768; // ����16λ��Χ�ڵ�ֵ��0��32767��
}

int main() {
	// ��ӡ100��α�����
	for(int count{1};count <= 100; ++count) {
		std::cout << LCG16() << '\t';

		// ÿ�д�ӡ10��
		if(count % 10 == 0)
			std::cout << std::endl;
	}

	return 0;
}
