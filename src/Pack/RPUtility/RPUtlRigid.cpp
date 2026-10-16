#include <Pack/RPUtility.h>

RPUtlRigid::RPUtlRigid()
{
}

RPUtlRigid::~RPUtlRigid()
{

}

void RPUtlRigid::fn_801BAE70()
{
    Mtx m, m1;
    nw4r::math::MTX33 m3(0.0f, 1.0f, 0, 0, 0, 0, 0, 0, 0);

    PSMTXIdentity(m);
    PSMTXIdentity(m1);
    nw4r::math::MTX33Identity(&m3);
}
