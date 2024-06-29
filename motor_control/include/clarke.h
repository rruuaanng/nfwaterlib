#ifndef NFWATER_MOTOR_CONTROL_CLARKE_H
#define NFWATER_MOTOR_CONTROL_CLARKE_H

// 
// clarke transform
// 
// in:
//  a               xx
//  b               xx
// out:
//  alpha           xx
//  beta            xx
// note:
//  别问我为什么没有c相电压, 懂的都懂
template <typename _IO_Type>
void clarke_direct_2p_fixed(
    _IO_Type &alpha,
    _IO_Type &beta,
    _IO_Type ia,
    _IO_Type ib)
{
    alpha = ia;
    const _IO_Type sqrt3 = 1.732050;

    _IO_Type x0, x1;
    x0 = (sqrt3 * ia) / 3;
    x1 = (2 * sqrt3 * ib) / 3;

    beta = x0 + x1;
}

//
// clarke inverse transform
//
// in:
//  alpha           xxx
//  beta            xxx
// out:
//  a               xxx
//  b               xxx
//  c               xxx
template <typename _IO_Type>
void clarke_inverse_3p_fixed(
    _IO_Type &ia,
    _IO_Type &ib,
    _IO_Type &ic,
    _IO_Type alpha,
    _IO_Type beta)
{
    ia = alpha;
    
    const _IO_Type sqrt3 = 1.732050;
    ib = (0 - alpha + sqrt3 * beta) / 2;
    ic = (0 - alpha - sqrt3 * beta) / 2;
}

#endif // NFWATER_MOTOR_CONTROL_CLARKE_H