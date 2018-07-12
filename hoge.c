/*問題2-4
/二つの整数値を読み込んで,その和と積を表示するプログラム
*/

#include <stdio.h>

int main(void) {
  int numbar[2];
  
  printf("Please input two number");
  scanf("%d¥n",&numbar[0]);
  scanf("%d¥n",&numbar[1]);

  printf("sum:%d , pro:%d¥n",numbar[0] + numbar[1], numbar[0] * numbar[1]);

  return 0;
}

