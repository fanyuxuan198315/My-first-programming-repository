#include <iostream>
#include <vector>

// 自定义乘法函数，参数为一个vector表示的因数列表
int multiplyFactors(const std::vector<int>& factors) {
    // 设置初始乘积为1
    int result = 1;

    // 遍历因数列表，依次相乘
    for (int factor : factors) {
        result *= factor;
    }

    return result;
}

int main() {
    std::cout << "请输入因数个数：";
    int factorCount;
    std::cin >> factorCount;

    std::vector<int> factors;

    // 输入每个因数
    for (int i = 1; i <= factorCount; ++i) {
        std::cout << "请输入第" << i << "个因数：";
        int factor;
        std::cin >> factor;
        factors.push_back(factor);
    }

    // 调用自定义乘法函数进行运算
    int result = multiplyFactors(factors);
    std::cout << "乘积为：" << result << std::endl;

    return 0;
}


