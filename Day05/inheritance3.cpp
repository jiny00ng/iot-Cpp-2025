///*
//    상속관계에서 이니셜라이즈 사용하기
//*/
//
//#include <iostream>
//
//// 부모 클래스: Car
//class Car {
//private:
//    int gasolineGauge;  // 가솔린 잔량
//public:
//    Car(int ag) : gasolineGauge(ag) {}  // 콜론 초기화 방식 사용
//
//    int getGasGauge() const { return gasolineGauge; }  // const 함수로 선언 (읽기 전용)
//};
//
//// 자식 클래스: HybridCar (Car를 상속받음)
//class HybridCar : public Car {
//private:
//    int electricGauge;  // 전기 잔량
//public:
//    HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}
//
//    int getElecGauge() const { return electricGauge; }  // const 함수로 선언 (읽기 전용)
//};
//
//// 자식 클래스: HybridWaterCar (HybridCar를 상속받음)
//class HybridWaterCar : public HybridCar {
//private:
//    int waterGauge;  // 워터 잔량
//public:
//    HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGauge(aw) {}
//
//    void showGauge() const {  // const 함수로 선언 (읽기 전용)
//        std::cout << "잔여 가솔린: " << getGasGauge() << std::endl;
//        std::cout << "잔여 전기량: " << getElecGauge() << std::endl;
//        std::cout << "잔여 워터량: " << waterGauge << std::endl;
//    }
//};
//
//// 메인 함수
//int main() {
//    HybridWaterCar hwc(10, 20, 30);  // 객체 생성
//    hwc.showGauge();  // showGauge() 호출
//
//    return 0;
//}
