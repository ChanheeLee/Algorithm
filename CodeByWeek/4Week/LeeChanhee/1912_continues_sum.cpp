#include <iostream>
using namespace std;


int main(){
	
	int n;
	
	int input_num;		// input ��Ű�� ���� 
	int sum = 0;		// �κ� ���� ��� �ϴ� ���� 
	int min = 1000;		// �κ� �� �� �߿� ���� �ּ� ���� �����ϴ� ���� 
	int ret = -1001;		// �κ� �� ���� �����Ͽ� ���� �ִ밡 �Ǵ� ���� �����ϴ� ���� 
	
	cin >> n;
	

	while(n--){
		
		cin >> input_num;		 
		sum += input_num;		// �κ� �� ��� 
		
		if (ret < input_num){
			ret = input_num;
		}
		
		// �κ� �� �߿��� �ּ� ���� ���� 
		if (min > sum){
			min = sum;
		}
		
		
		
		if (min < 0){
			if (sum == min ) {
				// pass
			}
			else {
				if (ret < sum - min) {
					ret = sum - min;
				} 
			}
		}
		
		if(ret < sum){
			ret = sum;
		}
		
	}
	
	cout << ret << endl;
	
	return 0;
}
