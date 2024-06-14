#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float _187 = 0.0f;
static float2 _188 = 0.0f.xx;

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
    float View_View_ShowDecalsMask : packoffset(c192.w);
    float View_View_bCheckerboardSubsurfaceProfileRendering : packoffset(c224.z);
    float3 View_View_VolumetricLightmapWorldToUVScale : packoffset(c231);
    float3 View_View_VolumetricLightmapWorldToUVAdd : packoffset(c232);
    float3 View_View_VolumetricLightmapIndirectionTextureSize : packoffset(c233);
    float View_View_VolumetricLightmapBrickSize : packoffset(c233.w);
    float3 View_View_VolumetricLightmapBrickTexelSize : packoffset(c234);
    float View_View_MinRoughness : packoffset(c243.z);
};

StructuredBuffer<float4> Scene_GPUScene_GPUScenePrimitiveSceneData;
cbuffer OpaqueBasePass
{
    int OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT : packoffset(c142.y);
    int OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil : packoffset(c151);
};

Texture3D<uint4> View_VolumetricLightmapIndirectionTexture;
Texture3D<float4> View_DirectionalLightShadowingBrickTexture;
SamplerState View_SharedBilinearClampedSampler;
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
    float4 _225 = float4(_187, _187, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    float4 _229 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _233 = _229.xyz / _229.w.xxx;
    float3 _243 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _243 = -View_View_ViewForward;
    }
    else
    {
        _243 = normalize(-_233);
    }
    uint _244 = in_var_PRIMITIVE_ID * 41u;
    float4 _257 = float4(0.651405632495880126953125f, 0.13563333451747894287109375f, 0.896269321441650390625f, 0.0f);
    _257.w = max(0.5f, 0.0f);
    float3 _258 = in_var_TEXCOORD11_centroid.xyz * ((View_View_CullingSign * (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_244].x) & 64u) != 0u) ? (-1.0f) : 1.0f)) * float(gl_FrontFacing ? 1 : (-1)));
    float _259 = _225.z;
    float _260 = _225.w;
    float _263 = min(_259 / (_260 + 0.651405632495880126953125f), gl_FragCoord.z);
    float3 _269 = (_233 - View_View_RelativePreViewTranslation) + ((-_243) * (mad(-_263, _260, _259) / _263));
    uint _292 = (1u | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_244].x) & 512u) != 0u) ? 32u : 0u)) | (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_244].x) & 256u) != 0u) ? 64u : 0u);
    float4 _429 = 0.0f.xxxx;
    float4 _430 = 0.0f.xxxx;
    uint _431 = 0u;
    float3 _432 = 0.0f.xxx;
    [flatten]
    if (((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_244].x) & 8u) != 0u) && (View_View_ShowDecalsMask > 0.0f))
    {
        float2 _307 = gl_FragCoord.xy * View_View_BufferSizeAndInvSize.zw;
        float4 _311 = OpaqueBasePass_DBufferATexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _307, 0.0f);
        float4 _314 = OpaqueBasePass_DBufferBTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _307, 0.0f);
        float4 _317 = OpaqueBasePass_DBufferCTexture.SampleLevel(OpaqueBasePass_DBufferATextureSampler, _307, 0.0f);
        float _318 = _311.w;
        float _319 = _314.w;
        float _320 = _317.w;
        float3 _321 = _311.xyz;
        float3 _324 = (_314.xyz * 2.0f) - 1.00392162799835205078125f.xxx;
        float _325 = _317.x;
        float _326 = _317.y;
        float _327 = _317.z;
        float3 _339 = 0.0f.xxx;
        float4 _426 = 0.0f.xxxx;
        float4 _427 = 0.0f.xxxx;
        uint _428 = 0u;
        do
        {
            if (any(bool3(_324.x != 0.0f.xxx.x, _324.y != 0.0f.xxx.y, _324.z != 0.0f.xxx.z)) || (_319 < 1.0f))
            {
                _339 = normalize((_258 * _319) + _324);
            }
            else
            {
                _339 = _258;
            }
            bool _343 = any(bool3(_321.x > 0.0f.xxx.x, _321.y > 0.0f.xxx.y, _321.z > 0.0f.xxx.z)) || (_318 < 1.0f);
            bool _350 = (((_325 > 0.0f) || (_326 > 0.0f)) || (_327 > 0.0f)) || (_320 < 1.0f);
            if ((!_343) && (!_350))
            {
                _426 = _257;
                _427 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
                _428 = 0u;
                break;
            }
            float _360 = clamp((min(0.039999999105930328369140625f, min(0.039999999105930328369140625f, 0.039999999105930328369140625f)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f);
            float3 _361 = _325.xxx;
            float4 _372 = 0.0f.xxxx;
            if (_343 || _350)
            {
                float3 _370 = (0.039999999105930328369140625f.xxx * _318) + lerp((0.07999999821186065673828125f * _326).xxx, _321, _361);
                _372 = float4(_370.x, _370.y, _370.z, float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f).w);
            }
            else
            {
                _372 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
            }
            float4 _379 = 0.0f.xxxx;
            if (_343)
            {
                float3 _377 = (_257.xyz * _318) + lerp(_321, 0.0f.xxx, _361);
                _379 = float4(_377.x, _377.y, _377.z, _257.w);
            }
            else
            {
                _379 = _257;
            }
            float4 _423 = 0.0f.xxxx;
            float4 _424 = 0.0f.xxxx;
            uint _425 = 0u;
            if (_350)
            {
                float _382 = mad(_360, _320, _325);
                float4 _415 = 0.0f.xxxx;
                float4 _416 = 0.0f.xxxx;
                if (_382 >= _360)
                {
                    float3 _409 = _379.xyz * (_382 - _360);
                    float3 _411 = _372.xyz + _409;
                    float3 _413 = _379.xyz - _409;
                    _415 = float4(_411.x, _411.y, _411.z, _372.w);
                    _416 = float4(_413.x, _413.y, _413.z, _379.w);
                }
                else
                {
                    float3 _401 = clamp(_372.xyz - (0.07999999821186065673828125f * clamp(min(_372.x, min(_372.y, _372.z)) * 12.5f, 0.0f, 1.0f)).xxx, 0.0f.xxx, 1.0f.xxx) * (-(_382 - _360));
                    float3 _403 = _379.xyz + _401;
                    float3 _405 = _372.xyz - _401;
                    _415 = float4(_405.x, _405.y, _405.z, _372.w);
                    _416 = float4(_403.x, _403.y, _403.z, _379.w);
                }
                float4 _419 = _416;
                _419.w = mad(_416.w, _320, _327);
                float4 _422 = _415;
                _422.w = _415.w * _320;
                _423 = _419;
                _424 = _422;
                _425 = 0u;
            }
            else
            {
                _423 = _379;
                _424 = _372;
                _425 = 0u;
            }
            _426 = _423;
            _427 = _424;
            _428 = _425;
            break;
        } while(false);
        _429 = _426;
        _430 = _427;
        _431 = _428;
        _432 = _339;
    }
    else
    {
        _429 = _257;
        _430 = float4(0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.039999999105930328369140625f, 0.0f);
        _431 = 0u;
        _432 = _258;
    }
    float _482 = 0.0f;
    [branch]
    if ((asuint(Scene_GPUScene_GPUScenePrimitiveSceneData[_244].x) & 4u) != 0u)
    {
        float3 _450 = clamp(mad((View_View_ViewTilePosition * 2097152.0f) + _269, View_View_VolumetricLightmapWorldToUVScale, View_View_VolumetricLightmapWorldToUVAdd), 0.0f.xxx, 0.9900000095367431640625f.xxx) * View_View_VolumetricLightmapIndirectionTextureSize;
        float4 _461 = float4(View_VolumetricLightmapIndirectionTexture.Load(int4(int4(int(_450.x), int(_450.y), int(_450.z), 0).xyz, 0)));
        _482 = View_DirectionalLightShadowingBrickTexture.SampleLevel(View_SharedBilinearClampedSampler, (((_461.xyz * (View_View_VolumetricLightmapBrickSize + 1.0f)) + (frac(_450 / _461.w.xxx) * View_View_VolumetricLightmapBrickSize)) + 0.5f.xxx) * View_View_VolumetricLightmapBrickTexelSize, 0.0f).x;
    }
    else
    {
        _482 = 1.0f;
    }
    float4 _483 = float4(_482, 1.0f, 1.0f, 1.0f);
    bool _485 = all(bool4(_483.x == 0.0f.xxxx.x, _483.y == 0.0f.xxxx.y, _483.z == 0.0f.xxxx.z, _483.w == 0.0f.xxxx.w));
    bool _487 = all(bool4(_483.x == 1.0f.xxxx.x, _483.y == 1.0f.xxxx.y, _483.z == 1.0f.xxxx.z, _483.w == 1.0f.xxxx.w));
    uint _506 = 0u;
    if ((!_485) && (!_487))
    {
        _506 = _292 | 8u;
    }
    else
    {
        uint _504 = 0u;
        if (_485)
        {
            _504 = (_292 | 0u) | 16u;
        }
        else
        {
            uint _501 = 0u;
            if (_487)
            {
                _501 = (_292 | 0u) | 0u;
            }
            else
            {
                _501 = _292;
            }
            _504 = _501;
        }
        _506 = _504;
    }
    float3 _565 = 0.0f.xxx;
    [branch]
    if (View_View_OutOfBoundsMask > 0.0f)
    {
        float3 _537 = abs(((View_View_ViewTilePosition - Scene_GPUScene_GPUScenePrimitiveSceneData[_244 + 1u].xyz) * 2097152.0f) + (_269 - Scene_GPUScene_GPUScenePrimitiveSceneData[_244 + 18u].xyz));
        float3 _538 = float3(Scene_GPUScene_GPUScenePrimitiveSceneData[_244 + 17u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_244 + 24u].w, Scene_GPUScene_GPUScenePrimitiveSceneData[_244 + 25u].w) + 1.0f.xxx;
        float3 _564 = 0.0f.xxx;
        if (any(bool3(_537.x > _538.x, _537.y > _538.y, _537.z > _538.z)))
        {
            float3 _544 = View_View_ViewTilePosition * 0.57700002193450927734375f.xxx;
            float3 _545 = _269 * 0.57700002193450927734375f.xxx;
            float3 _560 = frac(mad((_545.x + _545.y) + _545.z, 0.00200000009499490261077880859375f, frac(((_544.x + _544.y) + _544.z) * 4194.30419921875f))).xxx;
            _564 = lerp(float3(1.0f, 1.0f, 0.0f), float3(0.0f, 1.0f, 1.0f), float3(bool3(_560.x > 0.5f.xxx.x, _560.y > 0.5f.xxx.y, _560.z > 0.5f.xxx.z)));
        }
        else
        {
            _564 = 0.0f.xxx;
        }
        _565 = _564;
    }
    else
    {
        _565 = 0.0f.xxx;
    }
    float4 _572 = OpaqueBasePass_ResolvedSceneDepthTexture.Load(int3(int3(int(gl_FragCoord.x), int(gl_FragCoord.y), 0).xy, 0));
    float _573 = _572.x;
    uint _575 = uint(mad(_263, 16777215.0f, 0.5f));
    uint _577 = uint(mad(_573, 16777215.0f, 0.5f));
    bool _586 = (OpaqueBasePass_OpaqueBasePass_Is24BitUnormDepthStencil != 0) ? ((_575 == _577) || (_575 == (_577 - 1u))) : (_263 == _573);
    uint _973 = 0u;
    uint _974 = 0u;
    uint _975 = 0u;
    float3 _976 = 0.0f.xxx;
    if (_586)
    {
        uint2 _589 = uint2(gl_FragCoord.xy);
        float3 _590[4] = { normalize(_432), 0.0f.xxx, 0.0f.xxx, 0.0f.xxx };
        float3 _595 = mad(clamp(_429.xyz, 0.0f.xxx, 1.0f.xxx), View_View_DiffuseOverrideParameter.www, View_View_DiffuseOverrideParameter.xyz);
        float4 _596 = float4(_595.x, _595.y, _595.z, _429.w);
        float3 _602 = (clamp(_430.xyz, 0.0f.xxx, 1.0f.xxx) * View_View_SpecularOverrideParameter.w) + View_View_SpecularOverrideParameter.xyz;
        float4 _603 = float4(_602.x, _602.y, _602.z, _430.w);
        float _611 = clamp(max(View_View_MinRoughness, mad(_429.w, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _596.w = _611;
        float _615 = clamp(max(View_View_MinRoughness, mad(_611, View_View_RoughnessOverrideParameter.y, View_View_RoughnessOverrideParameter.x)), 0.0f, 1.0f);
        _596.w = _615;
        _603.w = clamp(_430.w, -1.0f, 1.0f);
        bool _620 = any(bool3(true, true, true));
        float3 _649 = 0.0f.xxx;
        uint _650 = 0u;
        uint _651 = 0u;
        bool _652 = false;
        float3 _653 = 0.0f.xxx;
        float _654 = 0.0f;
        float3 _655 = 0.0f.xxx;
        float _656 = 0.0f;
        if (_620)
        {
            float3 _642 = 0.0f.xxx;
            do
            {
                if (true)
                {
                    _642 = lerp(_596.xyz, _603.xyz, clamp((max(_602.x, max(_602.y, _602.z)) - 0.07999999821186065673828125f) * 3.125f, 0.0f, 1.0f).xxx);
                    break;
                }
                _642 = 0.0f.xxx;
                break;
            } while(false);
            float3 _196[4] = _590;
            _649 = mad(0.0f.xxx, 1.0f.xxx, 0.0f.xxx);
            _650 = 1u;
            _651 = (_506 | 0u) | 0u;
            _652 = (true && all(bool3(true, true, true))) && true;
            _653 = _642 * 1.0f;
            _654 = _615;
            _655 = _196[0u] * 1.0f;
            _656 = 1.0f;
        }
        else
        {
            _649 = 0.0f.xxx;
            _650 = 0u;
            _651 = _506;
            _652 = true;
            _653 = 0.0f.xxx;
            _654 = 0.0f;
            _655 = 0.0f.xxx;
            _656 = 0.0f;
        }
        uint _657 = _620 ? 2u : 0u;
        bool _659 = _656 > 0.0f;
        bool3 _660 = _659.xxx;
        float3 _661 = normalize(_655);
        float3 _662 = float3(_660.x ? _661.x : 0.0f.xxx.x, _660.y ? _661.y : 0.0f.xxx.y, _660.z ? _661.z : 0.0f.xxx.z);
        float3 _666 = _653 / _656.xxx;
        uint _751 = 0u;
        uint _752 = 0u;
        if (true)
        {
            bool _671 = _652 && (uint(_620) == 1u);
            uint _750 = 0u;
            if (_671)
            {
                uint _687 = 0u;
                if (((_657 >> 6u) & 1u) != 0u)
                {
                    _687 = ((_431 & 32768u) != 0u) ? 3u : 1u;
                }
                else
                {
                    _687 = 0u;
                }
                uint _696 = 0u;
                if ((((_657 >> 9u) & 1u) != 0u) && (_615 == 0.0f))
                {
                    _696 = _687 | 4u;
                }
                else
                {
                    _696 = _687;
                }
                uint _703 = 0u;
                if (((_657 >> 10u) & 1u) != 0u)
                {
                    _703 = _696 | 8u;
                }
                else
                {
                    _703 = _696;
                }
                uint _705 = (_657 >> 2u) & 7u;
                uint _710 = 0u;
                if (_705 == 4u)
                {
                    _710 = _703 | 16u;
                }
                else
                {
                    _710 = _703;
                }
                uint _715 = 0u;
                if (_705 == 1u)
                {
                    _715 = _710 | 32u;
                }
                else
                {
                    _715 = _710;
                }
                uint _720 = 0u;
                if (_705 == 3u)
                {
                    _720 = _715 | 64u;
                }
                else
                {
                    _720 = _715;
                }
                uint _721 = _720 & 2u;
                uint _749 = 0u;
                if ((_721 == 2u) || (_721 == 3u))
                {
                    _749 = 0u;
                }
                else
                {
                    uint _748 = 0u;
                    if ((_720 & 4u) == 4u)
                    {
                        _748 = 0u;
                    }
                    else
                    {
                        uint _747 = 0u;
                        if ((_720 & 40u) == 40u)
                        {
                            _747 = 0u;
                        }
                        else
                        {
                            uint _746 = 0u;
                            if ((_720 & 32u) == 32u)
                            {
                                _746 = 0u;
                            }
                            else
                            {
                                _746 = ((_720 & 72u) == 64u) ? 0u : 0u;
                            }
                            _747 = _746;
                        }
                        _748 = _747;
                    }
                    _749 = _748;
                }
                _750 = _749;
            }
            else
            {
                _750 = 0u;
            }
            _751 = _750;
            _752 = (_651 & 4294967288u) | ((_671 ? 1u : (_671 ? 2u : 3u)) & 7u);
        }
        else
        {
            _751 = 0u;
            _752 = _651;
        }
        float _759 = 0.0f;
        float2 _760 = 0.0f.xx;
        [branch]
        if (_620)
        {
            float2 _757 = 0.0f.xx;
            _757.x = max(1.0f.xxx, 0.99960005283355712890625f.xxx).y;
            _757.y = 0.0f;
            _759 = 1.0f;
            _760 = _757;
        }
        else
        {
            _759 = 0.0f;
            _760 = 0.0f.xx;
        }
        float2 _763 = _760 * (1.0f / max(1.0f, _759));
        uint _907 = 0u;
        uint _908 = 0u;
        [branch]
        if (_620)
        {
            float _782 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f)))) - 0.5f;
            float _783 = _782 * 0.0078740157186985015869140625f;
            float3 _785 = float3(_783, _783, _782 * 0.01587301678955554962158203125f);
            float3 _786 = clamp(_596.xyz, 0.0f.xxx, 1.0f.xxx);
            float _787 = _786.x;
            float _796 = 0.0f;
            do
            {
                if (_787 < 0.00313066993840038776397705078125f)
                {
                    _796 = _787 * 12.9200000762939453125f;
                    break;
                }
                _796 = mad(pow(_787, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _797 = _786.y;
            float _806 = 0.0f;
            do
            {
                if (_797 < 0.00313066993840038776397705078125f)
                {
                    _806 = _797 * 12.9200000762939453125f;
                    break;
                }
                _806 = mad(pow(_797, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _807 = _786.z;
            float _816 = 0.0f;
            do
            {
                if (_807 < 0.00313066993840038776397705078125f)
                {
                    _816 = _807 * 12.9200000762939453125f;
                    break;
                }
                _816 = mad(pow(_807, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _817 = float3(_796, _806, _816);
            float3 _823 = clamp(mad(_785, float3(min((asuint(_817) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _817), 0.0f.xxx, 1.0f.xxx);
            uint _837 = ((uint(_823.x * 127.0f) << 0u) | (uint(_823.y * 127.0f) << 7u)) | (uint(_823.z * 63.0f) << 14u);
            float3 _842 = clamp(_603.xyz, 0.0f.xxx, 1.0f.xxx);
            float _843 = _842.x;
            float _852 = 0.0f;
            do
            {
                if (_843 < 0.00313066993840038776397705078125f)
                {
                    _852 = _843 * 12.9200000762939453125f;
                    break;
                }
                _852 = mad(pow(_843, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _853 = _842.y;
            float _862 = 0.0f;
            do
            {
                if (_853 < 0.00313066993840038776397705078125f)
                {
                    _862 = _853 * 12.9200000762939453125f;
                    break;
                }
                _862 = mad(pow(_853, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float _863 = _842.z;
            float _872 = 0.0f;
            do
            {
                if (_863 < 0.00313066993840038776397705078125f)
                {
                    _872 = _863 * 12.9200000762939453125f;
                    break;
                }
                _872 = mad(pow(_863, 0.4166666567325592041015625f), 1.05499994754791259765625f, -0.054999999701976776123046875f);
                break;
            } while(false);
            float3 _873 = float3(_852, _862, _872);
            float3 _879 = clamp(mad(_785, float3(min((asuint(_873) & uint3(2147483647u, 2147483647u, 2147483647u)), uint3(1u, 1u, 1u))), _873), 0.0f.xxx, 1.0f.xxx);
            _907 = (((uint(_879.x * 127.0f) << 0u) | (uint(_879.y * 127.0f) << 7u)) | (uint(_879.z * 63.0f) << 14u)) | ((_837 & 4095u) << 20u);
            _908 = ((0u | ((((_752 & 4294902015u) | ((uint(min(255.0f, mad(log2(mad(_763.y * _763.x, View_View_PreExposure, 0.00390625f)), 0.0625f, 0.5f) * 255.0f)) & 255u) << 8u)) & 65535u) << 0u)) & 65535u) | (((((_837 >> 12u) & 255u) << 8u) | uint(clamp(_615, 0.0f, 1.0f) * 255.0f)) << 16u);
        }
        else
        {
            _907 = 0u;
            _908 = 0u;
        }
        float2 _913 = _662.xy / dot(1.0f.xxx, abs(_662)).xx;
        float3 _931 = 0.0f.xxx;
        if (_662.z <= 0.0f)
        {
            float2 _922 = _913.xy;
            bool2 _923 = bool2(_922.x >= 0.0f.xx.x, _922.y >= 0.0f.xx.y);
            float2 _929 = (1.0f.xx - abs(_913.yx)) * float2(_923.x ? 1.0f : (-1.0f), _923.y ? 1.0f : (-1.0f));
            _931 = float3(_929.x, _929.y, _662.z);
        }
        else
        {
            _931 = float3(_913.x, _913.y, _662.z);
        }
        uint2 _936 = uint2(clamp((_931.xy * 1023.0f) + 1024.0f.xx, 0.0f.xx, 2047.0f.xx));
        uint _948 = _751 & 3u;
        [branch]
        if (_948 != 0u)
        {
            uint _955 = uint(OpaqueBasePass_OpaqueBasePass_Strata_FirstSliceStoringStrataSSSDataWithoutMRT);
            uint _956 = _589.x;
            OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_956, _589.y, _955)] = _751;
            if ((_948 == 2u) || (_948 == 3u))
            {
                OpaqueBasePass_Strata_MaterialTextureArrayUAVWithoutRTs[uint3(_956, _589.y, _955 + 1u)] = 0u;
            }
        }
        _973 = (((_936.x | (_936.y << 11u)) << 10u) | (uint(clamp(_659 ? (_654 / _656) : 0.0f, 0.0f, 1.0f) * 255.0f) << 2u)) | _650;
        _974 = _907;
        _975 = _908;
        _976 = lerp(0.0f.xxx, float3(_660.x ? _666.x : 0.0f.xxx.x, _660.y ? _666.y : 0.0f.xxx.y, _660.z ? _666.z : 0.0f.xxx.z), View_View_UnlitViewmodeMask.xxx) + (_649 + _565);
    }
    else
    {
        _973 = 0u;
        _974 = 0u;
        _975 = 0u;
        _976 = 0.0f.xxx;
    }
    float4 _982 = float4(_976 * 1.0f, 0.0f);
    float4 _989 = 0.0f.xxxx;
    if (View_View_bCheckerboardSubsurfaceProfileRendering == 0.0f)
    {
        float4 _988 = _982;
        _988.w = 0.0f;
        _989 = _988;
    }
    else
    {
        _989 = _982;
    }
    float4 _990 = 0.0f.xxxx;
    _990.x = _482;
    _990.y = 1.0f;
    _990.z = 1.0f;
    _990.w = 1.0f;
    float4 _996 = _989 * View_View_PreExposure;
    float3 _998 = min(_996.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_998.x, _998.y, _998.z, _996.w);
    out_var_SV_Target1 = _990;
    out_var_SV_Target2 = _975;
    out_var_SV_Target3 = _974;
    out_var_SV_Target4 = _586 ? 0u : 0u;
    out_var_SV_Target5 = _973;
    gl_FragDepth = _263;
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
