#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float3 _216 = 0.0f.xxx;
static float _220 = 0.0f;
static float4 _221 = 0.0f.xxxx;
static float2 _222 = 0.0f.xx;

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
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveAdd : packoffset(c0);
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveScale : packoffset(c1);
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMinUV : packoffset(c2);
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMaxUV : packoffset(c3);
    float4 IndirectLightingCache_IndirectLightingCache_PointSkyBentNormal : packoffset(c4);
    float IndirectLightingCache_IndirectLightingCache_DirectionalLightShadowing : packoffset(c5);
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
Texture3D<float4> IndirectLightingCache_IndirectLightingCacheTexture0;
Texture3D<float4> IndirectLightingCache_IndirectLightingCacheTexture1;
Texture3D<float4> IndirectLightingCache_IndirectLightingCacheTexture2;
SamplerState IndirectLightingCache_IndirectLightingCacheTextureSampler0;

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
    float4 _266 = float4(_220, _220, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _270 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _274 = _270.xyz / _270.w.xxx;
    float3 _284 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _284 = -View_View_ViewForward;
    }
    else
    {
        _284 = normalize(-_274);
    }
    uint _285 = in_var_PRIMITIVE_ID * 41u;
    float4 _298 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _298.w = max(0.5f, 0.0f);
    float3 _299 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_285].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _300 = _266.z;
    float _301 = _266.w;
    float _304 = min(_300 / (_301 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _310 = (_274 - View_View_RelativePreViewTranslation) + ((-_284) * (mad(-_304, _301, _300) / _304));
    uint _333 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_285].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_285].x) & 256u) != 0u) ? 64u : 0u);
    float4 _470 = 0.0f.xxxx;
    float4 _471 = 0.0f.xxxx;
    uint _472 = 0u;
    float3 _473 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_285].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _348 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _352 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _348, 0.0f);
        float4 _355 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _348, 0.0f);
        float4 _358 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _348, 0.0f);
        float _359 = _352.w;
        float _360 = _355.w;
        float _361 = _358.w;
        float3 _362 = _352.xyz;
        float3 _365 = (_355.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _366 = _358.x;
        float _367 = _358.y;
        float _368 = _358.z;
        float3 _380 = 0.0f.xxx;
        float4 _467 = 0.0f.xxxx;
        float4 _468 = 0.0f.xxxx;
        uint _469 = 0u;
        do
        {
            if (any(bool3(_365.x != 0.0f.xxx.x, _365.y != 0.0f.xxx.y, _365.z != 0.0f.xxx.z)) || (_360 < 1.0f))
            {
                _380 = normalize((_299 * _360) + _365);
            }
            else
            {
                _380 = _299;
            }
            bool _384 = any(bool3(_362.x > 0.0f.xxx.x, _362.y > 0.0f.xxx.y, _362.z > 0.0f.xxx.z)) || (_359 < 1.0f);
            bool _391 = (((_366 > 0.0f) || (_367 > 0.0f)) || (_368 > 0.0f)) || (_361 < 1.0f);
            if ((!_384) && (!_391))
            {
                _467 = _298;
                _468 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _469 = 0u;
                break;
            }
            float _401 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _402 = _366.xxx;
            float4 _413 = 0.0f.xxxx;
            if (_384 || _391)
            {
                float3 _411 = (0.039999999105930328369140625f.xxx * _359) + lerp((0.07999999821186065673828125f * _367).xxx, _362, _402);
                _413 = float4(_411.x, _411.y, _411.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _413 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _420 = 0.0f.xxxx;
            if (_384)
            {
                float3 _418 = (_298.xyz * _359) + lerp(_362, 0.0f.xxx, _402);
                _420 = float4(_418.x, _418.y, _418.z, _298.w);
            }
            else
            {
                _420 = _298;
            }
            float4 _464 = 0.0f.xxxx;
            float4 _465 = 0.0f.xxxx;
            uint _466 = 0u;
            if (_391)
            {
                float _423 = mad(_401, _361, _366);
                float4 _456 = 0.0f.xxxx;
                float4 _457 = 0.0f.xxxx;
                if (_423 >= _401)
                {
                    float3 _450 = _420.xyz * (_423 - _401);
                    float3 _452 = _413.xyz + _450;
                    float3 _454 = _420.xyz - _450;
                    _456 = float4(_452.x, _452.y, _452.z, _413.w);
                    _457 = float4(_454.x, _454.y, _454.z, _420.w);
                }
                else
                {
                    float3 _442 = clamp(_413.xyz - (0.07999999821186065673828125f * clamp(min(_413.x, min(_413.y, _413.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_423 - _401));
                    float3 _444 = _420.xyz + _442;
                    float3 _446 = _413.xyz - _442;
                    _456 = float4(_446.x, _446.y, _446.z, _413.w);
                    _457 = float4(_444.x, _444.y, _444.z, _420.w);
                }
                float4 _460 = _457;
                _460.w = mad(_457.w, _361, _368);
                float4 _463 = _456;
                _463.w = _456.w * _361;
                _464 = _460;
                _465 = _463;
                _466 = 0u;
            }
            else
            {
                _464 = _420;
                _465 = _413;
                _466 = 0u;
            }
            _467 = _464;
            _468 = _465;
            _469 = _466;
            break;
        } while(false);
        _470 = _467;
        _471 = _468;
        _472 = _469;
        _473 = _380;
    }
    else
    {
        _470 = _298;
        _471 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _472 = 0u;
        _473 = _299;
    }
    bool _481 = View_View_IndirectLightingCacheShowFlag > 0.0f;
    float _487 = 0.0f;
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_285].x) & 2u) != 0u) && _481)
    {
        _487 = IndirectLightingCache_IndirectLightingCache_DirectionalLightShadowing;
    }
    else
    {
        _487 = 1.0f;
    }
    float _537 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_285].x) & 4u) != 0u)
    {
        float3 _505 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _310, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
        float4 _516 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_505.x), int(_505.y), int(_505.z), 0).xyz, 0)));
        _537 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, (((_516.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_505 / _516.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize, 0.0f).x;
    }
    else
    {
        _537 = _487;
    }
    float4 _538 = float4(_537, 1.0f, 1.0f, 1.0f);
    bool _540 = all(bool4(_538.x == 0.0f.xxxx.x, _538.y == 0.0f.xxxx.y, _538.z == 0.0f.xxxx.z, _538.w == 0.0f.xxxx.w));
    bool _542 = all(bool4(_538.x == 1.0f.xxxx.x, _538.y == 1.0f.xxxx.y, _538.z == 1.0f.xxxx.z, _538.w == 1.0f.xxxx.w));
    uint _561 = 0u;
    if ((!_540) && (!_542))
    {
        _561 = _333 | 8u;
    }
    else
    {
        uint _559 = 0u;
        if (_540)
        {
            _559 = (_333 | 0u) | 16u;
        }
        else
        {
            uint _556 = 0u;
            if (_542)
            {
                _556 = (_333 | 0u) | 0u;
            }
            else
            {
                _556 = _333;
            }
            _559 = _556;
        }
        _561 = _559;
    }
    float3 _620 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _592 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_285 + 1u].xyz) * 2097152.0f) + (_310 - Scene_GPUScene_GPUScenePrimitiveSceneData[_285 + 18u].xyz));
        float3 _593 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_285 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_285 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_285 + 25u].w) + 1.0f.xxx;
        float3 _619 = 0.0f.xxx;
        if (any(bool3(_592.x > _593.x, _592.y > _593.y, _592.z > _593.z)))
        {
            float3 _599 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _600 = _310 * 0.57700002193450927734375f.xxx;
            float3 _615 = frac(mad((_600.x + _600.y) + _600.z, 0.00200000009499490261077880859375f, frac(((_599.x + _599.y) + _599.z) * 4194.30419921875f))).xxx;
            _619 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_615.x > 0.5f.xxx.x, _615.y > 0.5f.xxx.y, _615.z > 0.5f.xxx.z)));
        }
        else
        {
            _619 = 0.0f.xxx;
        }
        _620 = _619;
    }
    else
    {
        _620 = 0.0f.xxx;
    }
    float4 _627 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _628 = _627.x;
    uint _630 = uint(mad(_304, 16777215.0f, 0.5f));
    uint _632 = uint(mad(_628, 16777215.0f, 0.5f));
    bool _641 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_630 == _632) || (_630 == (_632 - 1u))) : (_304 == _628);
    uint _1236 = 0u;
    uint _1237 = 0u;
    uint _1238 = 0u;
    float3 _1239 = 0.0f.xxx;
    if (_641)
    {
        uint2 _644 = uint2(gl_FragCoord.xy);
        float3 _645[4] = { normalize(_473), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _650 = mad(clamp(_470.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _651 = float4(_650.x, _650.y, _650.z, _470.w);
        float3 _657 = (clamp(_471.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _658 = float4(_657.x, _657.y, _657.z, _471.w);
        float _666 = clamp(max(View_View_MinRoughness, mad(_470.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _651.w = _666;
        float _670 = clamp(max(View_View_MinRoughness, mad(_666, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _651.w = _670;
        _658.w = clamp(_471.w, -1.0f, 1.0f);
        bool _675 = any(bool3(true, true, true));
        float3 _704 = 0.0f.xxx;
        uint _705 = 0u;
        uint _706 = 0u;
        bool _707 = false;
        float3 _708 = 0.0f.xxx;
        float _709 = 0.0f;
        float3 _710 = 0.0f.xxx;
        float _711 = 0.0f;
        if (_675)
        {
            float3 _697 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _697 = lerp(_651.xyz, _658.xyz, clamp((max(_657.x, max(_657.y, _657.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _697 = 0.0f.xxx;
                break;
            } while(false);
            float3 _234[4] = _645;
            _704 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _705 = 1u;
            _706 = (_561 | 0u) | 0u;
            _707 = (true && all(bool3(true, true, true))) && true;
            _708 = _697 * 1.0f;
            _709 = _670;
            _710 = _234[0u] * 1.0f;
            _711 = 1.0f;
        }
        else
        {
            _704 = 0.0f.xxx;
            _705 = 0u;
            _706 = _561;
            _707 = true;
            _708 = 0.0f.xxx;
            _709 = 0.0f;
            _710 = 0.0f.xxx;
            _711 = 0.0f;
        }
        uint _712 = _675 ? 2u : 0u;
        bool _714 = _711 > 0.0f;
        bool3 _715 = _714.xxx;
        float3 _716 = normalize(_710);
        float3 _717 = float3(_715.x ? _716.x : 0.0f.xxx.x, _715.y ? _716.y : 0.0f.xxx.y, _715.z ? _716.z : 0.0f.xxx.z);
        float3 _721 = _708 / _711.xxx;
        uint _806 = 0u;
        uint _807 = 0u;
        if (true)
        {
            bool _726 = _707 && (uint(_675) == 1u);
            uint _805 = 0u;
            if (_726)
            {
                uint _742 = 0u;
                if (((_712 >> 6u) & 1u) != 0u)
                {
                    _742 = ((_472 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _742 = 0u;
                }
                uint _751 = 0u;
                if ((((_712 >> 9u) & 1u) != 0u) && (_670 == 0.0f))
                {
                    _751 = _742 | 4u;
                }
                else
                {
                    _751 = _742;
                }
                uint _758 = 0u;
                if (((_712 >> 10u) & 1u) != 0u)
                {
                    _758 = _751 | 8u;
                }
                else
                {
                    _758 = _751;
                }
                uint _760 = (_712 >> 2u) & 7u;
                uint _765 = 0u;
                if (_760 == 4u)
                {
                    _765 = _758 | 16u;
                }
                else
                {
                    _765 = _758;
                }
                uint _770 = 0u;
                if (_760 == 1u)
                {
                    _770 = _765 | 32u;
                }
                else
                {
                    _770 = _765;
                }
                uint _775 = 0u;
                if (_760 == 3u)
                {
                    _775 = _770 | 64u;
                }
                else
                {
                    _775 = _770;
                }
                uint _776 = _775 & 2u;
                uint _804 = 0u;
                if ((_776 == 2u) || (_776 == 3u))
                {
                    _804 = 0u;
                }
                else
                {
                    uint _803 = 0u;
                    if ((_775 & 4u) == 4u)
                    {
                        _803 = 0u;
                    }
                    else
                    {
                        uint _802 = 0u;
                        if ((_775 & 40u) == 40u)
                        {
                            _802 = 0u;
                        }
                        else
                        {
                            uint _801 = 0u;
                            if ((_775 & 32u) == 32u)
                            {
                                _801 = 0u;
                            }
                            else
                            {
                                _801 = ((_775 & 72u) == 64u) ? 0u : 0u;
                            }
                            _802 = _801;
                        }
                        _803 = _802;
                    }
                    _804 = _803;
                }
                _805 = _804;
            }
            else
            {
                _805 = 0u;
            }
            _806 = _805;
            _807 = (_706 & 4294967288u) | ((_726 ? 1u : (_726 ? 2u : 3u)) & 7u);
        }
        else
        {
            _806 = 0u;
            _807 = _706;
        }
        float3 _1021 = 0.0f.xxx;
        float _1022 = 0.0f;
        float2 _1023 = 0.0f.xx;
        [branch]
        if (_675)
        {
            float3 _235[4] = _645;
            uint _811 = (_712 >> 14u) & 3u;
            float3 _858 = 0.0f.xxx;
            float3 _859 = 0.0f.xxx;
            float3 _860 = 0.0f.xxx;
            switch ((_712 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _834 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_235[_811], _284), clamp(_670, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _838 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _839 = _834.x;
                    float3 _843 = 1.0f.xxx + (_658.xyz * ((1.0f - _839) / _839));
                    _858 = _235[_811];
                    _859 = _651.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_838.x ? _843.x : 1.0f.xxx.x, _838.y ? _843.y : 1.0f.xxx.y, _838.z ? _843.z : 1.0f.xxx.z) * ((_658.xyz * _839) + (((1.0f.xxx * clamp(50.0f * max(_657.x, max(_657.y, _657.z)), 0.0f, 1.0f)) - _658.xyz) * _834.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _860 = _651.xyz;
                    break;
                }
                default:
                {
                    _858 = 0.0f.xxx;
                    _859 = 0.0f.xxx;
                    _860 = 0.0f.xxx;
                    break;
                }
            }
            float3 _922 = 0.0f.xxx;
            if (_481)
            {
                float3 _874 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _310, IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveScale, IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveAdd), IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMinUV, IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMaxUV);
                float4 _878 = IndirectLightingCache_IndirectLightingCacheTexture0.Sample(IndirectLightingCache_IndirectLightingCacheTextureSampler0, _874);
                float4 _882 = IndirectLightingCache_IndirectLightingCacheTexture1.Sample(View_SharedBilinearClampedSampler, _874);
                float4 _885 = IndirectLightingCache_IndirectLightingCacheTexture2.Sample(View_SharedBilinearClampedSampler, _874);
                float4 _903 = 0.0f.xxxx;
                _903.y = (-0.48860299587249755859375f) * _858.y;
                _903.z = 0.48860299587249755859375f * _858.z;
                _903.w = (-0.48860299587249755859375f) * _858.x;
                _903.x = 0.886227548122406005859375f;
                float3 _912 = _903.yzw * 2.094395160675048828125f;
                float4 _913 = float4(_903.x, _912.x, _912.y, _912.z);
                float3 _915 = 0.0f.xxx;
                _915.x = dot(float4(_878.x, _882.x, _885.x, _878.w), _913);
                _915.y = dot(float4(_878.y, _882.y, _885.y, _882.w), _913);
                _915.z = dot(float4(_878.z, _882.z, _885.zw), _913);
                _922 = max(0.0f.xxx, _915) * 0.3183098733425140380859375f.xxx;
            }
            else
            {
                _922 = 0.0f.xxx;
            }
            float3 _1000 = 0.0f.xxx;
            if (OpaqueBasePass_OpaqueBasePass_Shared_UseBasePassSkylight > 0u)
            {
                float _952 = 0.0f;
                float _953 = 0.0f;
                float3 _954 = 0.0f.xxx;
                [branch]
                if (View_View_SkyLightApplyPrecomputedBentNormalShadowingFlag != 0.0f)
                {
                    float3 _942 = 0.0f.xxx;
                    float _943 = 0.0f;
                    if (_481)
                    {
                        _942 = IndirectLightingCache_IndirectLightingCache_PointSkyBentNormal.xyz;
                        _943 = IndirectLightingCache_IndirectLightingCache_PointSkyBentNormal.w;
                    }
                    else
                    {
                        _942 = _858;
                        _943 = 1.0f;
                    }
                    float _946 = mad(_943 - 1.0f, 1.0f - _943, 1.0f);
                    _952 = lerp(clamp(dot(_942, _858), 0.0f, 1.0f), 1.0f, _946);
                    _953 = _943;
                    _954 = lerp(_942, _858, _946.xxx);
                }
                else
                {
                    _952 = 1.0f;
                    _953 = 1.0f;
                    _954 = _858;
                }
                float4 _958 = float4(_954, 1.0f);
                float3 _962 = 0.0f.xxx;
                _962.x = dot(View_SkyIrradianceEnvironmentMap[0u], _958);
                _962.y = dot(View_SkyIrradianceEnvironmentMap[1u], _958);
                _962.z = dot(View_SkyIrradianceEnvironmentMap[2u], _958);
                float4 _973 = _958.xyzz * _958.yzzx;
                float3 _977 = 0.0f.xxx;
                _977.x = dot(View_SkyIrradianceEnvironmentMap[3u], _973);
                _977.y = dot(View_SkyIrradianceEnvironmentMap[4u], _973);
                _977.z = dot(View_SkyIrradianceEnvironmentMap[5u], _973);
                _1000 = (max(0.0f.xxx, (_962 + _977) + (View_SkyIrradianceEnvironmentMap[6u].xyz * mad(_954.x, _954.x, -(_954.y * _954.y)))) * View_View_SkyLightColor.xyz) * (_953 * _952);
            }
            else
            {
                _1000 = 0.0f.xxx;
            }
            float3 _1001 = mad(_922, View_View_PrecomputedIndirectLightingColorScale, _1000);
            float2 _1017 = 0.0f.xx;
            _1017.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _1017.y = dot(_1001, float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f));
            _1021 = mad(_1001 * _859, max(1.0f.xxx, ((((((_860 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_860 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_860 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _704);
            _1022 = 1.0f;
            _1023 = _1017;
        }
        else
        {
            _1021 = _704;
            _1022 = 0.0f;
            _1023 = 0.0f.xx;
        }
        float2 _1026 = _1023 * (1.0f / max(1.0f, _1022));
        uint _1170 = 0u;
        uint _1171 = 0u;
        [branch]
        if (_675)
        {
            float _1045 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _1046 = _1045 * 0.0078740157186985015869140625f;
            float3 _1048 = float3(_1046, _1046, _1045 * 0.01587301678955554962158203125f);
            float3 _1049 = clamp(_651.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1050 = _1049.x;
            float _1059 = 0.0f;
            do
            {
                if (_1050 < 0.00313066993840038776397705078125f)
                {
                    _1059 = _1050 * 12.9200000762939453125f;
                    break;
                }
                _1059 = mad(pow(_1050, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1060 = _1049.y;
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
            float _1070 = _1049.z;
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
            float3 _1080 = float3(_1059, _1069, _1079);
            float3 _1086 = clamp(mad(_1048, float3(min((asuint(_1080) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1080), 0.0f.xxx, 1.0f.xxx);
            uint _1100 = ((uint(_1086.x * 127.0f) << 0u) | (uint(_1086.y * 127.0f) << 7u)) | (uint(_1086.z * 63.0f) << 14u);
            float3 _1105 = clamp(_658.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1106 = _1105.x;
            float _1115 = 0.0f;
            do
            {
                if (_1106 < 0.00313066993840038776397705078125f)
                {
                    _1115 = _1106 * 12.9200000762939453125f;
                    break;
                }
                _1115 = mad(pow(_1106, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1116 = _1105.y;
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
            float _1126 = _1105.z;
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
            float3 _1136 = float3(_1115, _1125, _1135);
            float3 _1142 = clamp(mad(_1048, float3(min((asuint(_1136) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1136), 0.0f.xxx, 1.0f.xxx);
            _1170 = (((uint(_1142.x * 127.0f) << 0u) | (uint(_1142.y * 127.0f) << 7u)) | (uint(_1142.z * 63.0f) << 14u)) | ((_1100 & 4095u) << 20u);
            _1171 = ((0u | ((((_807 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_1026.y * _1026.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_1100 >> 12u) & 255u) << 8u) | uint(clamp(_670, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1170 = 0u;
            _1171 = 0u;
        }
        float2 _1176 = _717.xy / dot(1.0f.xxx, abs(_717)).xx;
        float3 _1194 = 0.0f.xxx;
        if (_717.z <= 0.0f)
        {
            float2 _1185 = _1176.xy;
            bool2 _1186 = bool2(_1185.x >= 0.0f.xx.x, _1185.y >= 0.0f.xx.y);
            float2 _1192 = (1.0f.xx - abs(_1176.yx)) * float2(_1186.x ? 1.0f : (-1.0f), _1186.y ? 1.0f : (-1.0f));
            _1194 = float3(_1192.x, _1192.y, _717.z);
        }
        else
        {
            _1194 = float3(_1176.x, _1176.y, _717.z);
        }
        uint2 _1199 = uint2(clamp((_1194.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1211 = _806 & 3u;
        [branch]
        if (_1211 != 0u)
        {
            uint _1218 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1219 = _644.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1219, _644.y, _1218)] = _806;
            if ((_1211 == 2u) || (_1211 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1219, _644.y, _1218 + 1u)] = 0u;
            }
        }
        _1236 = (((_1199.x | (_1199.y << 11u)) << 10u) | (uint(clamp(_714 ? (_709 / _711) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _705;
        _1237 = _1170;
        _1238 = _1171;
        _1239 = lerp(0.0f.xxx, float3(_715.x ? _721.x : 0.0f.xxx.x, _715.y ? _721.y : 0.0f.xxx.y, _715.z ? _721.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_1021 + _620);
    }
    else
    {
        _1236 = 0u;
        _1237 = 0u;
        _1238 = 0u;
        _1239 = 0.0f.xxx;
    }
    float4 _1245 = float4(_1239 * 1.0f, 0.0f);
    float4 _1252 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1251 = _1245;
        _1251.w = 0.0f;
        _1252 = _1251;
    }
    else
    {
        _1252 = _1245;
    }
    float4 _1253 = 0.0f.xxxx;
    _1253.x = _537;
    _1253.y = 1.0f;
    _1253.z = 1.0f;
    _1253.w = 1.0f;
    float4 _1259 = _1252 * View_View_PreExposure;
    float3 _1261 = min(_1259.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1261.x, _1261.y, _1261.z, _1259.w);
    out_var_SV_Target1 = _1253;
    out_var_SV_Target2 = _1238;
    out_var_SV_Target3 = _1237;
    out_var_SV_Target4 = _641 ? 0u : 0u;
    out_var_SV_Target5 = _1236;
    gl_FragDepth = _304;
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
