#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float _217 = 0.0f;
static float4 _218 = 0.0f.xxxx;
static float2 _219 = 0.0f.xx;

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
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveAdd : packoffset(c0);
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveScale : packoffset(c1);
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMinUV : packoffset(c2);
    float3 IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMaxUV : packoffset(c3);
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
    float4 _259 = float4(_217, _217, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _263 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _267 = _263.xyz / _263.w.xxx;
    float3 _277 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _277 = -View_View_ViewForward;
    }
    else
    {
        _277 = normalize(-_267);
    }
    uint _278 = in_var_PRIMITIVE_ID * 41u;
    float4 _291 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _291.w = max(0.5f, 0.0f);
    float3 _292 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_278].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _293 = _259.z;
    float _294 = _259.w;
    float _297 = min(_293 / (_294 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _303 = (_267 - View_View_RelativePreViewTranslation) + ((-_277) * (mad(-_297, _294, _293) / _297));
    uint _326 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_278].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_278].x) & 256u) != 0u) ? 64u : 0u);
    float4 _463 = 0.0f.xxxx;
    float4 _464 = 0.0f.xxxx;
    uint _465 = 0u;
    float3 _466 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_278].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _341 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _345 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _341, 0.0f);
        float4 _348 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _341, 0.0f);
        float4 _351 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _341, 0.0f);
        float _352 = _345.w;
        float _353 = _348.w;
        float _354 = _351.w;
        float3 _355 = _345.xyz;
        float3 _358 = (_348.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _359 = _351.x;
        float _360 = _351.y;
        float _361 = _351.z;
        float3 _373 = 0.0f.xxx;
        float4 _460 = 0.0f.xxxx;
        float4 _461 = 0.0f.xxxx;
        uint _462 = 0u;
        do
        {
            if (any(bool3(_358.x != 0.0f.xxx.x, _358.y != 0.0f.xxx.y, _358.z != 0.0f.xxx.z)) || (_353 < 1.0f))
            {
                _373 = normalize((_292 * _353) + _358);
            }
            else
            {
                _373 = _292;
            }
            bool _377 = any(bool3(_355.x > 0.0f.xxx.x, _355.y > 0.0f.xxx.y, _355.z > 0.0f.xxx.z)) || (_352 < 1.0f);
            bool _384 = (((_359 > 0.0f) || (_360 > 0.0f)) || (_361 > 0.0f)) || (_354 < 1.0f);
            if ((!_377) && (!_384))
            {
                _460 = _291;
                _461 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _462 = 0u;
                break;
            }
            float _394 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _395 = _359.xxx;
            float4 _406 = 0.0f.xxxx;
            if (_377 || _384)
            {
                float3 _404 = (0.039999999105930328369140625f.xxx * _352) + lerp((0.07999999821186065673828125f * _360).xxx, _355, _395);
                _406 = float4(_404.x, _404.y, _404.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _406 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _413 = 0.0f.xxxx;
            if (_377)
            {
                float3 _411 = (_291.xyz * _352) + lerp(_355, 0.0f.xxx, _395);
                _413 = float4(_411.x, _411.y, _411.z, _291.w);
            }
            else
            {
                _413 = _291;
            }
            float4 _457 = 0.0f.xxxx;
            float4 _458 = 0.0f.xxxx;
            uint _459 = 0u;
            if (_384)
            {
                float _416 = mad(_394, _354, _359);
                float4 _449 = 0.0f.xxxx;
                float4 _450 = 0.0f.xxxx;
                if (_416 >= _394)
                {
                    float3 _443 = _413.xyz * (_416 - _394);
                    float3 _445 = _406.xyz + _443;
                    float3 _447 = _413.xyz - _443;
                    _449 = float4(_445.x, _445.y, _445.z, _406.w);
                    _450 = float4(_447.x, _447.y, _447.z, _413.w);
                }
                else
                {
                    float3 _435 = clamp(_406.xyz - (0.07999999821186065673828125f * clamp(min(_406.x, min(_406.y, _406.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_416 - _394));
                    float3 _437 = _413.xyz + _435;
                    float3 _439 = _406.xyz - _435;
                    _449 = float4(_439.x, _439.y, _439.z, _406.w);
                    _450 = float4(_437.x, _437.y, _437.z, _413.w);
                }
                float4 _453 = _450;
                _453.w = mad(_450.w, _354, _361);
                float4 _456 = _449;
                _456.w = _449.w * _354;
                _457 = _453;
                _458 = _456;
                _459 = 0u;
            }
            else
            {
                _457 = _413;
                _458 = _406;
                _459 = 0u;
            }
            _460 = _457;
            _461 = _458;
            _462 = _459;
            break;
        } while(false);
        _463 = _460;
        _464 = _461;
        _465 = _462;
        _466 = _373;
    }
    else
    {
        _463 = _291;
        _464 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _465 = 0u;
        _466 = _292;
    }
    bool _474 = View_View_IndirectLightingCacheShowFlag > 0.0f;
    float _480 = 0.0f;
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_278].x) & 2u) != 0u) && _474)
    {
        _480 = IndirectLightingCache_IndirectLightingCache_DirectionalLightShadowing;
    }
    else
    {
        _480 = 1.0f;
    }
    float _530 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_278].x) & 4u) != 0u)
    {
        float3 _498 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _303, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
        float4 _509 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_498.x), int(_498.y), int(_498.z), 0).xyz, 0)));
        _530 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, (((_509.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_498 / _509.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize, 0.0f).x;
    }
    else
    {
        _530 = _480;
    }
    float4 _531 = float4(_530, 1.0f, 1.0f, 1.0f);
    bool _533 = all(bool4(_531.x == 0.0f.xxxx.x, _531.y == 0.0f.xxxx.y, _531.z == 0.0f.xxxx.z, _531.w == 0.0f.xxxx.w));
    bool _535 = all(bool4(_531.x == 1.0f.xxxx.x, _531.y == 1.0f.xxxx.y, _531.z == 1.0f.xxxx.z, _531.w == 1.0f.xxxx.w));
    uint _554 = 0u;
    if ((!_533) && (!_535))
    {
        _554 = _326 | 8u;
    }
    else
    {
        uint _552 = 0u;
        if (_533)
        {
            _552 = (_326 | 0u) | 16u;
        }
        else
        {
            uint _549 = 0u;
            if (_535)
            {
                _549 = (_326 | 0u) | 0u;
            }
            else
            {
                _549 = _326;
            }
            _552 = _549;
        }
        _554 = _552;
    }
    float3 _613 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _585 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_278 + 1u].xyz) * 2097152.0f) + (_303 - Scene_GPUScene_GPUScenePrimitiveSceneData[_278 + 18u].xyz));
        float3 _586 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_278 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_278 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_278 + 25u].w) + 1.0f.xxx;
        float3 _612 = 0.0f.xxx;
        if (any(bool3(_585.x > _586.x, _585.y > _586.y, _585.z > _586.z)))
        {
            float3 _592 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _593 = _303 * 0.57700002193450927734375f.xxx;
            float3 _608 = frac(mad((_593.x + _593.y) + _593.z, 0.00200000009499490261077880859375f, frac(((_592.x + _592.y) + _592.z) * 4194.30419921875f))).xxx;
            _612 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_608.x > 0.5f.xxx.x, _608.y > 0.5f.xxx.y, _608.z > 0.5f.xxx.z)));
        }
        else
        {
            _612 = 0.0f.xxx;
        }
        _613 = _612;
    }
    else
    {
        _613 = 0.0f.xxx;
    }
    float4 _620 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _621 = _620.x;
    uint _623 = uint(mad(_297, 16777215.0f, 0.5f));
    uint _625 = uint(mad(_621, 16777215.0f, 0.5f));
    bool _634 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_623 == _625) || (_623 == (_625 - 1u))) : (_297 == _621);
    uint _1153 = 0u;
    uint _1154 = 0u;
    uint _1155 = 0u;
    float3 _1156 = 0.0f.xxx;
    if (_634)
    {
        uint2 _637 = uint2(gl_FragCoord.xy);
        float3 _638[4] = { normalize(_466), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _643 = mad(clamp(_463.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _644 = float4(_643.x, _643.y, _643.z, _463.w);
        float3 _650 = (clamp(_464.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _651 = float4(_650.x, _650.y, _650.z, _464.w);
        float _659 = clamp(max(View_View_MinRoughness, mad(_463.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _644.w = _659;
        float _663 = clamp(max(View_View_MinRoughness, mad(_659, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _644.w = _663;
        _651.w = clamp(_464.w, -1.0f, 1.0f);
        bool _668 = any(bool3(true, true, true));
        float3 _697 = 0.0f.xxx;
        uint _698 = 0u;
        uint _699 = 0u;
        bool _700 = false;
        float3 _701 = 0.0f.xxx;
        float _702 = 0.0f;
        float3 _703 = 0.0f.xxx;
        float _704 = 0.0f;
        if (_668)
        {
            float3 _690 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _690 = lerp(_644.xyz, _651.xyz, clamp((max(_650.x, max(_650.y, _650.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _690 = 0.0f.xxx;
                break;
            } while(false);
            float3 _229[4] = _638;
            _697 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _698 = 1u;
            _699 = (_554 | 0u) | 0u;
            _700 = (true && all(bool3(true, true, true))) && true;
            _701 = _690 * 1.0f;
            _702 = _663;
            _703 = _229[0u] * 1.0f;
            _704 = 1.0f;
        }
        else
        {
            _697 = 0.0f.xxx;
            _698 = 0u;
            _699 = _554;
            _700 = true;
            _701 = 0.0f.xxx;
            _702 = 0.0f;
            _703 = 0.0f.xxx;
            _704 = 0.0f;
        }
        uint _705 = _668 ? 2u : 0u;
        bool _707 = _704 > 0.0f;
        bool3 _708 = _707.xxx;
        float3 _709 = normalize(_703);
        float3 _710 = float3(_708.x ? _709.x : 0.0f.xxx.x, _708.y ? _709.y : 0.0f.xxx.y, _708.z ? _709.z : 0.0f.xxx.z);
        float3 _714 = _701 / _704.xxx;
        uint _799 = 0u;
        uint _800 = 0u;
        if (true)
        {
            bool _719 = _700 && (uint(_668) == 1u);
            uint _798 = 0u;
            if (_719)
            {
                uint _735 = 0u;
                if (((_705 >> 6u) & 1u) != 0u)
                {
                    _735 = ((_465 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _735 = 0u;
                }
                uint _744 = 0u;
                if ((((_705 >> 9u) & 1u) != 0u) && (_663 == 0.0f))
                {
                    _744 = _735 | 4u;
                }
                else
                {
                    _744 = _735;
                }
                uint _751 = 0u;
                if (((_705 >> 10u) & 1u) != 0u)
                {
                    _751 = _744 | 8u;
                }
                else
                {
                    _751 = _744;
                }
                uint _753 = (_705 >> 2u) & 7u;
                uint _758 = 0u;
                if (_753 == 4u)
                {
                    _758 = _751 | 16u;
                }
                else
                {
                    _758 = _751;
                }
                uint _763 = 0u;
                if (_753 == 1u)
                {
                    _763 = _758 | 32u;
                }
                else
                {
                    _763 = _758;
                }
                uint _768 = 0u;
                if (_753 == 3u)
                {
                    _768 = _763 | 64u;
                }
                else
                {
                    _768 = _763;
                }
                uint _769 = _768 & 2u;
                uint _797 = 0u;
                if ((_769 == 2u) || (_769 == 3u))
                {
                    _797 = 0u;
                }
                else
                {
                    uint _796 = 0u;
                    if ((_768 & 4u) == 4u)
                    {
                        _796 = 0u;
                    }
                    else
                    {
                        uint _795 = 0u;
                        if ((_768 & 40u) == 40u)
                        {
                            _795 = 0u;
                        }
                        else
                        {
                            uint _794 = 0u;
                            if ((_768 & 32u) == 32u)
                            {
                                _794 = 0u;
                            }
                            else
                            {
                                _794 = ((_768 & 72u) == 64u) ? 0u : 0u;
                            }
                            _795 = _794;
                        }
                        _796 = _795;
                    }
                    _797 = _796;
                }
                _798 = _797;
            }
            else
            {
                _798 = 0u;
            }
            _799 = _798;
            _800 = (_699 & 4294967288u) | ((_719 ? 1u : (_719 ? 2u : 3u)) & 7u);
        }
        else
        {
            _799 = 0u;
            _800 = _699;
        }
        float3 _938 = 0.0f.xxx;
        float _939 = 0.0f;
        float2 _940 = 0.0f.xx;
        [branch]
        if (_668)
        {
            float3 _230[4] = _638;
            uint _804 = (_705 >> 14u) & 3u;
            float3 _851 = 0.0f.xxx;
            float3 _852 = 0.0f.xxx;
            float3 _853 = 0.0f.xxx;
            switch ((_705 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _827 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_230[_804], _277), clamp(_663, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _831 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _832 = _827.x;
                    float3 _836 = 1.0f.xxx + (_651.xyz * ((1.0f - _832) / _832));
                    _851 = _230[_804];
                    _852 = _644.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_831.x ? _836.x : 1.0f.xxx.x, _831.y ? _836.y : 1.0f.xxx.y, _831.z ? _836.z : 1.0f.xxx.z) * ((_651.xyz * _832) + (((1.0f.xxx * clamp(50.0f * max(_650.x, max(_650.y, _650.z)), 0.0f, 1.0f)) - _651.xyz) * _827.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _853 = _644.xyz;
                    break;
                }
                default:
                {
                    _851 = 0.0f.xxx;
                    _852 = 0.0f.xxx;
                    _853 = 0.0f.xxx;
                    break;
                }
            }
            float3 _915 = 0.0f.xxx;
            if (_474)
            {
                float3 _867 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _303, IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveScale, IndirectLightingCache_IndirectLightingCache_IndirectLightingCachePrimitiveAdd), IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMinUV, IndirectLightingCache_IndirectLightingCache_IndirectLightingCacheMaxUV);
                float4 _871 = IndirectLightingCache_IndirectLightingCacheTexture0.Sample(IndirectLightingCache_IndirectLightingCacheTextureSampler0, _867);
                float4 _875 = IndirectLightingCache_IndirectLightingCacheTexture1.Sample(View_SharedBilinearClampedSampler, _867);
                float4 _878 = IndirectLightingCache_IndirectLightingCacheTexture2.Sample(View_SharedBilinearClampedSampler, _867);
                float4 _896 = 0.0f.xxxx;
                _896.y = (-0.48860299587249755859375f) * _851.y;
                _896.z = 0.48860299587249755859375f * _851.z;
                _896.w = (-0.48860299587249755859375f) * _851.x;
                _896.x = 0.886227548122406005859375f;
                float3 _905 = _896.yzw * 2.094395160675048828125f;
                float4 _906 = float4(_896.x, _905.x, _905.y, _905.z);
                float3 _908 = 0.0f.xxx;
                _908.x = dot(float4(_871.x, _875.x, _878.x, _871.w), _906);
                _908.y = dot(float4(_871.y, _875.y, _878.y, _875.w), _906);
                _908.z = dot(float4(_871.z, _875.z, _878.zw), _906);
                _915 = max(0.0f.xxx, _908) * 0.3183098733425140380859375f.xxx;
            }
            else
            {
                _915 = 0.0f.xxx;
            }
            float3 _918 = _915 * View_View_PrecomputedIndirectLightingColorScale;
            float2 _934 = 0.0f.xx;
            _934.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _934.y = dot(_918, float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f));
            _938 = mad(_918 * _852, max(1.0f.xxx, ((((((_853 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_853 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_853 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _697);
            _939 = 1.0f;
            _940 = _934;
        }
        else
        {
            _938 = _697;
            _939 = 0.0f;
            _940 = 0.0f.xx;
        }
        float2 _943 = _940 * (1.0f / max(1.0f, _939));
        uint _1087 = 0u;
        uint _1088 = 0u;
        [branch]
        if (_668)
        {
            float _962 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _963 = _962 * 0.0078740157186985015869140625f;
            float3 _965 = float3(_963, _963, _962 * 0.01587301678955554962158203125f);
            float3 _966 = clamp(_644.xyz, 0.0f.xxx, 1.0f.xxx);
            float _967 = _966.x;
            float _976 = 0.0f;
            do
            {
                if (_967 < 0.00313066993840038776397705078125f)
                {
                    _976 = _967 * 12.9200000762939453125f;
                    break;
                }
                _976 = mad(pow(_967, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _977 = _966.y;
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
            float _987 = _966.z;
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
            float3 _997 = float3(_976, _986, _996);
            float3 _1003 = clamp(mad(_965, float3(min((asuint(_997) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _997), 0.0f.xxx, 1.0f.xxx);
            uint _1017 = ((uint(_1003.x * 127.0f) << 0u) | (uint(_1003.y * 127.0f) << 7u)) | (uint(_1003.z * 63.0f) << 14u);
            float3 _1022 = clamp(_651.xyz, 0.0f.xxx, 1.0f.xxx);
            float _1023 = _1022.x;
            float _1032 = 0.0f;
            do
            {
                if (_1023 < 0.00313066993840038776397705078125f)
                {
                    _1032 = _1023 * 12.9200000762939453125f;
                    break;
                }
                _1032 = mad(pow(_1023, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1033 = _1022.y;
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
            float _1043 = _1022.z;
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
            float3 _1053 = float3(_1032, _1042, _1052);
            float3 _1059 = clamp(mad(_965, float3(min((asuint(_1053) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1053), 0.0f.xxx, 1.0f.xxx);
            _1087 = (((uint(_1059.x * 127.0f) << 0u) | (uint(_1059.y * 127.0f) << 7u)) | (uint(_1059.z * 63.0f) << 14u)) | ((_1017 & 4095u) << 20u);
            _1088 = ((0u | ((((_800 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_943.y * _943.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_1017 >> 12u) & 255u) << 8u) | uint(clamp(_663, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1087 = 0u;
            _1088 = 0u;
        }
        float2 _1093 = _710.xy / dot(1.0f.xxx, abs(_710)).xx;
        float3 _1111 = 0.0f.xxx;
        if (_710.z <= 0.0f)
        {
            float2 _1102 = _1093.xy;
            bool2 _1103 = bool2(_1102.x >= 0.0f.xx.x, _1102.y >= 0.0f.xx.y);
            float2 _1109 = (1.0f.xx - abs(_1093.yx)) * float2(_1103.x ? 1.0f : (-1.0f), _1103.y ? 1.0f : (-1.0f));
            _1111 = float3(_1109.x, _1109.y, _710.z);
        }
        else
        {
            _1111 = float3(_1093.x, _1093.y, _710.z);
        }
        uint2 _1116 = uint2(clamp((_1111.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1128 = _799 & 3u;
        [branch]
        if (_1128 != 0u)
        {
            uint _1135 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1136 = _637.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1136, _637.y, _1135)] = _799;
            if ((_1128 == 2u) || (_1128 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1136, _637.y, _1135 + 1u)] = 0u;
            }
        }
        _1153 = (((_1116.x | (_1116.y << 11u)) << 10u) | (uint(clamp(_707 ? (_702 / _704) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _698;
        _1154 = _1087;
        _1155 = _1088;
        _1156 = lerp(0.0f.xxx, float3(_708.x ? _714.x : 0.0f.xxx.x, _708.y ? _714.y : 0.0f.xxx.y, _708.z ? _714.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_938 + _613);
    }
    else
    {
        _1153 = 0u;
        _1154 = 0u;
        _1155 = 0u;
        _1156 = 0.0f.xxx;
    }
    float4 _1162 = float4(_1156 * 1.0f, 0.0f);
    float4 _1169 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1168 = _1162;
        _1168.w = 0.0f;
        _1169 = _1168;
    }
    else
    {
        _1169 = _1162;
    }
    float4 _1170 = 0.0f.xxxx;
    _1170.x = _530;
    _1170.y = 1.0f;
    _1170.z = 1.0f;
    _1170.w = 1.0f;
    float4 _1176 = _1169 * View_View_PreExposure;
    float3 _1178 = min(_1176.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1178.x, _1178.y, _1178.z, _1176.w);
    out_var_SV_Target1 = _1170;
    out_var_SV_Target2 = _1155;
    out_var_SV_Target3 = _1154;
    out_var_SV_Target4 = _634 ? 0u : 0u;
    out_var_SV_Target5 = _1153;
    gl_FragDepth = _297;
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
