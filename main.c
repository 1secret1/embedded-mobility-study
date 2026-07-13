#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= (1 << PB5); // 13번 핀(PB5)을 출력 모드로 설정
    while (1) {
        PORTB |= (1 << PB5);  // LED HIGH (켜기)
        _delay_ms(500);       // 0.5초 대기
        PORTB &= ~(1 << PB5); // LED LOW (끄기)
        _delay_ms(500);
    }
    return 0;
}