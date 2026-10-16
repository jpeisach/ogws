#include <Pack/RPGraphics.h>

// RPGrpModelMaterial::RPGrpModelMaterial(RPGrpModel* pModel, u16 idx)
// {
//     // nw4r::g3d::ResMdl::GetResMat
//     // mCopiedMatAccess = pModel.ma;
// }

void RPGrpModelMaterial::Calc()
{
    // some compairosnsstuff..
    nw4r::g3d::ResGenMode mode = mCopiedMatAccess.GetResGenMode(false);
    mode.GXSetNumChans(mNumChans);
    mode.GXSetNumTexGens(mNumTexGens);
    mode.GXSetNumTevStages(mNumTevStages);
    mode.GXSetNumIndStages(mNumIndStages);
}

RPGrpModelMaterial::~RPGrpModelMaterial()
{

}

void RPGrpModelMaterial::idk()
{
    nw4r::g3d::ResTexSrt srt = mCopiedMatAccess.GetResTexSrt(false);
    EGG::G3DUtility::setManualMapMode(srt, 8);
}

void RPGrpModelMaterial::ok()
{
    if(mpChanCtrls[1]->enable == 0) {
    nw4r::g3d::ResGenMode mode = mCopiedMatAccess.GetResGenMode(false);
    mode.GXSetNumChans(mNumChans);
    mode.GXSetNumTexGens(mNumTexGens);
    mode.GXSetNumTevStages(mNumTevStages);
    mode.GXSetNumIndStages(mNumIndStages);
    if(unk6) {
        mode.GXSetCullMode(mCullMode);
    }
    }
}
