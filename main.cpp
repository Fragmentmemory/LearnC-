#include<iostream>

unsigned int s_state{ 0 };

void seedPRNG(unsigned int seed) {
	// 使用给定的种子初始化状态值
	s_state = seed;
}

unsigned int LCG16() {
	// 生成下一个伪随机数

	// 我们用很大的常量修改状态值使其超出16位范围
	s_state = 8253729 * s_state + 2396403;
	return s_state % 32768; // 返回16位范围内的值（0到32767）
}

void print10() {
	// 打印10个伪随机数
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
