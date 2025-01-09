#pragma once

// 싱글톤 패턴을 구현하여 특정 클래스의 인스턴스를 오직 하나만 생성하도록 보장.
// T라는 이름을 임의의 데이터 타입을 지정
// 싱글톤 패턴을 다양한 클래스에서 재사용할 수 있도록 일반화
template <typename T>
class Singleton
{
protected:
	// 기본생성자와 같지만 protected로 지정해서 외부에서 인스턴스 생성을 못하게 만든다.
	Singleton() = default;	
	// 자신의 소멸자가 실행되게 하기 위해 가상함수로 설정
	virtual ~Singleton() {};	

	// 복사생성자와 대입연산자를 삭제해서 복사 및 할당을 방지
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	// 싱글톤 인스턴스를 반환하는 static 메서드
	static T& Get()
	{
		// static 지역변수로 싱글톤 인스턴스 생성(첫번째로 Get함수를 호출했을 때 생성됨)
		static T instance;	
		return instance;
	}
};

