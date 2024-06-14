#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float4 _218 = 0.0f.xxxx;
static float3 _219 = 0.0f.xxx;
static float _223 = 0.0f;
static float4 _224 = 0.0f.xxxx;
static float2 _225 = 0.0f.xx;

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
    float View_View_IndirectLightingCacheShowFlag : packoffset(c234.w);
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

cbuffer IndirectLightingCache
{
    float4 IndirectLightingCache_IndirectLightingCache_PointSkyBentNormal : packoffset(c4);
    float IndirectLightingCache_IndirectLightingCache_DirectionalLightShadowing : packoffset(c5);
    float4 IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[3] : packoffset(c6);
    float4 IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[3] : packoffset(c9);
    float4 IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2 : packoffset(c12);
};

Texture3D<uint4> View_VolumetricLightmapIndirectionTexture;
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
    float4 _269 = float4(_223, _223, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _273 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _277 = _273.xyz / _273.w.xxx;
    float3 _287 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _287 = -View_View_ViewForward;
    }
    else
    {
        _287 = normalize(-_277);
    }
    uint _288 = in_var_PRIMITIVE_ID * 41u;
    float4 _301 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _301.w = max(0.5f, 0.0f);
    float3 _302 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_288].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _303 = _269.z;
    float _304 = _269.w;
    float _307 = min(_303 / (_304 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _313 = (_277 - View_View_RelativePreViewTranslation) + ((-_287) * (mad(-_307, _304, _303) / _307));
    uint _336 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_288].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_288].x) & 256u) != 0u) ? 64u : 0u);
    float4 _473 = 0.0f.xxxx;
    float4 _474 = 0.0f.xxxx;
    uint _475 = 0u;
    float3 _476 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_288].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _351 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _355 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _351, 0.0f);
        float4 _358 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _351, 0.0f);
        float4 _361 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _351, 0.0f);
        float _362 = _355.w;
        float _363 = _358.w;
        float _364 = _361.w;
        float3 _365 = _355.xyz;
        float3 _368 = (_358.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _369 = _361.x;
        float _370 = _361.y;
        float _371 = _361.z;
        float3 _383 = 0.0f.xxx;
        float4 _470 = 0.0f.xxxx;
        float4 _471 = 0.0f.xxxx;
        uint _472 = 0u;
        do
        {
            if (any(bool3(_368.x != 0.0f.xxx.x, _368.y != 0.0f.xxx.y, _368.z != 0.0f.xxx.z)) || (_363 < 1.0f))
            {
                _383 = normalize((_302 * _363) + _368);
            }
            else
            {
                _383 = _302;
            }
            bool _387 = any(bool3(_365.x > 0.0f.xxx.x, _365.y > 0.0f.xxx.y, _365.z > 0.0f.xxx.z)) || (_362 < 1.0f);
            bool _394 = (((_369 > 0.0f) || (_370 > 0.0f)) || (_371 > 0.0f)) || (_364 < 1.0f);
            if ((!_387) && (!_394))
            {
                _470 = _301;
                _471 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _472 = 0u;
                break;
            }
            float _404 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _405 = _369.xxx;
            float4 _416 = 0.0f.xxxx;
            if (_387 || _394)
            {
                float3 _414 = (0.039999999105930328369140625f.xxx * _362) + lerp((0.07999999821186065673828125f * _370).xxx, _365, _405);
                _416 = float4(_414.x, _414.y, _414.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _416 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _423 = 0.0f.xxxx;
            if (_387)
            {
                float3 _421 = (_301.xyz * _362) + lerp(_365, 0.0f.xxx, _405);
                _423 = float4(_421.x, _421.y, _421.z, _301.w);
            }
            else
            {
                _423 = _301;
            }
            float4 _467 = 0.0f.xxxx;
            float4 _468 = 0.0f.xxxx;
            uint _469 = 0u;
            if (_394)
            {
                float _426 = mad(_404, _364, _369);
                float4 _459 = 0.0f.xxxx;
                float4 _460 = 0.0f.xxxx;
                if (_426 >= _404)
                {
                    float3 _453 = _423.xyz * (_426 - _404);
                    float3 _455 = _416.xyz + _453;
                    float3 _457 = _423.xyz - _453;
                    _459 = float4(_455.x, _455.y, _455.z, _416.w);
                    _460 = float4(_457.x, _457.y, _457.z, _423.w);
                }
                else
                {
                    float3 _445 = clamp(_416.xyz - (0.07999999821186065673828125f * clamp(min(_416.x, min(_416.y, _416.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_426 - _404));
                    float3 _447 = _423.xyz + _445;
                    float3 _449 = _416.xyz - _445;
                    _459 = float4(_449.x, _449.y, _449.z, _416.w);
                    _460 = float4(_447.x, _447.y, _447.z, _423.w);
                }
                float4 _463 = _460;
                _463.w = mad(_460.w, _364, _371);
                float4 _466 = _459;
                _466.w = _459.w * _364;
                _467 = _463;
                _468 = _466;
                _469 = 0u;
            }
            else
            {
                _467 = _423;
                _468 = _416;
                _469 = 0u;
            }
            _470 = _467;
            _471 = _468;
            _472 = _469;
            break;
        } while(false);
        _473 = _470;
        _474 = _471;
        _475 = _472;
        _476 = _383;
    }
    else
    {
        _473 = _301;
        _474 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _475 = 0u;
        _476 = _302;
    }
    bool _484 = View_View_IndirectLightingCacheShowFlag > 0.0f;
    float _490 = 0.0f;
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_288].x) & 2u) != 0u) && _484)
    {
        _490 = IndirectLightingCache_IndirectLightingCache_DirectionalLightShadowing;
    }
    else
    {
        _490 = 1.0f;
    }
    float _540 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_288].x) & 4u) != 0u)
    {
        float3 _508 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _313, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
        float4 _519 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_508.x), int(_508.y), int(_508.z), 0).xyz, 0)));
        _540 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, (((_519.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_508 / _519.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize, 0.0f).x;
    }
    else
    {
        _540 = _490;
    }
    float4 _541 = float4(_540, 1.0f, 1.0f, 1.0f);
    bool _543 = all(bool4(_541.x == 0.0f.xxxx.x, _541.y == 0.0f.xxxx.y, _541.z == 0.0f.xxxx.z, _541.w == 0.0f.xxxx.w));
    bool _545 = all(bool4(_541.x == 1.0f.xxxx.x, _541.y == 1.0f.xxxx.y, _541.z == 1.0f.xxxx.z, _541.w == 1.0f.xxxx.w));
    uint _564 = 0u;
    if ((!_543) && (!_545))
    {
        _564 = _336 | 8u;
    }
    else
    {
        uint _562 = 0u;
        if (_543)
        {
            _562 = (_336 | 0u) | 16u;
        }
        else
        {
            uint _559 = 0u;
            if (_545)
            {
                _559 = (_336 | 0u) | 0u;
            }
            else
            {
                _559 = _336;
            }
            _562 = _559;
        }
        _564 = _562;
    }
    float3 _623 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _595 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_288 + 1u].xyz) * 2097152.0f) + (_313 - Scene_GPUScene_GPUScenePrimitiveSceneData[_288 + 18u].xyz));
        float3 _596 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_288 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_288 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_288 + 25u].w) + 1.0f.xxx;
        float3 _622 = 0.0f.xxx;
        if (any(bool3(_595.x > _596.x, _595.y > _596.y, _595.z > _596.z)))
        {
            float3 _602 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _603 = _313 * 0.57700002193450927734375f.xxx;
            float3 _618 = frac(mad((_603.x + _603.y) + _603.z, 0.00200000009499490261077880859375f, frac(((_602.x + _602.y) + _602.z) * 4194.30419921875f))).xxx;
            _622 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_618.x > 0.5f.xxx.x, _618.y > 0.5f.xxx.y, _618.z > 0.5f.xxx.z)));
        }
        else
        {
            _622 = 0.0f.xxx;
        }
        _623 = _622;
    }
    else
    {
        _623 = 0.0f.xxx;
    }
    float4 _630 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _631 = _630.x;
    uint _633 = uint(mad(_307, 16777215.0f, 0.5f));
    uint _635 = uint(mad(_631, 16777215.0f, 0.5f));
    bool _644 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_633 == _635) || (_633 == (_635 - 1u))) : (_307 == _631);
    uint _1246 = 0u;
    uint _1247 = 0u;
    uint _1248 = 0u;
    float3 _1249 = 0.0f.xxx;
    if (_644)
    {
        uint2 _647 = uint2(gl_FragCoord.xy);
        float3 _648[4] = { normalize(_476), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _653 = mad(clamp(_473.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _654 = float4(_653.x, _653.y, _653.z, _473.w);
        float3 _660 = (clamp(_474.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _661 = float4(_660.x, _660.y, _660.z, _474.w);
        float _669 = clamp(max(View_View_MinRoughness, mad(_473.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _654.w = _669;
        float _673 = clamp(max(View_View_MinRoughness, mad(_669, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _654.w = _673;
        _661.w = clamp(_474.w, -1.0f, 1.0f);
        bool _678 = any(bool3(true, true, true));
        float3 _707 = 0.0f.xxx;
        uint _708 = 0u;
        uint _709 = 0u;
        bool _710 = false;
        float3 _711 = 0.0f.xxx;
        float _712 = 0.0f;
        float3 _713 = 0.0f.xxx;
        float _714 = 0.0f;
        if (_678)
        {
            float3 _700 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _700 = lerp(_654.xyz, _661.xyz, clamp((max(_660.x, max(_660.y, _660.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _700 = 0.0f.xxx;
                break;
            } while(false);
            float3 _237[4] = _648;
            _707 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _708 = 1u;
            _709 = (_564 | 0u) | 0u;
            _710 = (true && all(bool3(true, true, true))) && true;
            _711 = _700 * 1.0f;
            _712 = _673;
            _713 = _237[0u] * 1.0f;
            _714 = 1.0f;
        }
        else
        {
            _707 = 0.0f.xxx;
            _708 = 0u;
            _709 = _564;
            _710 = true;
            _711 = 0.0f.xxx;
            _712 = 0.0f;
            _713 = 0.0f.xxx;
            _714 = 0.0f;
        }
        uint _715 = _678 ? 2u : 0u;
        bool _717 = _714 > 0.0f;
        bool3 _718 = _717.xxx;
        float3 _719 = normalize(_713);
        float3 _720 = float3(_718.x ? _719.x : 0.0f.xxx.x, _718.y ? _719.y : 0.0f.xxx.y, _718.z ? _719.z : 0.0f.xxx.z);
        float3 _724 = _711 / _714.xxx;
        uint _809 = 0u;
        uint _810 = 0u;
        if (true)
        {
            bool _729 = _710 && (uint(_678) == 1u);
            uint _808 = 0u;
            if (_729)
            {
                uint _745 = 0u;
                if (((_715 >> 6u) & 1u) != 0u)
                {
                    _745 = ((_475 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _745 = 0u;
                }
                uint _754 = 0u;
                if ((((_715 >> 9u) & 1u) != 0u) && (_673 == 0.0f))
                {
                    _754 = _745 | 4u;
                }
                else
                {
                    _754 = _745;
                }
                uint _761 = 0u;
                if (((_715 >> 10u) & 1u) != 0u)
                {
                    _761 = _754 | 8u;
                }
                else
                {
                    _761 = _754;
                }
                uint _763 = (_715 >> 2u) & 7u;
                uint _768 = 0u;
                if (_763 == 4u)
                {
                    _768 = _761 | 16u;
                }
                else
                {
                    _768 = _761;
                }
                uint _773 = 0u;
                if (_763 == 1u)
                {
                    _773 = _768 | 32u;
                }
                else
                {
                    _773 = _768;
                }
                uint _778 = 0u;
                if (_763 == 3u)
                {
                    _778 = _773 | 64u;
                }
                else
                {
                    _778 = _773;
                }
                uint _779 = _778 & 2u;
                uint _807 = 0u;
                if ((_779 == 2u) || (_779 == 3u))
                {
                    _807 = 0u;
                }
                else
                {
                    uint _806 = 0u;
                    if ((_778 & 4u) == 4u)
                    {
                        _806 = 0u;
                    }
                    else
                    {
                        uint _805 = 0u;
                        if ((_778 & 40u) == 40u)
                        {
                            _805 = 0u;
                        }
                        else
                        {
                            uint _804 = 0u;
                            if ((_778 & 32u) == 32u)
                            {
                                _804 = 0u;
                            }
                            else
                            {
                                _804 = ((_778 & 72u) == 64u) ? 0u : 0u;
                            }
                            _805 = _804;
                        }
                        _806 = _805;
                    }
                    _807 = _806;
                }
                _808 = _807;
            }
            else
            {
                _808 = 0u;
            }
            _809 = _808;
            _810 = (_709 & 4294967288u) | ((_729 ? 1u : (_729 ? 2u : 3u)) & 7u);
        }
        else
        {
            _809 = 0u;
            _810 = _709;
        }
        float3 _1031 = 0.0f.xxx;
        float _1032 = 0.0f;
        float2 _1033 = 0.0f.xx;
        [branch]
        if (_678)
        {
            float3 _238[4] = _648;
            uint _814 = (_715 >> 14u) & 3u;
            float3 _861 = 0.0f.xxx;
            float3 _862 = 0.0f.xxx;
            float3 _863 = 0.0f.xxx;
            switch ((_715 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _837 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_238[_814], _287), clamp(_673, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _841 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _842 = _837.x;
                    float3 _846 = 1.0f.xxx + (_661.xyz * ((1.0f - _842) / _842));
                    _861 = _238[_814];
                    _862 = _654.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_841.x ? _846.x : 1.0f.xxx.x, _841.y ? _846.y : 1.0f.xxx.y, _841.z ? _846.z : 1.0f.xxx.z) * ((_661.xyz * _842) + (((1.0f.xxx * clamp(50.0f * max(_660.x, max(_660.y, _660.z)), 0.0f, 1.0f)) - _661.xyz) * _837.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _863 = _654.xyz;
                    break;
                }
                default:
                {
                    _861 = 0.0f.xxx;
                    _862 = 0.0f.xxx;
                    _863 = 0.0f.xxx;
                    break;
                }
            }
            float3 _932 = 0.0f.xxx;
            if (_484)
            {
                float4 _886 = 0.0f.xxxx;
                _886.y = (-0.48860299587249755859375f) * _861.y;
                _886.z = 0.48860299587249755859375f * _861.z;
                _886.w = (-0.48860299587249755859375f) * _861.x;
                float3 _893 = _861 * _861;
                float4 _896 = 0.0f.xxxx;
                _896.x = (1.09254801273345947265625f * _861.x) * _861.y;
                _896.y = ((-1.09254801273345947265625f) * _861.y) * _861.z;
                _896.z = 0.3153919875621795654296875f * mad(3.0f, _893.z, -1.0f);
                _896.w = ((-1.09254801273345947265625f) * _861.x) * _861.z;
                _886.x = 0.886227548122406005859375f;
                float3 _912 = _886.yzw * 2.094395160675048828125f;
                float4 _913 = float4(_886.x, _912.x, _912.y, _912.z);
                float4 _914 = _896 * 0.785398185253143310546875f;
                float _915 = (_893.x - _893.y) * 0.4290426075458526611328125f;
                float3 _920 = 0.0f.xxx;
                _920.x = mad(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2.x, _915, dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[0], _913) + dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[0], _914));
                _920.y = mad(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2.y, _915, dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[1], _913) + dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[1], _914));
                _920.z = mad(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2.z, _915, dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[2], _913) + dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[2], _914));
                _932 = max(0.0f.xxx, _920);
            }
            else
            {
                _932 = 0.0f.xxx;
            }
            float3 _1010 = 0.0f.xxx;
            if (OpaqueBasePass_OpaqueBasePass_Shared_UseBasePassSkylight > 0u)
            {
                float _962 = 0.0f;
                float _963 = 0.0f;
                float3 _964 = 0.0f.xxx;
                [branch]
                if (View_View_SkyLightApplyPrecomputedBentNormalShadowingFlag != 0.0f)
                {
                    float3 _952 = 0.0f.xxx;
                    float _953 = 0.0f;
                    if (_484)
                    {
                        _952 = IndirectLightingCache_IndirectLightingCache_PointSkyBentNormal.xyz;
                        _953 = IndirectLightingCache_IndirectLightingCache_PointSkyBentNormal.w;
                    }
                    else
                    {
                        _952 = _861;
                        _953 = 1.0f;
                    }
                    float _956 = mad(_953 - 1.0f, 1.0f - _953, 1.0f);
                    _962 = lerp(clamp(dot(_952, _861), 0.0f, 1.0f), 1.0f, _956);
                    _963 = _953;
                    _964 = lerp(_952, _861, _956.xxx);
                }
                else
                {
                    _962 = 1.0f;
                    _963 = 1.0f;
                    _964 = _861;
                }
                float4 _968 = float4(_964, 1.0f);
                float3 _972 = 0.0f.xxx;
                _972.x = dot(View_SkyIrradianceEnvironmentMap[0u], _968);
                _972.y = dot(View_SkyIrradianceEnvironmentMap[1u], _968);
                _972.z = dot(View_SkyIrradianceEnvironmentMap[2u], _968);
                float4 _983 = _968.xyzz * _968.yzzx;
                float3 _987 = 0.0f.xxx;
                _987.x = dot(View_SkyIrradianceEnvironmentMap[3u], _983);
                _987.y = dot(View_SkyIrradianceEnvironmentMap[4u], _983);
                _987.z = dot(View_SkyIrradianceEnvironmentMap[5u], _983);
                _1010 = (max(0.0f.xxx, (_972 + _987) + (View_SkyIrradianceEnvironmentMap[6u].xyz * mad(_964.x, _964.x, -(_964.y * _964.y)))) * View_View_SkyLightColor.xyz) * (_963 * _962);
            }
            else
            {
                _1010 = 0.0f.xxx;
            }
            float3 _1011 = mad(_932, View_View_PrecomputedIndirectLightingColorScale, _1010);
            float2 _1027 = 0.0f.xx;
            _1027.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _1027.y = dot(_1011, float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f));
            _1031 = mad(_1011 * _862, max(1.0f.xxx, ((((((_863 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_863 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_863 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _707);
            _1032 = 1.0f;
            _1033 = _1027;
        }
        else
        {
            _1031 = _707;
            _1032 = 0.0f;
            _1033 = 0.0f.xx;
        }
        float2 _1036 = _1033 * (1.0f / max(1.0f, _1032));
        uint _1180 = 0u;
        uint _1181 = 0u;
        [branch]
        if (_678)
        {
            float _1055 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _1056 = _1055 * 0.0078740157186985015869140625f;
            float3 _1058 = float3(_1056, _1056, _1055 * 0.01587301678955554962158203125f);
            float3 _1059 = clamp(_654.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1060 = _1059.x;
            float _1069 = 0.0f;
            do
            {
                if (_1060 < 0.00313066993840038776397705078125f)
                {
                    _1069 = _1060 * 12.9200000762939453125f;
                    break;
                }
                _1069 = mad(pow(_1060, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1070 = _1059.y;
            float _1079 = 0.0f;
            do
            {
                if (_1070 < 0.00313066993840038776397705078125f)
                {
                    _1079 = _1070 * 12.9200000762939453125f;
                    break;
                }
                _1079 = mad(pow(_1070, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1080 = _1059.z;
            float _1089 = 0.0f;
            do
            {
                if (_1080 < 0.00313066993840038776397705078125f)
                {
                    _1089 = _1080 * 12.9200000762939453125f;
                    break;
                }
                _1089 = mad(pow(_1080, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1090 = float3(_1069, _1079, _1089);
            float3 _1096 = clamp(mad(_1058, float3(min((asuint(_1090) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1090), 0.0f.xxx, 1.0f.xxx);
            uint _1110 = ((uint(_1096.x * 127.0f) << 0u) | (uint(_1096.y * 127.0f) << 7u)) | (uint(_1096.z * 63.0f) << 14u);
            float3 _1115 = clamp(_661.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1116 = _1115.x;
            float _1125 = 0.0f;
            do
            {
                if (_1116 < 0.00313066993840038776397705078125f)
                {
                    _1125 = _1116 * 12.9200000762939453125f;
                    break;
                }
                _1125 = mad(pow(_1116, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1126 = _1115.y;
            float _1135 = 0.0f;
            do
            {
                if (_1126 < 0.00313066993840038776397705078125f)
                {
                    _1135 = _1126 * 12.9200000762939453125f;
                    break;
                }
                _1135 = mad(pow(_1126, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1136 = _1115.z;
            float _1145 = 0.0f;
            do
            {
                if (_1136 < 0.00313066993840038776397705078125f)
                {
                    _1145 = _1136 * 12.9200000762939453125f;
                    break;
                }
                _1145 = mad(pow(_1136, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1146 = float3(_1125, _1135, _1145);
            float3 _1152 = clamp(mad(_1058, float3(min((asuint(_1146) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1146), 0.0f.xxx, 1.0f.xxx);
            _1180 = (((uint(_1152.x * 127.0f) << 0u) | (uint(_1152.y * 127.0f) << 7u)) | (uint(_1152.z * 63.0f) << 14u)) | ((_1110 & 4095u) << 20u);
            _1181 = ((0u | ((((_810 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_1036.y * _1036.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_1110 >> 12u) & 255u) << 8u) | uint(clamp(_673, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1180 = 0u;
            _1181 = 0u;
        }
        float2 _1186 = _720.xy / dot(1.0f.xxx, abs(_720)).xx;
        float3 _1204 = 0.0f.xxx;
        if (_720.z <= 0.0f)
        {
            float2 _1195 = _1186.xy;
            bool2 _1196 = bool2(_1195.x >= 0.0f.xx.x, _1195.y >= 0.0f.xx.y);
            float2 _1202 = (1.0f.xx - abs(_1186.yx)) * float2(_1196.x ? 1.0f : (-1.0f), _1196.y ? 1.0f : (-1.0f));
            _1204 = float3(_1202.x, _1202.y, _720.z);
        }
        else
        {
            _1204 = float3(_1186.x, _1186.y, _720.z);
        }
        uint2 _1209 = uint2(clamp((_1204.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1221 = _809 & 3u;
        [branch]
        if (_1221 != 0u)
        {
            uint _1228 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1229 = _647.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1229, _647.y, _1228)] = _809;
            if ((_1221 == 2u) || (_1221 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1229, _647.y, _1228 + 1u)] = 0u;
            }
        }
        _1246 = (((_1209.x | (_1209.y << 11u)) << 10u) | (uint(clamp(_717 ? (_712 / _714) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _708;
        _1247 = _1180;
        _1248 = _1181;
        _1249 = lerp(0.0f.xxx, float3(_718.x ? _724.x : 0.0f.xxx.x, _718.y ? _724.y : 0.0f.xxx.y, _718.z ? _724.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_1031 + _623);
    }
    else
    {
        _1246 = 0u;
        _1247 = 0u;
        _1248 = 0u;
        _1249 = 0.0f.xxx;
    }
    float4 _1255 = float4(_1249 * 1.0f, 0.0f);
    float4 _1262 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1261 = _1255;
        _1261.w = 0.0f;
        _1262 = _1261;
    }
    else
    {
        _1262 = _1255;
    }
    float4 _1263 = 0.0f.xxxx;
    _1263.x = _540;
    _1263.y = 1.0f;
    _1263.z = 1.0f;
    _1263.w = 1.0f;
    float4 _1269 = _1262 * View_View_PreExposure;
    float3 _1271 = min(_1269.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1271.x, _1271.y, _1271.z, _1269.w);
    out_var_SV_Target1 = _1263;
    out_var_SV_Target2 = _1248;
    out_var_SV_Target3 = _1247;
    out_var_SV_Target4 = _644 ? 0u : 0u;
    out_var_SV_Target5 = _1246;
    gl_FragDepth = _307;
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
