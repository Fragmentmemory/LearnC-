#include<iostream>

unsigned int LCG16() {
	static unsigned int s_state{ 0 };// 只有第一次调用时初始化

	// 生成下一个伪随机数

	// 我们用很大的常量修改状态值使其超出16位范围
	s_state = 8253729 * s_state + 2396403;
	return s_state % 32768; // 返回16位范围内的值（0到32767）
}

int main() {
	// 打印100个伪随机数
	for(int count{1};count <= 100; ++count) {
		std::cout << LCG16() << '\t';

		// 每行打印10个
		if(count % 10 == 0)
			std::cout << std::endl;
	}

	return 0;
}
