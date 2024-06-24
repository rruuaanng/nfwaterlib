#ifndef NFWATER_Q_FIXED_H
#define NFWATER_Q_FIXED_H


#include <cstdint>

// 
// math constant
//
#define IQ15_LN2         0X58B9         /* ln(2) */
#define IQ31_LN2         0X58B90BFC

#define IQ13_PI          0X6488         /* PI */
#define IQ14_PI          0XC910
#define IQ29_PI          0X6487ED51
#define IQ30_PI          0XC90FDAA2

#define IQ14_HALFPI      0X6488         /* PI/2 */
#define IQ15_HALFPI      0XC910
#define IQ29_HALFPI      0X3243F6A8
#define IQ30_HALFPI      0X6487ED51
#define IQ31_HALFPI      0XC90FDAA2

#define IQ14_QUARTERPI   0X3244         /* PI/4 */
#define IQ15_QUARTERPI   0X6488
#define IQ30_QUARTERPI   0X3243F6A8
#define IQ31_QUARTERPI   0X6487ED51

#define IQ15_INVROOT2    0X5A82         /* 1/sqrt(2) */
#define IQ31_INVROOT2    0X5A82799A

#define IQ28_TWOPI       0X6487ED51     /* 2PI */
#define IQ31_TWOTHIRD    0X55555555     /* 2/3 */

#define IQ15_TANSMALL    0X0021         /* small tan value */
#define IQ31_TANSMALL    0X0020C49B

#define IQ15_POINTONE    0X0CCD         /* 0.1 */
#define IQ31_POINTONE    0X0CCCCCCD
#define IQ15_ONETENTH    IQ15_POINTONE   
#define IQ31_ONETENTH    IQ31_POINTONE

#define IQ31_ONE         0X7FFFFFFF     /* 1 */


//
// Q format
//
typedef int32_t _iq1;
typedef int32_t _iq2;
typedef int32_t _iq3;
typedef int32_t _iq4;
typedef int32_t _iq5;
typedef int32_t _iq6;
typedef int32_t _iq7;
typedef int32_t _iq8;
typedef int32_t _iq9;
typedef int32_t _iq10;
typedef int32_t _iq11;
typedef int32_t _iq12;
typedef int32_t _iq13;
typedef int32_t _iq14;
typedef int32_t _iq15;
typedef int32_t _iq16;
typedef int32_t _iq17;
typedef int32_t _iq18;
typedef int32_t _iq19;
typedef int32_t _iq20;
typedef int32_t _iq21;
typedef int32_t _iq22;
typedef int32_t _iq23;
typedef int32_t _iq24;
typedef int32_t _iq25;
typedef int32_t _iq26;
typedef int32_t _iq27;
typedef int32_t _iq28;
typedef int32_t _iq29;
typedef int32_t _iq30;


//
// multiplication
//
#define _IQmul2(A)       ((A) << 1)
#define _IQmul4(A)       ((A) << 2)
#define _IQmul8(A)       ((A) << 3)
#define _IQmul16(A)      ((A) << 4)
#define _IQmul32(A)      ((A) << 5)
#define _IQmul64(A)      ((A) << 6)


//
// division
//
#define _IQdiv2(A)       ((A) >> 1)
#define _IQdiv4(A)       ((A) >> 2)
#define _IQdiv8(A)       ((A) >> 3)
#define _IQdiv16(A)      ((A) >> 4)
#define _IQdiv32(A)      ((A) >> 5)
#define _IQdiv64(A)      ((A) >> 6)


//
// convert floating-point number to IQ value
//
#define _IQ30(A)         ((_iq30)(A) * ((_iq30)(1 << 30)))
#define _IQ29(A)         ((_iq29)(A) * ((_iq29)(1 << 29)))
#define _IQ28(A)         ((_iq28)(A) * ((_iq28)(1 << 28)))
#define _IQ27(A)         ((_iq27)(A) * ((_iq27)(1 << 27)))
#define _IQ26(A)         ((_iq26)(A) * ((_iq26)(1 << 26)))
#define _IQ25(A)         ((_iq25)(A) * ((_iq25)(1 << 25)))
#define _IQ24(A)         ((_iq24)(A) * ((_iq24)(1 << 24)))
#define _IQ23(A)         ((_iq23)(A) * ((_iq23)(1 << 23)))
#define _IQ22(A)         ((_iq22)(A) * ((_iq22)(1 << 22)))
#define _IQ21(A)         ((_iq21)(A) * ((_iq21)(1 << 21)))
#define _IQ20(A)         ((_iq20)(A) * ((_iq20)(1 << 20)))
#define _IQ19(A)         ((_iq19)(A) * ((_iq19)(1 << 19)))
#define _IQ18(A)         ((_iq18)(A) * ((_iq18)(1 << 18)))
#define _IQ17(A)         ((_iq17)(A) * ((_iq17)(1 << 17)))
#define _IQ16(A)         ((_iq16)(A) * ((_iq16)(1 << 16)))
#define _IQ15(A)         ((_iq15)(A) * ((_iq15)(1 << 15)))
#define _IQ14(A)         ((_iq14)(A) * ((_iq14)(1 << 14)))
#define _IQ13(A)         ((_iq13)(A) * ((_iq13)(1 << 13)))
#define _IQ12(A)         ((_iq12)(A) * ((_iq12)(1 << 12)))
#define _IQ11(A)         ((_iq11)(A) * ((_iq11)(1 << 11)))
#define _IQ10(A)         ((_iq10)(A) * ((_iq10)(1 << 10)))
#define _IQ9(A)          ((_iq9)(A) * ((_iq9)(1 << 9)))
#define _IQ8(A)          ((_iq8)(A) * ((_iq8)(1 << 8)))
#define _IQ7(A)          ((_iq7)(A) * ((_iq7)(1 << 7)))
#define _IQ6(A)          ((_iq6)(A) * ((_iq6)(1 << 6)))
#define _IQ5(A)          ((_iq5)(A) * ((_iq5)(1 << 5)))
#define _IQ4(A)          ((_iq4)(A) * ((_iq4)(1 << 4)))
#define _IQ3(A)          ((_iq3)(A) * ((_iq3)(1 << 3)))
#define _IQ2(A)          ((_iq2)(A) * ((_iq2)(1 << 2)))
#define _IQ1(A)          ((_iq1)(A) * ((_iq1)(1 << 1)))


static inline float __IQtoF(int_fast32_t q_value, int8_t bit)
{
    uint_fast16_t e;
    uint_fast32_t r;
    uint_fast32_t i;

    e = 0x3F80 + ((31 - bit) * ((uint_fast32_t) 1 << (23 - 16)));

    if (q_value < 0) {
        e |= 0x8000;
        i = -q_value;
    } else if (q_value == 0) {
        return 0;
    } else {
        i = q_value;
    }
    
    while ((uint_fast16_t)(i >> 16) < 0x8000) {
        i <<= 1;
        e -= 0x0080;
    }

    r = (i + 0x0080) >> 8;
    r &= ~0x00800000;
    r += (uint_fast32_t)(e) << 16;

    return *(float *)&r;
}


//
// convert IQ value to floating-point number
//
#define _IQ30toF(A)         __IQtoF(A, 30)
#define _IQ29toF(A)         __IQtoF(A, 29)
#define _IQ28toF(A)         __IQtoF(A, 28)
#define _IQ27toF(A)         __IQtoF(A, 27)
#define _IQ26toF(A)         __IQtoF(A, 26)
#define _IQ25toF(A)         __IQtoF(A, 25)
#define _IQ24toF(A)         __IQtoF(A, 24)
#define _IQ23toF(A)         __IQtoF(A, 23)
#define _IQ22toF(A)         __IQtoF(A, 22)
#define _IQ21toF(A)         __IQtoF(A, 21)
#define _IQ20toF(A)         __IQtoF(A, 20)
#define _IQ19toF(A)         __IQtoF(A, 19)
#define _IQ18toF(A)         __IQtoF(A, 18)
#define _IQ17toF(A)         __IQtoF(A, 17)
#define _IQ16toF(A)         __IQtoF(A, 16)
#define _IQ15toF(A)         __IQtoF(A, 15)
#define _IQ14toF(A)         __IQtoF(A, 14)
#define _IQ13toF(A)         __IQtoF(A, 13)
#define _IQ12toF(A)         __IQtoF(A, 12)
#define _IQ11toF(A)         __IQtoF(A, 11)
#define _IQ10toF(A)         __IQtoF(A, 10)
#define _IQ9toF(A)          __IQtoF(A, 9)
#define _IQ8toF(A)          __IQtoF(A, 8)
#define _IQ7toF(A)          __IQtoF(A, 7)
#define _IQ6toF(A)          __IQtoF(A, 6)
#define _IQ5toF(A)          __IQtoF(A, 5)
#define _IQ4toF(A)          __IQtoF(A, 4)
#define _IQ3toF(A)          __IQtoF(A, 3)
#define _IQ2toF(A)          __IQtoF(A, 2)
#define _IQ1toF(A)          __IQtoF(A, 1)


#endif // NFWATER_Q_FIXED_H