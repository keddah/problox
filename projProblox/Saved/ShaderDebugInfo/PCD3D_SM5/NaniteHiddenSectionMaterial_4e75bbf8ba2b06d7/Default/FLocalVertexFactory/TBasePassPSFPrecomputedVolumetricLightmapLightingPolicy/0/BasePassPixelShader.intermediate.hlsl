#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float4 _225 = 0.0f.xxxx;
static float _229 = 0.0f;
static float4 _230 = 0.0f.xxxx;
static float2 _231 = 0.0f.xx;

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

StructuredBuffer<float4> Scene_GPUScene_GPUScenePrimitiveSceneData;
cbuffer OpaqueBasePass
{
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
    float4 _271 = float4(_229, _229, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _275 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _279 = _275.xyz / _275.w.xxx;
    float3 _289 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _289 = -View_View_ViewForward;
    }
    else
    {
        _289 = normalize(-_279);
    }
    uint _290 = in_var_PRIMITIVE_ID * 41u;
    float4 _303 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _303.w = max(0.5f, 0.0f);
    float3 _304 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_290].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _305 = _271.z;
    float _306 = _271.w;
    float _309 = min(_305 / (_306 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _315 = (_279 - View_View_RelativePreViewTranslation) + ((-_289) * (mad(-_309, _306, _305) / _309));
    uint _338 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_290].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_290].x) & 256u) != 0u) ? 64u : 0u);
    float4 _475 = 0.0f.xxxx;
    float4 _476 = 0.0f.xxxx;
    uint _477 = 0u;
    float3 _478 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_290].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _353 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _357 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _353, 0.0f);
        float4 _360 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _353, 0.0f);
        float4 _363 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _353, 0.0f);
        float _364 = _357.w;
        float _365 = _360.w;
        float _366 = _363.w;
        float3 _367 = _357.xyz;
        float3 _370 = (_360.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _371 = _363.x;
        float _372 = _363.y;
        float _373 = _363.z;
        float3 _385 = 0.0f.xxx;
        float4 _472 = 0.0f.xxxx;
        float4 _473 = 0.0f.xxxx;
        uint _474 = 0u;
        do
        {
            if (any(bool3(_370.x != 0.0f.xxx.x, _370.y != 0.0f.xxx.y, _370.z != 0.0f.xxx.z)) || (_365 < 1.0f))
            {
                _385 = normalize((_304 * _365) + _370);
            }
            else
            {
                _385 = _304;
            }
            bool _389 = any(bool3(_367.x > 0.0f.xxx.x, _367.y > 0.0f.xxx.y, _367.z > 0.0f.xxx.z)) || (_364 < 1.0f);
            bool _396 = (((_371 > 0.0f) || (_372 > 0.0f)) || (_373 > 0.0f)) || (_366 < 1.0f);
            if ((!_389) && (!_396))
            {
                _472 = _303;
                _473 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _474 = 0u;
                break;
            }
            float _406 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _407 = _371.xxx;
            float4 _418 = 0.0f.xxxx;
            if (_389 || _396)
            {
                float3 _416 = (0.039999999105930328369140625f.xxx * _364) + lerp((0.07999999821186065673828125f * _372).xxx, _367, _407);
                _418 = float4(_416.x, _416.y, _416.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _418 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _425 = 0.0f.xxxx;
            if (_389)
            {
                float3 _423 = (_303.xyz * _364) + lerp(_367, 0.0f.xxx, _407);
                _425 = float4(_423.x, _423.y, _423.z, _303.w);
            }
            else
            {
                _425 = _303;
            }
            float4 _469 = 0.0f.xxxx;
            float4 _470 = 0.0f.xxxx;
            uint _471 = 0u;
            if (_396)
            {
                float _428 = mad(_406, _366, _371);
                float4 _461 = 0.0f.xxxx;
                float4 _462 = 0.0f.xxxx;
                if (_428 >= _406)
                {
                    float3 _455 = _425.xyz * (_428 - _406);
                    float3 _457 = _418.xyz + _455;
                    float3 _459 = _425.xyz - _455;
                    _461 = float4(_457.x, _457.y, _457.z, _418.w);
                    _462 = float4(_459.x, _459.y, _459.z, _425.w);
                }
                else
                {
                    float3 _447 = clamp(_418.xyz - (0.07999999821186065673828125f * clamp(min(_418.x, min(_418.y, _418.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_428 - _406));
                    float3 _449 = _425.xyz + _447;
                    float3 _451 = _418.xyz - _447;
                    _461 = float4(_451.x, _451.y, _451.z, _418.w);
                    _462 = float4(_449.x, _449.y, _449.z, _425.w);
                }
                float4 _465 = _462;
                _465.w = mad(_462.w, _366, _373);
                float4 _468 = _461;
                _468.w = _461.w * _366;
                _469 = _465;
                _470 = _468;
                _471 = 0u;
            }
            else
            {
                _469 = _425;
                _470 = _418;
                _471 = 0u;
            }
            _472 = _469;
            _473 = _470;
            _474 = _471;
            break;
        } while(false);
        _475 = _472;
        _476 = _473;
        _477 = _474;
        _478 = _385;
    }
    else
    {
        _475 = _303;
        _476 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _477 = 0u;
        _478 = _304;
    }
    float3 _489 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _315, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
    float4 _500 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_489.x), int(_489.y), int(_489.z), 0).xyz, 0)));
    float3 _515 = (((_500.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_489 / _500.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize;
    float _528 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_290].x) & 4u) != 0u)
    {
        _528 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f).x;
    }
    else
    {
        _528 = 1.0f;
    }
    float4 _529 = float4(_528, 1.0f, 1.0f, 1.0f);
    bool _531 = all(bool4(_529.x == 0.0f.xxxx.x, _529.y == 0.0f.xxxx.y, _529.z == 0.0f.xxxx.z, _529.w == 0.0f.xxxx.w));
    bool _533 = all(bool4(_529.x == 1.0f.xxxx.x, _529.y == 1.0f.xxxx.y, _529.z == 1.0f.xxxx.z, _529.w == 1.0f.xxxx.w));
    uint _552 = 0u;
    if ((!_531) && (!_533))
    {
        _552 = _338 | 8u;
    }
    else
    {
        uint _550 = 0u;
        if (_531)
        {
            _550 = (_338 | 0u) | 16u;
        }
        else
        {
            uint _547 = 0u;
            if (_533)
            {
                _547 = (_338 | 0u) | 0u;
            }
            else
            {
                _547 = _338;
            }
            _550 = _547;
        }
        _552 = _550;
    }
    float3 _611 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _583 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_290 + 1u].xyz) * 2097152.0f) + (_315 - Scene_GPUScene_GPUScenePrimitiveSceneData[_290 + 18u].xyz));
        float3 _584 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_290 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_290 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_290 + 25u].w) + 1.0f.xxx;
        float3 _610 = 0.0f.xxx;
        if (any(bool3(_583.x > _584.x, _583.y > _584.y, _583.z > _584.z)))
        {
            float3 _590 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _591 = _315 * 0.57700002193450927734375f.xxx;
            float3 _606 = frac(mad((_591.x + _591.y) + _591.z, 0.00200000009499490261077880859375f, frac(((_590.x + _590.y) + _590.z) * 4194.30419921875f))).xxx;
            _610 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_606.x > 0.5f.xxx.x, _606.y > 0.5f.xxx.y, _606.z > 0.5f.xxx.z)));
        }
        else
        {
            _610 = 0.0f.xxx;
        }
        _611 = _610;
    }
    else
    {
        _611 = 0.0f.xxx;
    }
    float4 _618 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _619 = _618.x;
    uint _621 = uint(mad(_309, 16777215.0f, 0.5f));
    uint _623 = uint(mad(_619, 16777215.0f, 0.5f));
    bool _632 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_621 == _623) || (_621 == (_623 - 1u))) : (_309 == _619);
    uint _1217 = 0u;
    uint _1218 = 0u;
    uint _1219 = 0u;
    float3 _1220 = 0.0f.xxx;
    if (_632)
    {
        uint2 _635 = uint2(gl_FragCoord.xy);
        float3 _636[4] = { normalize(_478), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _641 = mad(clamp(_475.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _642 = float4(_641.x, _641.y, _641.z, _475.w);
        float3 _648 = (clamp(_476.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _649 = float4(_648.x, _648.y, _648.z, _476.w);
        float _657 = clamp(max(View_View_MinRoughness, mad(_475.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _642.w = _657;
        float _661 = clamp(max(View_View_MinRoughness, mad(_657, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _642.w = _661;
        _649.w = clamp(_476.w, -1.0f, 1.0f);
        bool _666 = any(bool3(true, true, true));
        float3 _695 = 0.0f.xxx;
        uint _696 = 0u;
        uint _697 = 0u;
        bool _698 = false;
        float3 _699 = 0.0f.xxx;
        float _700 = 0.0f;
        float3 _701 = 0.0f.xxx;
        float _702 = 0.0f;
        if (_666)
        {
            float3 _688 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _688 = lerp(_642.xyz, _649.xyz, clamp((max(_648.x, max(_648.y, _648.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _688 = 0.0f.xxx;
                break;
            } while(false);
            float3 _241[4] = _636;
            _695 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _696 = 1u;
            _697 = (_552 | 0u) | 0u;
            _698 = (true && all(bool3(true, true, true))) && true;
            _699 = _688 * 1.0f;
            _700 = _661;
            _701 = _241[0u] * 1.0f;
            _702 = 1.0f;
        }
        else
        {
            _695 = 0.0f.xxx;
            _696 = 0u;
            _697 = _552;
            _698 = true;
            _699 = 0.0f.xxx;
            _700 = 0.0f;
            _701 = 0.0f.xxx;
            _702 = 0.0f;
        }
        uint _703 = _666 ? 2u : 0u;
        bool _705 = _702 > 0.0f;
        bool3 _706 = _705.xxx;
        float3 _707 = normalize(_701);
        float3 _708 = float3(_706.x ? _707.x : 0.0f.xxx.x, _706.y ? _707.y : 0.0f.xxx.y, _706.z ? _707.z : 0.0f.xxx.z);
        float3 _712 = _699 / _702.xxx;
        uint _797 = 0u;
        uint _798 = 0u;
        if (true)
        {
            bool _717 = _698 && (uint(_666) == 1u);
            uint _796 = 0u;
            if (_717)
            {
                uint _733 = 0u;
                if (((_703 >> 6u) & 1u) != 0u)
                {
                    _733 = ((_477 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _733 = 0u;
                }
                uint _742 = 0u;
                if ((((_703 >> 9u) & 1u) != 0u) && (_661 == 0.0f))
                {
                    _742 = _733 | 4u;
                }
                else
                {
                    _742 = _733;
                }
                uint _749 = 0u;
                if (((_703 >> 10u) & 1u) != 0u)
                {
                    _749 = _742 | 8u;
                }
                else
                {
                    _749 = _742;
                }
                uint _751 = (_703 >> 2u) & 7u;
                uint _756 = 0u;
                if (_751 == 4u)
                {
                    _756 = _749 | 16u;
                }
                else
                {
                    _756 = _749;
                }
                uint _761 = 0u;
                if (_751 == 1u)
                {
                    _761 = _756 | 32u;
                }
                else
                {
                    _761 = _756;
                }
                uint _766 = 0u;
                if (_751 == 3u)
                {
                    _766 = _761 | 64u;
                }
                else
                {
                    _766 = _761;
                }
                uint _767 = _766 & 2u;
                uint _795 = 0u;
                if ((_767 == 2u) || (_767 == 3u))
                {
                    _795 = 0u;
                }
                else
                {
                    uint _794 = 0u;
                    if ((_766 & 4u) == 4u)
                    {
                        _794 = 0u;
                    }
                    else
                    {
                        uint _793 = 0u;
                        if ((_766 & 40u) == 40u)
                        {
                            _793 = 0u;
                        }
                        else
                        {
                            uint _792 = 0u;
                            if ((_766 & 32u) == 32u)
                            {
                                _792 = 0u;
                            }
                            else
                            {
                                _792 = ((_766 & 72u) == 64u) ? 0u : 0u;
                            }
                            _793 = _792;
                        }
                        _794 = _793;
                    }
                    _795 = _794;
                }
                _796 = _795;
            }
            else
            {
                _796 = 0u;
            }
            _797 = _796;
            _798 = (_697 & 4294967288u) | ((_717 ? 1u : (_717 ? 2u : 3u)) & 7u);
        }
        else
        {
            _797 = 0u;
            _798 = _697;
        }
        float3 _1002 = 0.0f.xxx;
        float _1003 = 0.0f;
        float2 _1004 = 0.0f.xx;
        [branch]
        if (_666)
        {
            float3 _242[4] = _636;
            uint _802 = (_703 >> 14u) & 3u;
            float3 _849 = 0.0f.xxx;
            float3 _850 = 0.0f.xxx;
            float3 _851 = 0.0f.xxx;
            switch ((_703 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _825 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_242[_802], _289), clamp(_661, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _829 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _830 = _825.x;
                    float3 _834 = 1.0f.xxx + (_649.xyz * ((1.0f - _830) / _830));
                    _849 = _242[_802];
                    _850 = _642.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_829.x ? _834.x : 1.0f.xxx.x, _829.y ? _834.y : 1.0f.xxx.y, _829.z ? _834.z : 1.0f.xxx.z) * ((_649.xyz * _830) + (((1.0f.xxx * clamp(50.0f * max(_648.x, max(_648.y, _648.z)), 0.0f, 1.0f)) - _649.xyz) * _825.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _851 = _642.xyz;
                    break;
                }
                default:
                {
                    _849 = 0.0f.xxx;
                    _850 = 0.0f.xxx;
                    _851 = 0.0f.xxx;
                    break;
                }
            }
            float4 _855 = View_VolumetricLightmapBrickAmbientVector.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f);
            float _871 = _855.x;
            float4 _873 = (((View_VolumetricLightmapBrickSHCoefficients0.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f) * 2.0f) - 1.0f.xxxx) * _871) * float4(1.732051372528076171875f, 1.732051372528076171875f, 1.732051372528076171875f, 3.87297916412353515625f);
            float _874 = _855.y;
            float4 _876 = (((View_VolumetricLightmapBrickSHCoefficients2.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f) * 2.0f) - 1.0f.xxxx) * _874) * float4(1.732051372528076171875f, 1.732051372528076171875f, 1.732051372528076171875f, 3.87297916412353515625f);
            float _877 = _855.z;
            float4 _879 = (((View_VolumetricLightmapBrickSHCoefficients4.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f) * 2.0f) - 1.0f.xxxx) * _877) * float4(1.732051372528076171875f, 1.732051372528076171875f, 1.732051372528076171875f, 3.87297916412353515625f);
            float4 _896 = (((View_VolumetricLightmapBrickSHCoefficients1.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f) * 2.0f) - 1.0f.xxxx) * _871) * float4(3.87297916412353515625f, 4.472138881683349609375f, 3.87297916412353515625f, 3.87297916412353515625f);
            float4 _898 = (((View_VolumetricLightmapBrickSHCoefficients3.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f) * 2.0f) - 1.0f.xxxx) * _874) * float4(3.87297916412353515625f, 4.472138881683349609375f, 3.87297916412353515625f, 3.87297916412353515625f);
            float4 _900 = (((View_VolumetricLightmapBrickSHCoefficients5.SampleLevel(View_SharedBilinearClampedSampler, _515, 0.0f) * 2.0f) - 1.0f.xxxx) * _877) * float4(3.87297916412353515625f, 4.472138881683349609375f, 3.87297916412353515625f, 3.87297916412353515625f);
            float4 _933 = 0.0f.xxxx;
            _933.y = (-0.48860299587249755859375f) * _849.y;
            _933.z = 0.48860299587249755859375f * _849.z;
            _933.w = (-0.48860299587249755859375f) * _849.x;
            float3 _940 = _849 * _849;
            float4 _943 = 0.0f.xxxx;
            _943.x = (1.09254801273345947265625f * _849.x) * _849.y;
            _943.y = ((-1.09254801273345947265625f) * _849.y) * _849.z;
            _943.z = 0.3153919875621795654296875f * mad(3.0f, _940.z, -1.0f);
            _943.w = ((-1.09254801273345947265625f) * _849.x) * _849.z;
            _933.x = 0.886227548122406005859375f;
            float3 _959 = _933.yzw * 2.094395160675048828125f;
            float4 _960 = float4(_933.x, _959.x, _959.y, _959.z);
            float4 _961 = _943 * 0.785398185253143310546875f;
            float _962 = (_940.x - _940.y) * 0.4290426075458526611328125f;
            float3 _967 = 0.0f.xxx;
            _967.x = mad(_896.w, _962, dot(float4(_871, _873.xyz), _960) + dot(float4(_873.w, _896.xyz), _961));
            _967.y = mad(_898.w, _962, dot(float4(_874, _876.xyz), _960) + dot(float4(_876.w, _898.xyz), _961));
            _967.z = mad(_900.w, _962, dot(float4(_877, _879.xyz), _960) + dot(float4(_879.w, _900.xyz), _961));
            float3 _982 = (max(0.0f.xxx, _967) * 0.3183098733425140380859375f.xxx) * View_View_PrecomputedIndirectLightingColorScale;
            float2 _998 = 0.0f.xx;
            _998.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _998.y = dot(_982, float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f));
            _1002 = mad(_982 * _850, max(1.0f.xxx, ((((((_851 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_851 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_851 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _695);
            _1003 = 1.0f;
            _1004 = _998;
        }
        else
        {
            _1002 = _695;
            _1003 = 0.0f;
            _1004 = 0.0f.xx;
        }
        float2 _1007 = _1004 * (1.0f / max(1.0f, _1003));
        uint _1151 = 0u;
        uint _1152 = 0u;
        [branch]
        if (_666)
        {
            float _1026 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _1027 = _1026 * 0.0078740157186985015869140625f;
            float3 _1029 = float3(_1027, _1027, _1026 * 0.01587301678955554962158203125f);
            float3 _1030 = clamp(_642.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1031 = _1030.x;
            float _1040 = 0.0f;
            do
            {
                if (_1031 < 0.00313066993840038776397705078125f)
                {
                    _1040 = _1031 * 12.9200000762939453125f;
                    break;
                }
                _1040 = mad(pow(_1031, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1041 = _1030.y;
            float _1050 = 0.0f;
            do
            {
                if (_1041 < 0.00313066993840038776397705078125f)
                {
                    _1050 = _1041 * 12.9200000762939453125f;
                    break;
                }
                _1050 = mad(pow(_1041, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1051 = _1030.z;
            float _1060 = 0.0f;
            do
            {
                if (_1051 < 0.00313066993840038776397705078125f)
                {
                    _1060 = _1051 * 12.9200000762939453125f;
                    break;
                }
                _1060 = mad(pow(_1051, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1061 = float3(_1040, _1050, _1060);
            float3 _1067 = clamp(mad(_1029, float3(min((asuint(_1061) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1061), 0.0f.xxx, 1.0f.xxx);
            uint _1081 = ((uint(_1067.x * 127.0f) << 0u) | (uint(_1067.y * 127.0f) << 7u)) | (uint(_1067.z * 63.0f) << 14u);
            float3 _1086 = clamp(_649.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1087 = _1086.x;
            float _1096 = 0.0f;
            do
            {
                if (_1087 < 0.00313066993840038776397705078125f)
                {
                    _1096 = _1087 * 12.9200000762939453125f;
                    break;
                }
                _1096 = mad(pow(_1087, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1097 = _1086.y;
            float _1106 = 0.0f;
            do
            {
                if (_1097 < 0.00313066993840038776397705078125f)
                {
                    _1106 = _1097 * 12.9200000762939453125f;
                    break;
                }
                _1106 = mad(pow(_1097, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1107 = _1086.z;
            float _1116 = 0.0f;
            do
            {
                if (_1107 < 0.00313066993840038776397705078125f)
                {
                    _1116 = _1107 * 12.9200000762939453125f;
                    break;
                }
                _1116 = mad(pow(_1107, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1117 = float3(_1096, _1106, _1116);
            float3 _1123 = clamp(mad(_1029, float3(min((asuint(_1117) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1117), 0.0f.xxx, 1.0f.xxx);
            _1151 = (((uint(_1123.x * 127.0f) << 0u) | (uint(_1123.y * 127.0f) << 7u)) | (uint(_1123.z * 63.0f) << 14u)) | ((_1081 & 4095u) << 20u);
            _1152 = ((0u | ((((_798 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_1007.y * _1007.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_1081 >> 12u) & 255u) << 8u) | uint(clamp(_661, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1151 = 0u;
            _1152 = 0u;
        }
        float2 _1157 = _708.xy / dot(1.0f.xxx, abs(_708)).xx;
        float3 _1175 = 0.0f.xxx;
        if (_708.z <= 0.0f)
        {
            float2 _1166 = _1157.xy;
            bool2 _1167 = bool2(_1166.x >= 0.0f.xx.x, _1166.y >= 0.0f.xx.y);
            float2 _1173 = (1.0f.xx - abs(_1157.yx)) * float2(_1167.x ? 1.0f : (-1.0f), _1167.y ? 1.0f : (-1.0f));
            _1175 = float3(_1173.x, _1173.y, _708.z);
        }
        else
        {
            _1175 = float3(_1157.x, _1157.y, _708.z);
        }
        uint2 _1180 = uint2(clamp((_1175.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1192 = _797 & 3u;
        [branch]
        if (_1192 != 0u)
        {
            uint _1199 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1200 = _635.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1200, _635.y, _1199)] = _797;
            if ((_1192 == 2u) || (_1192 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1200, _635.y, _1199 + 1u)] = 0u;
            }
        }
        _1217 = (((_1180.x | (_1180.y << 11u)) << 10u) | (uint(clamp(_705 ? (_700 / _702) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _696;
        _1218 = _1151;
        _1219 = _1152;
        _1220 = lerp(0.0f.xxx, float3(_706.x ? _712.x : 0.0f.xxx.x, _706.y ? _712.y : 0.0f.xxx.y, _706.z ? _712.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_1002 + _611);
    }
    else
    {
        _1217 = 0u;
        _1218 = 0u;
        _1219 = 0u;
        _1220 = 0.0f.xxx;
    }
    float4 _1226 = float4(_1220 * 1.0f, 0.0f);
    float4 _1233 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1232 = _1226;
        _1232.w = 0.0f;
        _1233 = _1232;
    }
    else
    {
        _1233 = _1226;
    }
    float4 _1234 = 0.0f.xxxx;
    _1234.x = _528;
    _1234.y = 1.0f;
    _1234.z = 1.0f;
    _1234.w = 1.0f;
    float4 _1240 = _1233 * View_View_PreExposure;
    float3 _1242 = min(_1240.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1242.x, _1242.y, _1242.z, _1240.w);
    out_var_SV_Target1 = _1234;
    out_var_SV_Target2 = _1219;
    out_var_SV_Target3 = _1218;
    out_var_SV_Target4 = _632 ? 0u : 0u;
    out_var_SV_Target5 = _1217;
    gl_FragDepth = _309;
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
