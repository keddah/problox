#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float4 _216 = 0.0f.xxxx;
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

StructuredBuffer<float4> Scene_GPUScene_GPUScenePrimitiveSceneData;
cbuffer OpaqueBasePass
{
    int OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT : packoffset(c142.y);
    int OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil : packoffset(c151);
};

cbuffer IndirectLightingCache
{
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
    float4 _262 = float4(_220, _220, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _266 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _270 = _266.xyz / _266.w.xxx;
    float3 _280 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _280 = -View_View_ViewForward;
    }
    else
    {
        _280 = normalize(-_270);
    }
    uint _281 = in_var_PRIMITIVE_ID * 41u;
    float4 _294 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _294.w = max(0.5f, 0.0f);
    float3 _295 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_281].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _296 = _262.z;
    float _297 = _262.w;
    float _300 = min(_296 / (_297 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _306 = (_270 - View_View_RelativePreViewTranslation) + ((-_280) * (mad(-_300, _297, _296) / _300));
    uint _329 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_281].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_281].x) & 256u) != 0u) ? 64u : 0u);
    float4 _466 = 0.0f.xxxx;
    float4 _467 = 0.0f.xxxx;
    uint _468 = 0u;
    float3 _469 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_281].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _344 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _348 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _344, 0.0f);
        float4 _351 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _344, 0.0f);
        float4 _354 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _344, 0.0f);
        float _355 = _348.w;
        float _356 = _351.w;
        float _357 = _354.w;
        float3 _358 = _348.xyz;
        float3 _361 = (_351.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _362 = _354.x;
        float _363 = _354.y;
        float _364 = _354.z;
        float3 _376 = 0.0f.xxx;
        float4 _463 = 0.0f.xxxx;
        float4 _464 = 0.0f.xxxx;
        uint _465 = 0u;
        do
        {
            if (any(bool3(_361.x != 0.0f.xxx.x, _361.y != 0.0f.xxx.y, _361.z != 0.0f.xxx.z)) || (_356 < 1.0f))
            {
                _376 = normalize((_295 * _356) + _361);
            }
            else
            {
                _376 = _295;
            }
            bool _380 = any(bool3(_358.x > 0.0f.xxx.x, _358.y > 0.0f.xxx.y, _358.z > 0.0f.xxx.z)) || (_355 < 1.0f);
            bool _387 = (((_362 > 0.0f) || (_363 > 0.0f)) || (_364 > 0.0f)) || (_357 < 1.0f);
            if ((!_380) && (!_387))
            {
                _463 = _294;
                _464 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _465 = 0u;
                break;
            }
            float _397 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _398 = _362.xxx;
            float4 _409 = 0.0f.xxxx;
            if (_380 || _387)
            {
                float3 _407 = (0.039999999105930328369140625f.xxx * _355) + lerp((0.07999999821186065673828125f * _363).xxx, _358, _398);
                _409 = float4(_407.x, _407.y, _407.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _409 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _416 = 0.0f.xxxx;
            if (_380)
            {
                float3 _414 = (_294.xyz * _355) + lerp(_358, 0.0f.xxx, _398);
                _416 = float4(_414.x, _414.y, _414.z, _294.w);
            }
            else
            {
                _416 = _294;
            }
            float4 _460 = 0.0f.xxxx;
            float4 _461 = 0.0f.xxxx;
            uint _462 = 0u;
            if (_387)
            {
                float _419 = mad(_397, _357, _362);
                float4 _452 = 0.0f.xxxx;
                float4 _453 = 0.0f.xxxx;
                if (_419 >= _397)
                {
                    float3 _446 = _416.xyz * (_419 - _397);
                    float3 _448 = _409.xyz + _446;
                    float3 _450 = _416.xyz - _446;
                    _452 = float4(_448.x, _448.y, _448.z, _409.w);
                    _453 = float4(_450.x, _450.y, _450.z, _416.w);
                }
                else
                {
                    float3 _438 = clamp(_409.xyz - (0.07999999821186065673828125f * clamp(min(_409.x, min(_409.y, _409.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_419 - _397));
                    float3 _440 = _416.xyz + _438;
                    float3 _442 = _409.xyz - _438;
                    _452 = float4(_442.x, _442.y, _442.z, _409.w);
                    _453 = float4(_440.x, _440.y, _440.z, _416.w);
                }
                float4 _456 = _453;
                _456.w = mad(_453.w, _357, _364);
                float4 _459 = _452;
                _459.w = _452.w * _357;
                _460 = _456;
                _461 = _459;
                _462 = 0u;
            }
            else
            {
                _460 = _416;
                _461 = _409;
                _462 = 0u;
            }
            _463 = _460;
            _464 = _461;
            _465 = _462;
            break;
        } while(false);
        _466 = _463;
        _467 = _464;
        _468 = _465;
        _469 = _376;
    }
    else
    {
        _466 = _294;
        _467 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _468 = 0u;
        _469 = _295;
    }
    bool _477 = View_View_IndirectLightingCacheShowFlag > 0.0f;
    float _483 = 0.0f;
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_281].x) & 2u) != 0u) && _477)
    {
        _483 = IndirectLightingCache_IndirectLightingCache_DirectionalLightShadowing;
    }
    else
    {
        _483 = 1.0f;
    }
    float _533 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_281].x) & 4u) != 0u)
    {
        float3 _501 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _306, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
        float4 _512 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_501.x), int(_501.y), int(_501.z), 0).xyz, 0)));
        _533 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, (((_512.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_501 / _512.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize, 0.0f).x;
    }
    else
    {
        _533 = _483;
    }
    float4 _534 = float4(_533, 1.0f, 1.0f, 1.0f);
    bool _536 = all(bool4(_534.x == 0.0f.xxxx.x, _534.y == 0.0f.xxxx.y, _534.z == 0.0f.xxxx.z, _534.w == 0.0f.xxxx.w));
    bool _538 = all(bool4(_534.x == 1.0f.xxxx.x, _534.y == 1.0f.xxxx.y, _534.z == 1.0f.xxxx.z, _534.w == 1.0f.xxxx.w));
    uint _557 = 0u;
    if ((!_536) && (!_538))
    {
        _557 = _329 | 8u;
    }
    else
    {
        uint _555 = 0u;
        if (_536)
        {
            _555 = (_329 | 0u) | 16u;
        }
        else
        {
            uint _552 = 0u;
            if (_538)
            {
                _552 = (_329 | 0u) | 0u;
            }
            else
            {
                _552 = _329;
            }
            _555 = _552;
        }
        _557 = _555;
    }
    float3 _616 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _588 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_281 + 1u].xyz) * 2097152.0f) + (_306 - Scene_GPUScene_GPUScenePrimitiveSceneData[_281 + 18u].xyz));
        float3 _589 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_281 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_281 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_281 + 25u].w) + 1.0f.xxx;
        float3 _615 = 0.0f.xxx;
        if (any(bool3(_588.x > _589.x, _588.y > _589.y, _588.z > _589.z)))
        {
            float3 _595 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _596 = _306 * 0.57700002193450927734375f.xxx;
            float3 _611 = frac(mad((_596.x + _596.y) + _596.z, 0.00200000009499490261077880859375f, frac(((_595.x + _595.y) + _595.z) * 4194.30419921875f))).xxx;
            _615 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_611.x > 0.5f.xxx.x, _611.y > 0.5f.xxx.y, _611.z > 0.5f.xxx.z)));
        }
        else
        {
            _615 = 0.0f.xxx;
        }
        _616 = _615;
    }
    else
    {
        _616 = 0.0f.xxx;
    }
    float4 _623 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _624 = _623.x;
    uint _626 = uint(mad(_300, 16777215.0f, 0.5f));
    uint _628 = uint(mad(_624, 16777215.0f, 0.5f));
    bool _637 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_626 == _628) || (_626 == (_628 - 1u))) : (_300 == _624);
    uint _1163 = 0u;
    uint _1164 = 0u;
    uint _1165 = 0u;
    float3 _1166 = 0.0f.xxx;
    if (_637)
    {
        uint2 _640 = uint2(gl_FragCoord.xy);
        float3 _641[4] = { normalize(_469), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _646 = mad(clamp(_466.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _647 = float4(_646.x, _646.y, _646.z, _466.w);
        float3 _653 = (clamp(_467.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _654 = float4(_653.x, _653.y, _653.z, _467.w);
        float _662 = clamp(max(View_View_MinRoughness, mad(_466.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _647.w = _662;
        float _666 = clamp(max(View_View_MinRoughness, mad(_662, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _647.w = _666;
        _654.w = clamp(_467.w, -1.0f, 1.0f);
        bool _671 = any(bool3(true, true, true));
        float3 _700 = 0.0f.xxx;
        uint _701 = 0u;
        uint _702 = 0u;
        bool _703 = false;
        float3 _704 = 0.0f.xxx;
        float _705 = 0.0f;
        float3 _706 = 0.0f.xxx;
        float _707 = 0.0f;
        if (_671)
        {
            float3 _693 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _693 = lerp(_647.xyz, _654.xyz, clamp((max(_653.x, max(_653.y, _653.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _693 = 0.0f.xxx;
                break;
            } while(false);
            float3 _232[4] = _641;
            _700 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _701 = 1u;
            _702 = (_557 | 0u) | 0u;
            _703 = (true && all(bool3(true, true, true))) && true;
            _704 = _693 * 1.0f;
            _705 = _666;
            _706 = _232[0u] * 1.0f;
            _707 = 1.0f;
        }
        else
        {
            _700 = 0.0f.xxx;
            _701 = 0u;
            _702 = _557;
            _703 = true;
            _704 = 0.0f.xxx;
            _705 = 0.0f;
            _706 = 0.0f.xxx;
            _707 = 0.0f;
        }
        uint _708 = _671 ? 2u : 0u;
        bool _710 = _707 > 0.0f;
        bool3 _711 = _710.xxx;
        float3 _712 = normalize(_706);
        float3 _713 = float3(_711.x ? _712.x : 0.0f.xxx.x, _711.y ? _712.y : 0.0f.xxx.y, _711.z ? _712.z : 0.0f.xxx.z);
        float3 _717 = _704 / _707.xxx;
        uint _802 = 0u;
        uint _803 = 0u;
        if (true)
        {
            bool _722 = _703 && (uint(_671) == 1u);
            uint _801 = 0u;
            if (_722)
            {
                uint _738 = 0u;
                if (((_708 >> 6u) & 1u) != 0u)
                {
                    _738 = ((_468 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _738 = 0u;
                }
                uint _747 = 0u;
                if ((((_708 >> 9u) & 1u) != 0u) && (_666 == 0.0f))
                {
                    _747 = _738 | 4u;
                }
                else
                {
                    _747 = _738;
                }
                uint _754 = 0u;
                if (((_708 >> 10u) & 1u) != 0u)
                {
                    _754 = _747 | 8u;
                }
                else
                {
                    _754 = _747;
                }
                uint _756 = (_708 >> 2u) & 7u;
                uint _761 = 0u;
                if (_756 == 4u)
                {
                    _761 = _754 | 16u;
                }
                else
                {
                    _761 = _754;
                }
                uint _766 = 0u;
                if (_756 == 1u)
                {
                    _766 = _761 | 32u;
                }
                else
                {
                    _766 = _761;
                }
                uint _771 = 0u;
                if (_756 == 3u)
                {
                    _771 = _766 | 64u;
                }
                else
                {
                    _771 = _766;
                }
                uint _772 = _771 & 2u;
                uint _800 = 0u;
                if ((_772 == 2u) || (_772 == 3u))
                {
                    _800 = 0u;
                }
                else
                {
                    uint _799 = 0u;
                    if ((_771 & 4u) == 4u)
                    {
                        _799 = 0u;
                    }
                    else
                    {
                        uint _798 = 0u;
                        if ((_771 & 40u) == 40u)
                        {
                            _798 = 0u;
                        }
                        else
                        {
                            uint _797 = 0u;
                            if ((_771 & 32u) == 32u)
                            {
                                _797 = 0u;
                            }
                            else
                            {
                                _797 = ((_771 & 72u) == 64u) ? 0u : 0u;
                            }
                            _798 = _797;
                        }
                        _799 = _798;
                    }
                    _800 = _799;
                }
                _801 = _800;
            }
            else
            {
                _801 = 0u;
            }
            _802 = _801;
            _803 = (_702 & 4294967288u) | ((_722 ? 1u : (_722 ? 2u : 3u)) & 7u);
        }
        else
        {
            _802 = 0u;
            _803 = _702;
        }
        float3 _948 = 0.0f.xxx;
        float _949 = 0.0f;
        float2 _950 = 0.0f.xx;
        [branch]
        if (_671)
        {
            float3 _233[4] = _641;
            uint _807 = (_708 >> 14u) & 3u;
            float3 _854 = 0.0f.xxx;
            float3 _855 = 0.0f.xxx;
            float3 _856 = 0.0f.xxx;
            switch ((_708 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _830 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_233[_807], _280), clamp(_666, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _834 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _835 = _830.x;
                    float3 _839 = 1.0f.xxx + (_654.xyz * ((1.0f - _835) / _835));
                    _854 = _233[_807];
                    _855 = _647.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_834.x ? _839.x : 1.0f.xxx.x, _834.y ? _839.y : 1.0f.xxx.y, _834.z ? _839.z : 1.0f.xxx.z) * ((_654.xyz * _835) + (((1.0f.xxx * clamp(50.0f * max(_653.x, max(_653.y, _653.z)), 0.0f, 1.0f)) - _654.xyz) * _830.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _856 = _647.xyz;
                    break;
                }
                default:
                {
                    _854 = 0.0f.xxx;
                    _855 = 0.0f.xxx;
                    _856 = 0.0f.xxx;
                    break;
                }
            }
            float3 _925 = 0.0f.xxx;
            if (_477)
            {
                float4 _879 = 0.0f.xxxx;
                _879.y = (-0.48860299587249755859375f) * _854.y;
                _879.z = 0.48860299587249755859375f * _854.z;
                _879.w = (-0.48860299587249755859375f) * _854.x;
                float3 _886 = _854 * _854;
                float4 _889 = 0.0f.xxxx;
                _889.x = (1.09254801273345947265625f * _854.x) * _854.y;
                _889.y = ((-1.09254801273345947265625f) * _854.y) * _854.z;
                _889.z = 0.3153919875621795654296875f * mad(3.0f, _886.z, -1.0f);
                _889.w = ((-1.09254801273345947265625f) * _854.x) * _854.z;
                _879.x = 0.886227548122406005859375f;
                float3 _905 = _879.yzw * 2.094395160675048828125f;
                float4 _906 = float4(_879.x, _905.x, _905.y, _905.z);
                float4 _907 = _889 * 0.785398185253143310546875f;
                float _908 = (_886.x - _886.y) * 0.4290426075458526611328125f;
                float3 _913 = 0.0f.xxx;
                _913.x = mad(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2.x, _908, dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[0], _906) + dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[0], _907));
                _913.y = mad(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2.y, _908, dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[1], _906) + dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[1], _907));
                _913.z = mad(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients2.z, _908, dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients0[2], _906) + dot(IndirectLightingCache_IndirectLightingCache_IndirectLightingSHCoefficients1[2], _907));
                _925 = max(0.0f.xxx, _913);
            }
            else
            {
                _925 = 0.0f.xxx;
            }
            float3 _928 = _925 * View_View_PrecomputedIndirectLightingColorScale;
            float2 _944 = 0.0f.xx;
            _944.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _944.y = dot(_928, float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f));
            _948 = mad(_928 * _855, max(1.0f.xxx, ((((((_856 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_856 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_856 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _700);
            _949 = 1.0f;
            _950 = _944;
        }
        else
        {
            _948 = _700;
            _949 = 0.0f;
            _950 = 0.0f.xx;
        }
        float2 _953 = _950 * (1.0f / max(1.0f, _949));
        uint _1097 = 0u;
        uint _1098 = 0u;
        [branch]
        if (_671)
        {
            float _972 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _973 = _972 * 0.0078740157186985015869140625f;
            float3 _975 = float3(_973, _973, _972 * 0.01587301678955554962158203125f);
            float3 _976 = clamp(_647.xyz, 0.0f.xxx, 1.0f.xxx);
            float _977 = _976.x;
            float _986 = 0.0f;
            do
            {
                if (_977 < 0.00313066993840038776397705078125f)
                {
                    _986 = _977 * 12.9200000762939453125f;
                    break;
                }
                _986 = mad(pow(_977, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _987 = _976.y;
            float _996 = 0.0f;
            do
            {
                if (_987 < 0.00313066993840038776397705078125f)
                {
                    _996 = _987 * 12.9200000762939453125f;
                    break;
                }
                _996 = mad(pow(_987, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _997 = _976.z;
            float _1006 = 0.0f;
            do
            {
                if (_997 < 0.00313066993840038776397705078125f)
                {
                    _1006 = _997 * 12.9200000762939453125f;
                    break;
                }
                _1006 = mad(pow(_997, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1007 = float3(_986, _996, _1006);
            float3 _1013 = clamp(mad(_975, float3(min((asuint(_1007) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1007), 0.0f.xxx, 1.0f.xxx);
            uint _1027 = ((uint(_1013.x * 127.0f) << 0u) | (uint(_1013.y * 127.0f) << 7u)) | (uint(_1013.z * 63.0f) << 14u);
            float3 _1032 = clamp(_654.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1033 = _1032.x;
            float _1042 = 0.0f;
            do
            {
                if (_1033 < 0.00313066993840038776397705078125f)
                {
                    _1042 = _1033 * 12.9200000762939453125f;
                    break;
                }
                _1042 = mad(pow(_1033, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1043 = _1032.y;
            float _1052 = 0.0f;
            do
            {
                if (_1043 < 0.00313066993840038776397705078125f)
                {
                    _1052 = _1043 * 12.9200000762939453125f;
                    break;
                }
                _1052 = mad(pow(_1043, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1053 = _1032.z;
            float _1062 = 0.0f;
            do
            {
                if (_1053 < 0.00313066993840038776397705078125f)
                {
                    _1062 = _1053 * 12.9200000762939453125f;
                    break;
                }
                _1062 = mad(pow(_1053, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1063 = float3(_1042, _1052, _1062);
            float3 _1069 = clamp(mad(_975, float3(min((asuint(_1063) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1063), 0.0f.xxx, 1.0f.xxx);
            _1097 = (((uint(_1069.x * 127.0f) << 0u) | (uint(_1069.y * 127.0f) << 7u)) | (uint(_1069.z * 63.0f) << 14u)) | ((_1027 & 4095u) << 20u);
            _1098 = ((0u | ((((_803 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_953.y * _953.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_1027 >> 12u) & 255u) << 8u) | uint(clamp(_666, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1097 = 0u;
            _1098 = 0u;
        }
        float2 _1103 = _713.xy / dot(1.0f.xxx, abs(_713)).xx;
        float3 _1121 = 0.0f.xxx;
        if (_713.z <= 0.0f)
        {
            float2 _1112 = _1103.xy;
            bool2 _1113 = bool2(_1112.x >= 0.0f.xx.x, _1112.y >= 0.0f.xx.y);
            float2 _1119 = (1.0f.xx - abs(_1103.yx)) * float2(_1113.x ? 1.0f : (-1.0f), _1113.y ? 1.0f : (-1.0f));
            _1121 = float3(_1119.x, _1119.y, _713.z);
        }
        else
        {
            _1121 = float3(_1103.x, _1103.y, _713.z);
        }
        uint2 _1126 = uint2(clamp((_1121.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1138 = _802 & 3u;
        [branch]
        if (_1138 != 0u)
        {
            uint _1145 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1146 = _640.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1146, _640.y, _1145)] = _802;
            if ((_1138 == 2u) || (_1138 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1146, _640.y, _1145 + 1u)] = 0u;
            }
        }
        _1163 = (((_1126.x | (_1126.y << 11u)) << 10u) | (uint(clamp(_710 ? (_705 / _707) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _701;
        _1164 = _1097;
        _1165 = _1098;
        _1166 = lerp(0.0f.xxx, float3(_711.x ? _717.x : 0.0f.xxx.x, _711.y ? _717.y : 0.0f.xxx.y, _711.z ? _717.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_948 + _616);
    }
    else
    {
        _1163 = 0u;
        _1164 = 0u;
        _1165 = 0u;
        _1166 = 0.0f.xxx;
    }
    float4 _1172 = float4(_1166 * 1.0f, 0.0f);
    float4 _1179 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1178 = _1172;
        _1178.w = 0.0f;
        _1179 = _1178;
    }
    else
    {
        _1179 = _1172;
    }
    float4 _1180 = 0.0f.xxxx;
    _1180.x = _533;
    _1180.y = 1.0f;
    _1180.z = 1.0f;
    _1180.w = 1.0f;
    float4 _1186 = _1179 * View_View_PreExposure;
    float3 _1188 = min(_1186.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1188.x, _1188.y, _1188.z, _1186.w);
    out_var_SV_Target1 = _1180;
    out_var_SV_Target2 = _1165;
    out_var_SV_Target3 = _1164;
    out_var_SV_Target4 = _637 ? 0u : 0u;
    out_var_SV_Target5 = _1163;
    gl_FragDepth = _300;
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
