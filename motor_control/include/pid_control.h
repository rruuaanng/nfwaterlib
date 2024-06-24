#ifndef NFWATER_MOTOR_CONTROL_PID_CONTROL_H
#define NFWATER_MOTOR_CONTROL_PID_CONTROL_H


template <typename _Pid_Type, typename _IO_Type, typename _Err_Type>
void pid_control(
    _Err_Type &err_sum, 
    _Err_Type &prev_err, 
    _IO_Type &out,
    _Pid_Type kp, _Pid_Type ki, _Pid_Type kd,
    _IO_Type measured_val,
    _IO_Type target)
{
    _Err_Type err;
    err = target - measured_val;

    _Err_Type diff;
    diff = err - prev_err;
    
    _IO_Type p, i, d;
    p = kp * err;
    i = ki * err_sum;
    d = kd * diff;

    out = (p + i + d);
    prev_err = err;
    err_sum += err;
}

#endif // NFWATER_MOTOR_CONTROL_PID_CONTROL_H