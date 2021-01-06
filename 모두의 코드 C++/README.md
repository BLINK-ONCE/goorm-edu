## [모두의 코드 C++](https://modoocode.com/135)

## Reference
### diff part of reference, pointer
- 레퍼런스는 반드시 선언할 때 초기화 해주어야 함.
- 레퍼런스는 다시 초기화할 수 없음.
- 레퍼런스는 메모리 상에 존재하지 않을 수도 있음. e.g.(another_a가 ref. 이고 a가 var.이라 가정했을 때, another_a가 모두 a로 바꿔치기 된다고 생각하자.)
- [reference](https://modoocode.com/141)
- 레퍼런스는 일반적으로 리터럴 상수를 참조할 수 없다.
- 상수(const) 참조차로 선언하면 리터럴도 참조할 수 있다.
- 레퍼런스의 레퍼런스, 레퍼런스의 배열, 레퍼런스의 포인터는  존재할 수 없다.
- 배열들의 레퍼런스는 가능.
- 