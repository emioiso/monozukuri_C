#include <stdio.h>

int main(void)
{
	/*一般的なコメント*/
	printf("%d\n", 5 + 3);
	/*複数行をコメントできる
	printf("%d\n", 5 + 3);
	*/
	//このコメントもよく使う
	printf("%d\n", 5 + 3);//行末からコメントにすることもできる。
	//プログラムを無効化したい時にも使う
	//printf("%d\n", 5 + 3);
	printf("モノづくり　C言語塾\n");
	printf("モノづくり\nC言語塾");
	getchar();
	return 0;
}
