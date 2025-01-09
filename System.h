#pragma once
// 모든 시스템이 상속받는 기본 인터페이스를 정의
// 각 시스템은 이 인터페이스를 구현하여 초기화, 업데이트, 종료와 같은 동작 제공

// 함수 앞에 vitrual을 붙이면 동적 바인딩을 지원한다.
// 실행 시점에 적잘한 파생 클래스의 함수가 호출된다.
class System
{
public:
	// 초기화 함수 : 각 시스템 초기화 시 호출
	virtual void Initialize() {};				
	
	// 업데이트 함수 : 각 프레임마다 호출
	virtual void Update(float deletaTime) {};	
	
	// 정리 함수 : 시스템 종료시 호출
	virtual void Destroy() {};					

	// 가상 소멸자를 포함하여 파생 클래스에서 소멸자가 올바르게 호출되도록 함
	virtual ~System() = default;	
};