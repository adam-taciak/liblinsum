#ifndef __MEMBERSHIP_FUNCTION_H_INCLUDED__
#define __MEMBERSHIP_FUNCTION_H_INCLUDED__

/*!
 *
 * 
 */
class MembershipFunction
{
    public:
        virtual double y(double x) = 0;
        virtual void show() = 0;
};

#endif
