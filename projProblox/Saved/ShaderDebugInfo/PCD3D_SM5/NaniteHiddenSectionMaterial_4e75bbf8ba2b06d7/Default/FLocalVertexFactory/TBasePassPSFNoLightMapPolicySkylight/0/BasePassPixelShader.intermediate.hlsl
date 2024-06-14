#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float _205 = 0.0f;
static float3 _206 = 0.0f.xxx;
static float2 _207 = 0.0f.xx;

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
    float4 _249 = float4(_205, _205, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _253 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _257 = _253.xyz / _253.w.xxx;
    float3 _267 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _267 = -View_View_ViewForward;
    }
    else
    {
        _267 = normalize(-_257);
    }
    uint _268 = in_var_PRIMITIVE_ID * 41u;
    float4 _281 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _281.w = max(0.5f, 0.0f);
    float3 _282 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_268].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _283 = _249.z;
    float _284 = _249.w;
    float _287 = min(_283 / (_284 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _293 = (_257 - View_View_RelativePreViewTranslation) + ((-_267) * (mad(-_287, _284, _283) / _287));
    uint _316 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_268].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_268].x) & 256u) != 0u) ? 64u : 0u);
    float4 _453 = 0.0f.xxxx;
    float4 _454 = 0.0f.xxxx;
    uint _455 = 0u;
    float3 _456 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_268].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _331 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _335 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _331, 0.0f);
        float4 _338 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _331, 0.0f);
        float4 _341 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _331, 0.0f);
        float _342 = _335.w;
        float _343 = _338.w;
        float _344 = _341.w;
        float3 _345 = _335.xyz;
        float3 _348 = (_338.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _349 = _341.x;
        float _350 = _341.y;
        float _351 = _341.z;
        float3 _363 = 0.0f.xxx;
        float4 _450 = 0.0f.xxxx;
        float4 _451 = 0.0f.xxxx;
        uint _452 = 0u;
        do
        {
            if (any(bool3(_348.x != 0.0f.xxx.x, _348.y != 0.0f.xxx.y, _348.z != 0.0f.xxx.z)) || (_343 < 1.0f))
            {
                _363 = normalize((_282 * _343) + _348);
            }
            else
            {
                _363 = _282;
            }
            bool _367 = any(bool3(_345.x > 0.0f.xxx.x, _345.y > 0.0f.xxx.y, _345.z > 0.0f.xxx.z)) || (_342 < 1.0f);
            bool _374 = (((_349 > 0.0f) || (_350 > 0.0f)) || (_351 > 0.0f)) || (_344 < 1.0f);
            if ((!_367) && (!_374))
            {
                _450 = _281;
                _451 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _452 = 0u;
                break;
            }
            float _384 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _385 = _349.xxx;
            float4 _396 = 0.0f.xxxx;
            if (_367 || _374)
            {
                float3 _394 = (0.039999999105930328369140625f.xxx * _342) + lerp((0.07999999821186065673828125f * _350).xxx, _345, _385);
                _396 = float4(_394.x, _394.y, _394.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _396 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _403 = 0.0f.xxxx;
            if (_367)
            {
                float3 _401 = (_281.xyz * _342) + lerp(_345, 0.0f.xxx, _385);
                _403 = float4(_401.x, _401.y, _401.z, _281.w);
            }
            else
            {
                _403 = _281;
            }
            float4 _447 = 0.0f.xxxx;
            float4 _448 = 0.0f.xxxx;
            uint _449 = 0u;
            if (_374)
            {
                float _406 = mad(_384, _344, _349);
                float4 _439 = 0.0f.xxxx;
                float4 _440 = 0.0f.xxxx;
                if (_406 >= _384)
                {
                    float3 _433 = _403.xyz * (_406 - _384);
                    float3 _435 = _396.xyz + _433;
                    float3 _437 = _403.xyz - _433;
                    _439 = float4(_435.x, _435.y, _435.z, _396.w);
                    _440 = float4(_437.x, _437.y, _437.z, _403.w);
                }
                else
                {
                    float3 _425 = clamp(_396.xyz - (0.07999999821186065673828125f * clamp(min(_396.x, min(_396.y, _396.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_406 - _384));
                    float3 _427 = _403.xyz + _425;
                    float3 _429 = _396.xyz - _425;
                    _439 = float4(_429.x, _429.y, _429.z, _396.w);
                    _440 = float4(_427.x, _427.y, _427.z, _403.w);
                }
                float4 _443 = _440;
                _443.w = mad(_440.w, _344, _351);
                float4 _446 = _439;
                _446.w = _439.w * _344;
                _447 = _443;
                _448 = _446;
                _449 = 0u;
            }
            else
            {
                _447 = _403;
                _448 = _396;
                _449 = 0u;
            }
            _450 = _447;
            _451 = _448;
            _452 = _449;
            break;
        } while(false);
        _453 = _450;
        _454 = _451;
        _455 = _452;
        _456 = _363;
    }
    else
    {
        _453 = _281;
        _454 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _455 = 0u;
        _456 = _282;
    }
    float _506 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_268].x) & 4u) != 0u)
    {
        float3 _474 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _293, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
        float4 _485 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_474.x), int(_474.y), int(_474.z), 0).xyz, 0)));
        _506 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, (((_485.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_474 / _485.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize, 0.0f).x;
    }
    else
    {
        _506 = 1.0f;
    }
    float4 _507 = float4(_506, 1.0f, 1.0f, 1.0f);
    bool _509 = all(bool4(_507.x == 0.0f.xxxx.x, _507.y == 0.0f.xxxx.y, _507.z == 0.0f.xxxx.z, _507.w == 0.0f.xxxx.w));
    bool _511 = all(bool4(_507.x == 1.0f.xxxx.x, _507.y == 1.0f.xxxx.y, _507.z == 1.0f.xxxx.z, _507.w == 1.0f.xxxx.w));
    uint _530 = 0u;
    if ((!_509) && (!_511))
    {
        _530 = _316 | 8u;
    }
    else
    {
        uint _528 = 0u;
        if (_509)
        {
            _528 = (_316 | 0u) | 16u;
        }
        else
        {
            uint _525 = 0u;
            if (_511)
            {
                _525 = (_316 | 0u) | 0u;
            }
            else
            {
                _525 = _316;
            }
            _528 = _525;
        }
        _530 = _528;
    }
    float3 _589 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _561 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_268 + 1u].xyz) * 2097152.0f) + (_293 - Scene_GPUScene_GPUScenePrimitiveSceneData[_268 + 18u].xyz));
        float3 _562 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_268 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_268 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_268 + 25u].w) + 1.0f.xxx;
        float3 _588 = 0.0f.xxx;
        if (any(bool3(_561.x > _562.x, _561.y > _562.y, _561.z > _562.z)))
        {
            float3 _568 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _569 = _293 * 0.57700002193450927734375f.xxx;
            float3 _584 = frac(mad((_569.x + _569.y) + _569.z, 0.00200000009499490261077880859375f, frac(((_568.x + _568.y) + _568.z) * 4194.30419921875f))).xxx;
            _588 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_584.x > 0.5f.xxx.x, _584.y > 0.5f.xxx.y, _584.z > 0.5f.xxx.z)));
        }
        else
        {
            _588 = 0.0f.xxx;
        }
        _589 = _588;
    }
    else
    {
        _589 = 0.0f.xxx;
    }
    float4 _596 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _597 = _596.x;
    uint _599 = uint(mad(_287, 16777215.0f, 0.5f));
    uint _601 = uint(mad(_597, 16777215.0f, 0.5f));
    bool _610 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_599 == _601) || (_599 == (_601 - 1u))) : (_287 == _597);
    uint _1113 = 0u;
    uint _1114 = 0u;
    uint _1115 = 0u;
    float3 _1116 = 0.0f.xxx;
    if (_610)
    {
        uint2 _613 = uint2(gl_FragCoord.xy);
        float3 _614[4] = { normalize(_456), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _619 = mad(clamp(_453.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _620 = float4(_619.x, _619.y, _619.z, _453.w);
        float3 _626 = (clamp(_454.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _627 = float4(_626.x, _626.y, _626.z, _454.w);
        float _635 = clamp(max(View_View_MinRoughness, mad(_453.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _620.w = _635;
        float _639 = clamp(max(View_View_MinRoughness, mad(_635, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _620.w = _639;
        _627.w = clamp(_454.w, -1.0f, 1.0f);
        bool _644 = any(bool3(true, true, true));
        float3 _673 = 0.0f.xxx;
        uint _674 = 0u;
        uint _675 = 0u;
        bool _676 = false;
        float3 _677 = 0.0f.xxx;
        float _678 = 0.0f;
        float3 _679 = 0.0f.xxx;
        float _680 = 0.0f;
        if (_644)
        {
            float3 _666 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _666 = lerp(_620.xyz, _627.xyz, clamp((max(_626.x, max(_626.y, _626.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _666 = 0.0f.xxx;
                break;
            } while(false);
            float3 _217[4] = _614;
            _673 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _674 = 1u;
            _675 = (_530 | 0u) | 0u;
            _676 = (true && all(bool3(true, true, true))) && true;
            _677 = _666 * 1.0f;
            _678 = _639;
            _679 = _217[0u] * 1.0f;
            _680 = 1.0f;
        }
        else
        {
            _673 = 0.0f.xxx;
            _674 = 0u;
            _675 = _530;
            _676 = true;
            _677 = 0.0f.xxx;
            _678 = 0.0f;
            _679 = 0.0f.xxx;
            _680 = 0.0f;
        }
        uint _681 = _644 ? 2u : 0u;
        bool _683 = _680 > 0.0f;
        bool3 _684 = _683.xxx;
        float3 _685 = normalize(_679);
        float3 _686 = float3(_684.x ? _685.x : 0.0f.xxx.x, _684.y ? _685.y : 0.0f.xxx.y, _684.z ? _685.z : 0.0f.xxx.z);
        float3 _690 = _677 / _680.xxx;
        uint _775 = 0u;
        uint _776 = 0u;
        if (true)
        {
            bool _695 = _676 && (uint(_644) == 1u);
            uint _774 = 0u;
            if (_695)
            {
                uint _711 = 0u;
                if (((_681 >> 6u) & 1u) != 0u)
                {
                    _711 = ((_455 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _711 = 0u;
                }
                uint _720 = 0u;
                if ((((_681 >> 9u) & 1u) != 0u) && (_639 == 0.0f))
                {
                    _720 = _711 | 4u;
                }
                else
                {
                    _720 = _711;
                }
                uint _727 = 0u;
                if (((_681 >> 10u) & 1u) != 0u)
                {
                    _727 = _720 | 8u;
                }
                else
                {
                    _727 = _720;
                }
                uint _729 = (_681 >> 2u) & 7u;
                uint _734 = 0u;
                if (_729 == 4u)
                {
                    _734 = _727 | 16u;
                }
                else
                {
                    _734 = _727;
                }
                uint _739 = 0u;
                if (_729 == 1u)
                {
                    _739 = _734 | 32u;
                }
                else
                {
                    _739 = _734;
                }
                uint _744 = 0u;
                if (_729 == 3u)
                {
                    _744 = _739 | 64u;
                }
                else
                {
                    _744 = _739;
                }
                uint _745 = _744 & 2u;
                uint _773 = 0u;
                if ((_745 == 2u) || (_745 == 3u))
                {
                    _773 = 0u;
                }
                else
                {
                    uint _772 = 0u;
                    if ((_744 & 4u) == 4u)
                    {
                        _772 = 0u;
                    }
                    else
                    {
                        uint _771 = 0u;
                        if ((_744 & 40u) == 40u)
                        {
                            _771 = 0u;
                        }
                        else
                        {
                            uint _770 = 0u;
                            if ((_744 & 32u) == 32u)
                            {
                                _770 = 0u;
                            }
                            else
                            {
                                _770 = ((_744 & 72u) == 64u) ? 0u : 0u;
                            }
                            _771 = _770;
                        }
                        _772 = _771;
                    }
                    _773 = _772;
                }
                _774 = _773;
            }
            else
            {
                _774 = 0u;
            }
            _775 = _774;
            _776 = (_675 & 4294967288u) | ((_695 ? 1u : (_695 ? 2u : 3u)) & 7u);
        }
        else
        {
            _775 = 0u;
            _776 = _675;
        }
        float3 _898 = 0.0f.xxx;
        float _899 = 0.0f;
        float2 _900 = 0.0f.xx;
        [branch]
        if (_644)
        {
            float3 _218[4] = _614;
            uint _780 = (_681 >> 14u) & 3u;
            float3 _827 = 0.0f.xxx;
            float3 _828 = 0.0f.xxx;
            float3 _829 = 0.0f.xxx;
            switch ((_681 >> 11u) & 7u)
            {
                case 0u:
                {
                    float4 _803 = View_ShadingEnergyGGXSpecTexture.SampleLevel(View_ShadingEnergySampler, float2(dot(_218[_780], _267), clamp(_639, 0.001000000047497451305389404296875f, 1.0f)), 0.0f);
                    bool3 _807 = (View_View_bShadingEnergyConservation != 0u).xxx;
                    float _808 = _803.x;
                    float3 _812 = 1.0f.xxx + (_627.xyz * ((1.0f - _808) / _808));
                    _827 = _218[_780];
                    _828 = _620.xyz * ((View_View_bShadingEnergyPreservation != 0u) ? (1.0f - dot(float3(_807.x ? _812.x : 1.0f.xxx.x, _807.y ? _812.y : 1.0f.xxx.y, _807.z ? _812.z : 1.0f.xxx.z) * ((_627.xyz * _808) + (((1.0f.xxx * clamp(50.0f * max(_626.x, max(_626.y, _626.z)), 0.0f, 1.0f)) - _627.xyz) * _803.y)), float3(0.300000011920928955078125f, 0.589999973773956298828125f, 0.10999999940395355224609375f))) : 1.0f);
                    _829 = _620.xyz;
                    break;
                }
                default:
                {
                    _827 = 0.0f.xxx;
                    _828 = 0.0f.xxx;
                    _829 = 0.0f.xxx;
                    break;
                }
            }
            float3 _879 = 0.0f.xxx;
            if (OpaqueBasePass_OpaqueBasePass_Shared_UseBasePassSkylight > 0u)
            {
                float4 _838 = float4(_827, 1.0f);
                float3 _842 = 0.0f.xxx;
                _842.x = dot(View_SkyIrradianceEnvironmentMap[0u], _838);
                _842.y = dot(View_SkyIrradianceEnvironmentMap[1u], _838);
                _842.z = dot(View_SkyIrradianceEnvironmentMap[2u], _838);
                float4 _853 = _838.xyzz * _838.yzzx;
                float3 _857 = 0.0f.xxx;
                _857.x = dot(View_SkyIrradianceEnvironmentMap[3u], _853);
                _857.y = dot(View_SkyIrradianceEnvironmentMap[4u], _853);
                _857.z = dot(View_SkyIrradianceEnvironmentMap[5u], _853);
                _879 = (max(0.0f.xxx, (_842 + _857) + (View_SkyIrradianceEnvironmentMap[6u].xyz * mad(_827.x, _827.x, -(_827.y * _827.y)))) * View_View_SkyLightColor.xyz) * 1.0f;
            }
            else
            {
                _879 = 0.0f.xxx;
            }
            float2 _894 = 0.0f.xx;
            _894.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _894.y = 0.0f;
            _898 = mad(_879 * _828, max(1.0f.xxx, ((((((_829 * 2.040400028228759765625f) - 0.3323999941349029541015625f.xxx) * 1.0f) + ((_829 * (-4.79510021209716796875f)) + 0.6417000293731689453125f.xxx)) * 1.0f) + ((_829 * 2.755199909210205078125f) + 0.69029998779296875f.xxx)) * 1.0f), _673);
            _899 = 1.0f;
            _900 = _894;
        }
        else
        {
            _898 = _673;
            _899 = 0.0f;
            _900 = 0.0f.xx;
        }
        float2 _903 = _900 * (1.0f / max(1.0f, _899));
        uint _1047 = 0u;
        uint _1048 = 0u;
        [branch]
        if (_644)
        {
            float _922 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _923 = _922 * 0.0078740157186985015869140625f;
            float3 _925 = float3(_923, _923, _922 * 0.01587301678955554962158203125f);
            float3 _926 = clamp(_620.xyz, 0.0f.xxx, 1.0f.xxx);
            float _927 = _926.x;
            float _936 = 0.0f;
            do
            {
                if (_927 < 0.00313066993840038776397705078125f)
                {
                    _936 = _927 * 12.9200000762939453125f;
                    break;
                }
                _936 = mad(pow(_927, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _937 = _926.y;
            float _946 = 0.0f;
            do
            {
                if (_937 < 0.00313066993840038776397705078125f)
                {
                    _946 = _937 * 12.9200000762939453125f;
                    break;
                }
                _946 = mad(pow(_937, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _947 = _926.z;
            float _956 = 0.0f;
            do
            {
                if (_947 < 0.00313066993840038776397705078125f)
                {
                    _956 = _947 * 12.9200000762939453125f;
                    break;
                }
                _956 = mad(pow(_947, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _957 = float3(_936, _946, _956);
            float3 _963 = clamp(mad(_925, float3(min((asuint(_957) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _957), 0.0f.xxx, 1.0f.xxx);
            uint _977 = ((uint(_963.x * 127.0f) << 0u) | (uint(_963.y * 127.0f) << 7u)) | (uint(_963.z * 63.0f) << 14u);
            float3 _982 = clamp(_627.xyz, 0.0f.xxx, 1.0f.xxx);
            float _983 = _982.x;
            float _992 = 0.0f;
            do
            {
                if (_983 < 0.00313066993840038776397705078125f)
                {
                    _992 = _983 * 12.9200000762939453125f;
                    break;
                }
                _992 = mad(pow(_983, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _993 = _982.y;
            float _1002 = 0.0f;
            do
            {
                if (_993 < 0.00313066993840038776397705078125f)
                {
                    _1002 = _993 * 12.9200000762939453125f;
                    break;
                }
                _1002 = mad(pow(_993, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _1003 = _982.z;
            float _1012 = 0.0f;
            do
            {
                if (_1003 < 0.00313066993840038776397705078125f)
                {
                    _1012 = _1003 * 12.9200000762939453125f;
                    break;
                }
                _1012 = mad(pow(_1003, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _1013 = float3(_992, _1002, _1012);
            float3 _1019 = clamp(mad(_925, float3(min((asuint(_1013) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _1013), 0.0f.xxx, 1.0f.xxx);
            _1047 = (((uint(_1019.x * 127.0f) << 0u) | (uint(_1019.y * 127.0f) << 7u)) | (uint(_1019.z * 63.0f) << 14u)) | ((_977 & 4095u) << 20u);
            _1048 = ((0u | ((((_776 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_903.y * _903.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_977 >> 12u) & 255u) << 8u) | uint(clamp(_639, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _1047 = 0u;
            _1048 = 0u;
        }
        float2 _1053 = _686.xy / dot(1.0f.xxx, abs(_686)).xx;
        float3 _1071 = 0.0f.xxx;
        if (_686.z <= 0.0f)
        {
            float2 _1062 = _1053.xy;
            bool2 _1063 = bool2(_1062.x >= 0.0f.xx.x, _1062.y >= 0.0f.xx.y);
            float2 _1069 = (1.0f.xx - abs(_1053.yx)) * float2(_1063.x ? 1.0f : (-1.0f), _1063.y ? 1.0f : (-1.0f));
            _1071 = float3(_1069.x, _1069.y, _686.z);
        }
        else
        {
            _1071 = float3(_1053.x, _1053.y, _686.z);
        }
        uint2 _1076 = uint2(clamp((_1071.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _1088 = _775 & 3u;
        [branch]
        if (_1088 != 0u)
        {
            uint _1095 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _1096 = _613.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1096, _613.y, _1095)] = _775;
            if ((_1088 == 2u) || (_1088 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_1096, _613.y, _1095 + 1u)] = 0u;
            }
        }
        _1113 = (((_1076.x | (_1076.y << 11u)) << 10u) | (uint(clamp(_683 ? (_678 / _680) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _674;
        _1114 = _1047;
        _1115 = _1048;
        _1116 = lerp(0.0f.xxx, float3(_684.x ? _690.x : 0.0f.xxx.x, _684.y ? _690.y : 0.0f.xxx.y, _684.z ? _690.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_898 + _589);
    }
    else
    {
        _1113 = 0u;
        _1114 = 0u;
        _1115 = 0u;
        _1116 = 0.0f.xxx;
    }
    float4 _1122 = float4(_1116 * 1.0f, 0.0f);
    float4 _1129 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _1128 = _1122;
        _1128.w = 0.0f;
        _1129 = _1128;
    }
    else
    {
        _1129 = _1122;
    }
    float4 _1130 = 0.0f.xxxx;
    _1130.x = _506;
    _1130.y = 1.0f;
    _1130.z = 1.0f;
    _1130.w = 1.0f;
    float4 _1136 = _1129 * View_View_PreExposure;
    float3 _1138 = min(_1136.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_1138.x, _1138.y, _1138.z, _1136.w);
    out_var_SV_Target1 = _1130;
    out_var_SV_Target2 = _1115;
    out_var_SV_Target3 = _1114;
    out_var_SV_Target4 = _610 ? 0u : 0u;
    out_var_SV_Target5 = _1113;
    gl_FragDepth = _287;
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
