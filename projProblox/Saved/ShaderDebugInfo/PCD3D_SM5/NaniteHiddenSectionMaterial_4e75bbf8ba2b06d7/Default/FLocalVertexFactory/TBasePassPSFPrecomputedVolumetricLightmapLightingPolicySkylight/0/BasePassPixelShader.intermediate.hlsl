#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float4 _228 = 0.0f.xxxx;
static float3 _229 = 0.0f.xxx;
static float _233 = 0.0f;
static float4 _234 = 0.0f.xxxx;
static float2 _235 = 0.0f.xx;

cbuffer View
{
    row_major float4x4 View_View_ViewToClip : packoffset(c28);
    row_major float4x4 View_View_SVPositionToTranslatedWorld : packoffset(c44);
    float3 View_View_ViewTilePosition : packoffset(c60);
    float3 View_View_ViewForward : packoffset(c62);
    float3 View_View_RelativePreViewTranslation : packoffset(c72);
    float4 View_View_BufferSizeAndInvSize : packoffset(c128);
    float View_View_PreExposure : packoffset(c132.z);
    float4 View_View_DiffuseOverrideParameter : packoffset(c133);
    float4 View_View_SpecularOverrideParameter : packoffset(c134);
    float2 View_View_RoughnessOverrideParameter : packoffset(c136);
    float View_View_OutOfBoundsMask : packoffset(c137);
    float View_View_CullingSign : packoffset(c138.w);
    uint View_View_StateFrameIndexMod8 : packoffset(c141.y);
    float View_View_UnlitViewmodeMask : packoffset(c142.z);
    float3 View_View_PrecomputedIndirectLightingColorScale : packoffset(c155);
    float View_View_SkyLightApplyPrecomputedBentNormalShadowingFlag : packoffset(c182.y);
    float4 View_View_SkyLightColor : packoffset(c183);
    float View_View_ShowDecalsMask : packoffset(c192.w);
    float View_View_bCheckerboardSubsurfaceProfileRendering : packoffset(c224.z);
    float3 View_View_VolumetricLightmapWorldToUVScale : packoffset(c231);
    float3 View_View_VolumetricLightmapWorldToUVAdd : packoffset(c232);
    float3 View_View_VolumetricLightmapIndirectionTextureSize : packoffset(c233);
    float View_View_VolumetricLightmapBrickSize : packoffset(c233.w);
    float3 View_View_VolumetricLightmapBrickTexelSize : packoffset(c234);
    float View_View_MinRoughness : packoffset(c243.z);
    uint View_View_bShadingEnergyConservation : packoffset(c322.z);
    uint View_View_bShadingEnergyPreservation : packoffset(c322.w);
};

StructuredBuffer<float4> View_SkyIrradianceEnvironmentMap;
StructuredBuffer<float4> Scene_GPUScene_GPUScenePrimitiveSceneData;
cbuffer OpaqueBasePass
{
    uint OpaqueBasePass_OpaqueBasePass_Shared_UseBasePassSkylight : packoffset(c140);
    int OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT : packoffset(c142.y);
    int OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil : packoffset(c151);
};

Texture3D<uint4> View_VolumetricLightmapIndirectionTexture;
Texture3D<float4> View_VolumetricLightmapBrickAmbientVector;
Texture3D<float4> View_VolumetricLightmapBrickSHCoefficients0;
Texture3D<float4> View_VolumetricLightmapBrickSHCoefficients1;
Texture3D<float4> View_VolumetricLightmapBrickSHCoefficients2;
Texture3D<float4> View_VolumetricLightmapBrickSHCoefficients3;
Texture3D<float4> View_VolumetricLightmapBrickSHCoefficients4;
Texture3D<float4> View_VolumetricLightmapBrickSHCoefficients5;
Texture3D<float4> View_SkyBentNormalBrickTexture;
Texture3D<float4> View_DirectionalLightShadowingBrickTexture;
SamplerState View_SharedBilinearClampedSampler;
Texture2D<float4> View_ShadingEnergyGGXSpecTexture;
SamplerState View_ShadingEnergySampler;
RWTexture2DArray<uint> OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs;
Texture2D<float4> OpaqueBasePass_DBufferATexture;
Texture2D<float4> OpaqueBasePass_DBufferBTexture;
Texture2D<float4> OpaqueBasePass_DBufferCTexture;
SamplerState OpaqueBasePass_DBufferATextureSampler;
Texture2D<float4> OpaqueBasePass_ResolvedSceneDepthTexture;

static float4 gl_FragCoord;
static bool gl_FrontFacing;
static float gl_FragDepth;
static float4 in_var_TEXCOORD10_centroid;
static float4 in_var_TEXCOORD11_centroid;
static uint in_var_PRIMITIVE_ID;
static float3 in_var_TEXCOORD9;
static float4 out_var_SV_Target0;
static float4 out_var_SV_Target1;
static uint out_var_SV_Target2;
static uint out_var_SV_Target3;
static uint out_var_SV_Target4;
static uint out_var_SV_Target5;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float3 in_var_TEXCOORD9 : TEXCOORD9;
    float4 gl_FragCoord : SV_Position;
    bool gl_FrontFacing : SV_IsFrontFace;
};

struct SPIRV_Cross_Output
{
    float4 out_var_SV_Target0 : SV_Target0;
    float4 out_var_SV_Target1 : SV_Target1;
    uint out_var_SV_Target2 : SV_Target2;
    uint out_var_SV_Target3 : SV_Target3;
    uint out_var_SV_Target4 : SV_Target4;
    uint out_var_SV_Target5 : SV_Target5;
    float gl_FragDepth : SV_DepthLessEqual;
};

void frag_main()
{
    float4 _278 = float4(_233, _233, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _282 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _286 = _282.xyz / _282.w.xxx;
    float3 _296 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _296 = -View_View_ViewForward;
    }
    else
    {
        _296 = normalize(-_286);
    }
    uint _297 = in_var_PRIMITIVE_ID * 41u;
    float4 _310 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _310.w = max(0.5f, 0.0f);
    float3 _311 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_297].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _312 = _278.z;
    float _313 = _278.w;
    float _316 = min(_312 / (_313 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _322 = (_286 - View_View_RelativePreViewTranslation) + ((-_296) * (mad(-_316, _313, _312) / _316));
    uint _345 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_297].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_297].x) & 256u) != 0u) ? 64u : 0u);
    float4 _482 = 0.0f.xxxx;
    float4 _483 = 0.0f.xxxx;
    uint _484 = 0u;
    float3 _485 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_297].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _360 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _364 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _360, 0.0f);
        float4 _367 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _360, 0.0f);
        float4 _370 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _360, 0.0f);
        float _371 = _364.w;
        float _372 = _367.w;
        float _373 = _370.w;
        float3 _374 = _364.xyz;
        float3 _377 = (_367.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _378 = _370.x;
        float _379 = _370.y;
        float _380 = _370.z;
        float3 _392 = 0.0f.xxx;
        float4 _479 = 0.0f.xxxx;
        float4 _480 = 0.0f.xxxx;
        uint _481 = 0u;
        do
        {
            if (any(bool3(_377.x != 0.0f.xxx.x, _377.y != 0.0f.xxx.y, _377.z != 0.0f.xxx.z)) || (_372 < 1.0f))
            {
                _392 = normalize((_311 * _372) + _377);
            }
            else
            {
                _392 = _311;
            }
            bool _396 = any(bool3(_374.x > 0.0f.xxx.x, _374.y > 0.0f.xxx.y, _374.z > 0.0f.xxx.z)) || (_371 < 1.0f);
            bool _403 = (((_378 > 0.0f) || (_379 > 0.0f)) || (_380 > 0.0f)) || (_373 < 1.0f);
            if ((!_396) && (!_403))
            {
                _479 = _310;
                _480 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _481 = 0u;
                break;
            }
            float _413 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _414 = _378.xxx;
            float4 _425 = 0.0f.xxxx;
            if (_396 || _403)
            {
                float3 _423 = (0.039999999105930328369140625f.xxx * _371) + lerp((0.07999999821186065673828125f * _379).xxx, _374, _414);
                _425 = float4(_423.x, _423.y, _423.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _425 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _432 = 0.0f.xxxx;
            if (_396)
            {
                float3 _430 = (_310.xyz * _371) + lerp(_374, 0.0f.xxx, _414);
                _432 = float4(_430.x, _430.y, _430.z, _310.w);
            }
            else
            {
                _432 = _310;
            }
            float4 _476 = 0.0f.xxxx;
            float4 _477 = 0.0f.xxxx;
            uint _478 = 0u;
            if (_403)
            {
                float _435 = mad(_413, _373, _378);
                float4 _468 = 0.0f.xxxx;
                float4 _469 = 0.0f.xxxx;
                if (_435 >= _413)
                {
                    float3 _462 = _432.xyz * (_435 - _413);
                    float3 _464 = _425.xyz + _462;
                    float3 _466 = _432.xyz - _462;
                    _468 = float4(_464.x, _464.y, _464.z, _425.w);
                    _469 = float4(_466.x, _466.y, _466.z, _432.w);
                }
                else
                {
                    float3 _454 = clamp(_425.xyz - (0.07999999821186065673828125f * clamp(min(_425.x, min(_425.y, _425.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_435 - _413));
                    float3 _456 = _432.xyz + _454;
                    float3 _458 = _425.xyz - _454;
                    _468 = float4(_458.x, _458.y, _458.z, _425.w);
                    _469 = float4(_456.x, _456.y, _456.z, _432.w);
                }
                float4 _472 = _469;
                _472.w = mad(_469.w, _373, _380);
                float4 _475 = _468;
                _475.w = _468.w * _373;
                _476 = _472;
                _477 = _475;
                _478 = 0u;
            }
            else
            {
                _476 = _432;
                _477 = _425;
                _478 = 0u;
            }
            _479 = _476;
            _480 = _477;
            _481 = _478;
            break;
        } while(false);
        _482 = _479;
        _483 = _480;
        _484 = _481;
        _485 = _392;
    }
    else
    {
        _482 = _310;
        _483 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _484 = 0u;
        _485 = _311;
    }
    float3 _496 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _322, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
    float4 _507 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_496.x), int(_496.y), int(_496.z), 0).xyz, 0)));
    float3 _522 = (((_507.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_496 / _507.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize;
    float _535 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_297].x) & 4u) != 0u)
    {
        _535 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f).x;
    }
    else
    {
        _535 = 1.0f;
    }
    float4 _536 = float4(_535, 1.0f, 1.0f, 1.0f);
    bool _538 = all(bool4(_536.x == 0.0f.xxxx.x, _536.y == 0.0f.xxxx.y, _536.z == 0.0f.xxxx.z, _536.w == 0.0f.xxxx.w));
    bool _540 = all(bool4(_536.x == 1.0f.xxxx.x, _536.y == 1.0f.xxxx.y, _536.z == 1.0f.xxxx.z, _536.w == 1.0f.xxxx.w));
    uint _559 = 0u;
    if ((!_538) && (!_540))
    {
        _559 = _345 | 8u;
    }
    else
    {
        uint _557 = 0u;
        if (_538)
        {
            _557 = (_345 | 0u) | 16u;
        }
        else
        {
            uint _554 = 0u;
            if (_540)
            {
                _554 = (_345 | 0u) | 0u;
            }
            else
            {
                _554 = _345;
            }
            _557 = _554;
        }
        _559 = _557;
    }
    float3 _618 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _590 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_297 + 1u].xyz) * 2097152.0f) + (_322 - Scene_GPUScene_GPUScenePrimitiveSceneData[_297 + 18u].xyz));
        float3 _591 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_297 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_297 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_297 + 25u].w) + 1.0f.xxx;
        float3 _617 = 0.0f.xxx;
        if (any(bool3(_590.x > _591.x, _590.y > _591.y, _590.z > _591.z)))
        {
            float3 _597 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _598 = _322 * 0.57700002193450927734375f.xxx;
            float3 _613 = frac(mad((_598.x + _598.y) + _598.z, 0.00200000009499490261077880859375f, frac(((_597.x + _597.y) + _597.z) * 4194.30419921875f))).xxx;
            _617 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_613.x > 0.5f.xxx.x, _613.y > 0.5f.xxx.y, _613.z > 0.5f.xxx.z)));
        }
        else
        {
            _617 = 0.0f.xxx;
        }
        _618 = _617;
    }
    else
    {
        _618 = 0.0f.xxx;
    }
    float4 _625 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _626 = _625.x;
    uint _628 = uint(mad(_316, 16777215.0f, 0.5f));
    uint _630 = uint(mad(_626, 16777215.0f, 0.5f));
    bool _639 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_628 == _630) || (_628 == (_630 - 1u))) : (_316 == _626);
    uint _1301 = 0u;
    uint _1302 = 0u;
    uint _1303 = 0u;
    float3 _1304 = 0.0f.xxx;
    if (_639)
    {
        uint2 _642 = uint2(gl_FragCoord.xy);
        float3 _643[4] = { normalize(_485), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _648 = mad(clamp(_482.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _649 = float4(_648.x, _648.y, _648.z, _482.w);
        float3 _655 = (clamp(_483.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _656 = float4(_655.x, _655.y, _655.z, _483.w);
        float _664 = clamp(max(View_View_MinRoughness, mad(_482.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _649.w = _664;
        float _668 = clamp(max(View_View_MinRoughness, mad(_664, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _649.w = _668;
        _656.w = clamp(_483.w, -1.0f, 1.0f);
        bool _673 = any(bool3(true, true, true));
        float3 _702 = 0.0f.xxx;
        uint _703 = 0u;
        uint _704 = 0u;
        bool _705 = false;
        float3 _706 = 0.0f.xxx;
        float _707 = 0.0f;
        float3 _708 = 0.0f.xxx;
        float _709 = 0.0f;
        if (_673)
        {
            float3 _695 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _695 = lerp(_649.xyz, _656.xyz, clamp((max(_655.x, max(_655.y, _655.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _695 = 0.0f.xxx;
                break;
            } while(false);
            float3 _246[4] = _643;
            _702 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _703 = 1u;
            _704 = (_559 | 0u) | 0u;
            _705 = (true && all(bool3(true, true, true))) && true;
            _706 = _695 * 1.0f;
            _707 = _668;
            _708 = _246[0u] * 1.0f;
            _709 = 1.0f;
        }
        else
        {
            _702 = 0.0f.xxx;
            _703 = 0u;
            _704 = _559;
            _705 = true;
            _706 = 0.0f.xxx;
            _707 = 0.0f;
            _708 = 0.0f.xxx;
            _709 = 0.0f;
        }
        uint _710 = _673 ? 2u : 0u;
        bool _712 = _709 > 0.0f;
        bool3 _713 = _712.xxx;
        float3 _714 = normalize(_708);
        float3 _715 = float3(_713.x ? _714.x : 0.0f.xxx.x, _713.y ? _714.y : 0.0f.xxx.y, _713.z ? _714.z : 0.0f.xxx.z);
        float3 _719 = _706 / _709.xxx;
        uint _804 = 0u;
        uint _805 = 0u;
        if (true)
        {
            bool _724 = _705 && (uint(_673) == 1u);
            uint _803 = 0u;
            if (_724)
            {
                uint _740 = 0u;
                if (((_710 >> 6u) & 1u) != 0u)
                {
                    _740 = ((_484 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _740 = 0u;
                }
                uint _749 = 0u;
                if ((((_710 >> 9u) & 1u) != 0u) && (_668 == 0.0f))
                {
                    _749 = _740 | 4u;
                }
                else
                {
                    _749 = _740;
                }
                uint _756 = 0u;
                if (((_710 >> 10u) & 1u) != 0u)
                {
                    _756 = _749 | 8u;
                }
                else
                {
                    _756 = _749;
                }
                uint _758 = (_710 >> 2u) & 7u;
                uint _763 = 0u;
                if (_758 == 4u)
                {
                    _763 = _756 | 16u;
                }
                else
                {
                    _763 = _756;
                }
                uint _768 = 0u;
                if (_758 == 1u)
                {
                    _768 = _763 | 32u;
                }
                else
                {
                    _768 = _763;
                }
                uint _773 = 0u;
                if (_758 == 3u)
                {
                    _773 = _768 | 64u;
                }
                else
                {
                    _773 = _768;
                }
                uint _774 = _773 & 2u;
                uint _802 = 0u;
                if ((_774 == 2u) || (_774 == 3u))
                {
                    _802 = 0u;
                }
                else
                {
                    uint _801 = 0u;
                    if ((_773 & 4u) == 4u)
                    {
                        _801 = 0u;
                    }
                    else
                    {
                        uint _800 = 0u;
                        if ((_773 & 40u) == 40u)
                        {
                            _800 = 0u;
                        }
                        else
                        {
                            uint _799 = 0u;
                            if ((_773 & 32u) == 32u)
                            {
                                _799 = 0u;
                            }
                            else
                            {
                                _799 = ((_773 & 72u) == 64u) ? 0u : 0u;
                            }
                            _800 = _799;
                        }
                        _801 = _800;
                    }
                    _802 = _801;
                }
                _803 = _802;
            }
            else
            {
                _803 = 0u;
            }
            _804 = _803;
            _805 = (_704 & 4294967288u) | ((_724 ? 1u : (_724 ? 2u : 3u)) & 7u);
        }
        else
        {
            _804 = 0u;
            _805 = _704;
        }
        float3 _1086 = 0.0f.xxx;
        float _1087 = 0.0f;
        float2 _1088 = 0.0f.xx;
        [branch]
        if (_673)
        {
            float3 _247[4] = _643;
            uint _809 = (_710 >> 14u) & 3u;
            float3 _856 = 0.0f.xxx;
            float3 _857 = 0.0f.xxx;
            float3 _858 = 0.0f.xxx;
            switch ((_710 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _832 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_247[_809], _296), clamp(_668, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _836 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _837 = _832.x;
                    float3 _841 = 1.0f.xxx + (_656.xyz * ((1.0f - _837) / _837));
                    _856 = _247[_809];
                    _857 = _649.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_836.x ? _841.x : 1.0f.xxx.x, _836.y ? _841.y : 1.0f.xxx.y, _836.z ? _841.z : 1.0f.xxx.z) * ((_656.xyz * _837) + (((1.0f.xxx * clamp(50.0f * max(_655.x, max(_655.y, _655.z)), 0.0f, 1.0f)) - _656.xyz) * _832.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _858 = _649.xyz;
                    break;
                }
                default:
                {
                    _856 = 0.0f.xxx;
                    _857 = 0.0f.xxx;
                    _858 = 0.0f.xxx;
                    break;
                }
            }
            float4 _862 = View_VolumetricLightmapBrickAmbientVector.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f);
            float _878 = _862.x;
            float4 _880 = (((View_VolumetricLightmapBrickSHCoefficients0.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f) * 2.0f) - 1.0f.xxxx) * _878) * float4(1.732051372528076171875f, 1.732051372528076171875f, 1.732051372528076171875f, 3.87297916412353515625f);
            float _881 = _862.y;
            float4 _883 = (((View_VolumetricLightmapBrickSHCoefficients2.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f) * 2.0f) - 1.0f.xxxx) * _881) * float4(1.732051372528076171875f, 1.732051372528076171875f, 1.732051372528076171875f, 3.87297916412353515625f);
            float _884 = _862.z;
            float4 _886 = (((View_VolumetricLightmapBrickSHCoefficients4.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f) * 2.0f) - 1.0f.xxxx) * _884) * float4(1.732051372528076171875f, 1.732051372528076171875f, 1.732051372528076171875f, 3.87297916412353515625f);
            float4 _903 = (((View_VolumetricLightmapBrickSHCoefficients1.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f) * 2.0f) - 1.0f.xxxx) * _878) * float4(3.87297916412353515625f, 4.472138881683349609375f, 3.87297916412353515625f, 3.87297916412353515625f);
            float4 _905 = (((View_VolumetricLightmapBrickSHCoefficients3.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f) * 2.0f) - 1.0f.xxxx) * _881) * float4(3.87297916412353515625f, 4.472138881683349609375f, 3.87297916412353515625f, 3.87297916412353515625f);
            float4 _907 = (((View_VolumetricLightmapBrickSHCoefficients5.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f) * 2.0f) - 1.0f.xxxx) * _884) * float4(3.87297916412353515625f, 4.472138881683349609375f, 3.87297916412353515625f, 3.87297916412353515625f);
            float4 _940 = 0.0f.xxxx;
            _940.y = (-0.48860299587249755859375f) * _856.y;
            _940.z = 0.48860299587249755859375f * _856.z;
            _940.w = (-0.48860299587249755859375f) * _856.x;
            float3 _947 = _856 * _856;
            float4 _950 = 0.0f.xxxx;
            _950.x = (1.09254801273345947265625f * _856.x) * _856.y;
            _950.y = ((-1.09254801273345947265625f) * _856.y) * _856.z;
            _950.z = 0.3153919875621795654296875f * mad(3.0f, _947.z, -1.0f);
            _950.w = ((-1.09254801273345947265625f) * _856.x) * _856.z;
            _940.x = 0.886227548122406005859375f;
            float3 _966 = _940.yzw * 2.094395160675048828125f;
            float4 _967 = float4(_940.x, _966.x, _966.y, _966.z);
            float4 _968 = _950 * 0.785398185253143310546875f;
            float _969 = (_947.x - _947.y) * 0.4290426075458526611328125f;
            float3 _974 = 0.0f.xxx;
            _974.x = mad(_903.w, _969, dot(float4(_878, _880.xyz), _967) + dot(float4(_880.w, _903.xyz), _968));
            _974.y = mad(_905.w, _969, dot(float4(_881, _883.xyz), _967) + dot(float4(_883.w, _905.xyz), _968));
            _974.z = mad(_907.w, _969, dot(float4(_884, _886.xyz), _967) + dot(float4(_886.w, _907.xyz), _968));
            float3 _1065 = 0.0f.xxx;
            if (OpaqueBasePass_OpaqueBasePass_Shared_UseBasePassSkylight > 0u)
            {
                float _1017 = 0.0f;
                float _1018 = 0.0f;
                float3 _1019 = 0.0f.xxx;
                [branch]
                if (View_View_SkyLightApplyPrecomputedBentNormalShadowingFlag != 0.0f)
                {
                    float3 _1004 = (View_SkyBentNormalBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, _522, 0.0f).xyz * 2.0f) - 1.0f.xxx;
                    float _1005 = length(_1004);
                    float3 _1008 = _1004 / max(_1005, 9.9999997473787516355514526367188e-05f).xxx;
                    float _1011 = mad(_1005 - 1.0f, 1.0f - _1005, 1.0f);
                    _1017 = lerp(clamp(dot(_1008, _856), 0.0f, 1.0f), 1.0f, _1011);
                    _1018 = _1005;
                    _1019 = lerp(_1008, _856, _1011.xxx);
                }
                else
                {
                    _1017 = 1.0f;
                    _1018 = 1.0f;
                    _1019 = _856;
                }
                float4 _1023 = float4(_1019, 1.0f);
                float3 _1027 = 0.0f.xxx;
                _1027.x = dot(View_SkyIrradianceEnvironmentMap[0u], _1023);
                _1027.y = dot(View_SkyIrradianceEnvironmentMap[1u], _1023);
                _1027.z = dot(View_SkyIrradianceEnvironmentMap[2u], _1023);
                float4 _1038 = _1023.xyzz * _1023.yzzx;
                float3 _1042 = 0.0f.xxx;
                _1042.x = dot(View_SkyIrradianceEnvironmentMap[3u], _1038);
                _1042.y = dot(View_SkyIrradianceEnvironmentMap[4u], _1038);
                _1042.z = dot(View_SkyIrradianceEnvironmentMap[5u], _1038);
                _1065 = (max(0.0f.xxx, (_1027 + _1042) + (View_SkyIrradianceEnvironmentMap[6u].xyz * mad(_1019.x, _1019.x, -(_1019.y * _1019.y)))) * View_View_SkyLightColor.xyz) * (_1018 * _1017);
            }
            else
            {
                _1065 = 0.0f.xxx;
            }
            float3 _1066 = mad(max(0.0f.xxx, _974) * 0.3183098733425140380859375f.xxx, View_View_PrecomputedIndirectLightingColorScale, _1065);
            float2 _1082 = 0.0f.xx;
            _1082.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _1082.y = dot(_1066, float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f));
            _1086 = mad(_1066 * _857, max(1.0f.xxx, ((((((_858 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_858 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_858 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _702);
            _1087 = 1.0f;
            _1088 = _1082;
        }
        else
        {
            _1086 = _702;
            _1087 = 0.0f;
            _1088 = 0.0f.xx;
        }
        float2 _1091 = _1088 * (1.0f / max(1.0f, _1087));
        uint _1235 = 0u;
        uint _1236 = 0u;
        [branch]
        if (_673)
        {
            float _1110 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _1111 = _1110 * 0.0078740157186985015869140625f;
            float3 _1113 = float3(_1111, _1111, _1110 * 0.01587301678955554962158203125f);
            float3 _1114 = clamp(_649.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1115 = _1114.x;
            float _1124 = 0.0f;
            do
            {
                if (_1115 < 0.00313066993840038776397705078125f)
                {
                    _1124 = _1115 * 12.9200000762939453125f;
                    break;
                }
                _1124 = mad(pow(_1115, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1125 = _1114.y;
            float _1134 = 0.0f;
            do
            {
                if (_1125 < 0.00313066993840038776397705078125f)
                {
                    _1134 = _1125 * 12.9200000762939453125f;
                    break;
                }
                _1134 = mad(pow(_1125, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1135 = _1114.z;
            float _1144 = 0.0f;
            do
            {
                if (_1135 < 0.00313066993840038776397705078125f)
                {
                    _1144 = _1135 * 12.9200000762939453125f;
                    break;
                }
                _1144 = mad(pow(_1135, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1145 = float3(_1124, _1134, _1144);
            float3 _1151 = clamp(mad(_1113, float3(min((asuint(_1145) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1145), 0.0f.xxx, 1.0f.xxx);
            uint _1165 = ((uint(_1151.x * 127.0f) << 0u) | (uint(_1151.y * 127.0f) << 7u)) | (uint(_1151.z * 63.0f) << 14u);
            float3 _1170 = clamp(_656.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1171 = _1170.x;
            float _1180 = 0.0f;
            do
            {
                if (_1171 < 0.00313066993840038776397705078125f)
                {
                    _1180 = _1171 * 12.9200000762939453125f;
                    break;
                }
                _1180 = mad(pow(_1171, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1181 = _1170.y;
            float _1190 = 0.0f;
            do
            {
                if (_1181 < 0.00313066993840038776397705078125f)
                {
                    _1190 = _1181 * 12.9200000762939453125f;
                    break;
                }
                _1190 = mad(pow(_1181, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1191 = _1170.z;
            float _1200 = 0.0f;
            do
            {
                if (_1191 < 0.00313066993840038776397705078125f)
                {
                    _1200 = _1191 * 12.9200000762939453125f;
                    break;
                }
                _1200 = mad(pow(_1191, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1201 = float3(_1180, _1190, _1200);
            float3 _1207 = clamp(mad(_1113, float3(min((asuint(_1201) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1201), 0.0f.xxx, 1.0f.xxx);
            _1235 = (((uint(_1207.x * 127.0f) << 0u) | (uint(_1207.y * 127.0f) << 7u)) | (uint(_1207.z * 63.0f) << 14u)) | ((_1165 & 4095u) << 20u);
            _1236 = ((0u | ((((_805 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_1091.y * _1091.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_1165 >> 12u) & 255u) << 8u) | uint(clamp(_668, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1235 = 0u;
            _1236 = 0u;
        }
        float2 _1241 = _715.xy / dot(1.0f.xxx, abs(_715)).xx;
        float3 _1259 = 0.0f.xxx;
        if (_715.z <= 0.0f)
        {
            float2 _1250 = _1241.xy;
            bool2 _1251 = bool2(_1250.x >= 0.0f.xx.x, _1250.y >= 0.0f.xx.y);
            float2 _1257 = (1.0f.xx - abs(_1241.yx)) * float2(_1251.x ? 1.0f : (-1.0f), _1251.y ? 1.0f : (-1.0f));
            _1259 = float3(_1257.x, _1257.y, _715.z);
        }
        else
        {
            _1259 = float3(_1241.x, _1241.y, _715.z);
        }
        uint2 _1264 = uint2(clamp((_1259.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1276 = _804 & 3u;
        [branch]
        if (_1276 != 0u)
        {
            uint _1283 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1284 = _642.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1284, _642.y, _1283)] = _804;
            if ((_1276 == 2u) || (_1276 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1284, _642.y, _1283 + 1u)] = 0u;
            }
        }
        _1301 = (((_1264.x | (_1264.y << 11u)) << 10u) | (uint(clamp(_712 ? (_707 / _709) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _703;
        _1302 = _1235;
        _1303 = _1236;
        _1304 = lerp(0.0f.xxx, float3(_713.x ? _719.x : 0.0f.xxx.x, _713.y ? _719.y : 0.0f.xxx.y, _713.z ? _719.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_1086 + _618);
    }
    else
    {
        _1301 = 0u;
        _1302 = 0u;
        _1303 = 0u;
        _1304 = 0.0f.xxx;
    }
    float4 _1310 = float4(_1304 * 1.0f, 0.0f);
    float4 _1317 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1316 = _1310;
        _1316.w = 0.0f;
        _1317 = _1316;
    }
    else
    {
        _1317 = _1310;
    }
    float4 _1318 = 0.0f.xxxx;
    _1318.x = _535;
    _1318.y = 1.0f;
    _1318.z = 1.0f;
    _1318.w = 1.0f;
    float4 _1324 = _1317 * View_View_PreExposure;
    float3 _1326 = min(_1324.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1326.x, _1326.y, _1326.z, _1324.w);
    out_var_SV_Target1 = _1318;
    out_var_SV_Target2 = _1303;
    out_var_SV_Target3 = _1302;
    out_var_SV_Target4 = _639 ? 0u : 0u;
    out_var_SV_Target5 = _1301;
    gl_FragDepth = _316;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_FragCoord = stage_input.gl_FragCoord;
    gl_FragCoord.w = 1.0 / gl_FragCoord.w;
    gl_FrontFacing = stage_input.gl_FrontFacing;
    in_var_TEXCOORD10_centroid = stage_input.in_var_TEXCOORD10_centroid;
    in_var_TEXCOORD11_centroid = stage_input.in_var_TEXCOORD11_centroid;
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    in_var_TEXCOORD9 = stage_input.in_var_TEXCOORD9;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_FragDepth = gl_FragDepth;
    stage_output.out_var_SV_Target0 = out_var_SV_Target0;
    stage_output.out_var_SV_Target1 = out_var_SV_Target1;
    stage_output.out_var_SV_Target2 = out_var_SV_Target2;
    stage_output.out_var_SV_Target3 = out_var_SV_Target3;
    stage_output.out_var_SV_Target4 = out_var_SV_Target4;
    stage_output.out_var_SV_Target5 = out_var_SV_Target5;
    return stage_output;
}
