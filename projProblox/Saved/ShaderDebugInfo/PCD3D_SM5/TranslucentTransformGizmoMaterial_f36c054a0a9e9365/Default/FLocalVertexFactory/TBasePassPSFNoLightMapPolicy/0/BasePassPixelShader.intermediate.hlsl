#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float _90 = 0.0f;

cbuffer View
{
    row_major float4x4 View_View_RelativeWorldToClip : packoffset(c4);
    row_major float4x4 View_View_SVPositionToTranslatedWorld : packoffset(c44);
    float3 View_View_ViewTilePosition : packoffset(c60);
    float3 View_View_MatrixTilePosition : packoffset(c61);
    float3 View_View_RelativePreViewTranslation : packoffset(c72);
    int View_View_NumSceneColorMSAASamples : packoffset(c132);
    float View_View_PreExposure : packoffset(c132.z);
    float View_View_OneOverPreExposure : packoffset(c132.w);
    float4 View_View_NormalOverrideParameter : packoffset(c135);
    float3 View_View_VolumetricFogInvGridSize : packoffset(c225);
    float3 View_View_VolumetricFogGridZParams : packoffset(c226);
    float2 View_View_VolumetricFogScreenToResourceUV : packoffset(c229);
    float2 View_View_VolumetricFogUVMax : packoffset(c229.z);
};

cbuffer TranslucentBasePass
{
    float TranslucentBasePass_TranslucentBasePass_Shared_Fog_ApplyVolumetricFog : packoffset(c124.w);
    float TranslucentBasePass_TranslucentBasePass_Shared_Fog_VolumetricFogStartDistance : packoffset(c125);
};

StructuredBuffer<float4> TranslucentBasePass_EyeAdaptationBuffer;
cbuffer Material
{
    float4 Material_Material_PreshaderBuffer[5] : packoffset(c0);
};

SamplerState View_SharedBilinearClampedSampler;
Texture3D<float4> TranslucentBasePass_Shared_Fog_IntegratedLightScattering;

static float4 gl_FragCoord;
static int gl_SampleMaskIn;
static int gl_SampleMask;
static float4 in_var_TEXCOORD10_centroid;
static float4 in_var_TEXCOORD11_centroid;
static uint in_var_PRIMITIVE_ID;
static float4 in_var_TEXCOORD7;
static float3 in_var_TEXCOORD9;
static float4 out_var_SV_Target0;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float4 in_var_TEXCOORD7 : TEXCOORD7;
    float3 in_var_TEXCOORD9 : TEXCOORD9;
    float4 gl_FragCoord : SV_Position;
    uint gl_SampleMaskIn : SV_Coverage;
};

struct SPIRV_Cross_Output
{
    float4 out_var_SV_Target0 : SV_Target0;
    uint gl_SampleMask : SV_Coverage;
};

void frag_main()
{
    float4 _133 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    bool _170 = TranslucentBasePass_TranslucentBasePass_Shared_Fog_ApplyVolumetricFog > 0.0f;
    float4 _253 = 0.0f.xxxx;
    if (_170)
    {
        float4 _188 = mul(((float4(View_View_ViewTilePosition, 0.0f) + float4(-View_View_MatrixTilePosition, 0.0f)) * 2097152.0f) + float4((_133.xyz / _133.w.xxx) - View_View_RelativePreViewTranslation, 1.0f), View_View_RelativeWorldToClip);
        float _189 = _188.w;
        float4 _235 = 0.0f.xxxx;
        float _236 = 0.0f;
        if (_170)
        {
            float4 _229 = TranslucentBasePass_Shared_Fog_IntegratedLightScattering.SampleLevel(View_SharedBilinearClampedSampler, min(float3(mad((_188.xy / _189.xx).xy, float2(0.5f, -0.5f), 0.5f.xx), (log2(mad(_189, View_View_VolumetricFogGridZParams.x, View_View_VolumetricFogGridZParams.y)) * View_View_VolumetricFogGridZParams.z) * View_View_VolumetricFogInvGridSize.z) * float3(View_View_VolumetricFogScreenToResourceUV, 1.0f), float3(View_View_VolumetricFogUVMax, 1.0f)), 0.0f);
            float3 _233 = _229.xyz * View_View_OneOverPreExposure;
            _235 = float4(_233.x, _233.y, _233.z, _229.w);
            _236 = TranslucentBasePass_TranslucentBasePass_Shared_Fog_VolumetricFogStartDistance;
        }
        else
        {
            _235 = float4(0.0f, 0.0f, 0.0f, 1.0f);
            _236 = 0.0f;
        }
        float4 _241 = lerp(float4(0.0f, 0.0f, 0.0f, 1.0f), _235, clamp(((float4(_90, _90, _90, 1.0f) * (1.0f / gl_FragCoord.w)).w - _236) * 100000000.0f, 0.0f, 1.0f).xxxx);
        float _244 = _241.w;
        _253 = float4(_241.xyz + (in_var_TEXCOORD7.xyz * _244), _244 * in_var_TEXCOORD7.w);
    }
    else
    {
        _253 = in_var_TEXCOORD7;
    }
    float4 _263 = float4((_253.xyz * Material_Material_PreshaderBuffer[3].w) + (max(((Material_Material_PreshaderBuffer[3].xyz * mad(1.0f + dot(normalize(float3(-1.0f, -1.5f, 3.0f)), normalize(mul(normalize((float3(0.0f, 0.0f, 1.0f) * View_View_NormalOverrideParameter.w) + View_View_NormalOverrideParameter.xyz), float3x3(in_var_TEXCOORD10_centroid.xyz, cross(in_var_TEXCOORD11_centroid.xyz, in_var_TEXCOORD10_centroid.xyz) * in_var_TEXCOORD11_centroid.w, in_var_TEXCOORD11_centroid.xyz))) * 1.0f), 0.5f, 0.20000000298023223876953125f).xxx) * exp((-1.0f) * log(TranslucentBasePass_EyeAdaptationBuffer[0u].x)).xxx) * Material_Material_PreshaderBuffer[3].w, 0.0f.xxx) * _253.w), _90);
    _263.w = 1.0f;
    float4 _275 = 0.0f.xxxx;
    uint _276 = 0u;
    if (View_View_NumSceneColorMSAASamples > 1)
    {
        _275 = _263 * (float(View_View_NumSceneColorMSAASamples) * 0.25f);
        _276 = gl_SampleMaskIn[0] & 15u;
    }
    else
    {
        _275 = _263;
        _276 = gl_SampleMaskIn[0];
    }
    float3 _282 = min((_275.xyz * View_View_PreExposure).xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_282.x, _282.y, _282.z, _275.w);
    gl_SampleMask = int(_276);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_FragCoord = stage_input.gl_FragCoord;
    gl_FragCoord.w = 1.0 / gl_FragCoord.w;
    gl_SampleMaskIn = stage_input.gl_SampleMaskIn;
    in_var_TEXCOORD10_centroid = stage_input.in_var_TEXCOORD10_centroid;
    in_var_TEXCOORD11_centroid = stage_input.in_var_TEXCOORD11_centroid;
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    in_var_TEXCOORD7 = stage_input.in_var_TEXCOORD7;
    in_var_TEXCOORD9 = stage_input.in_var_TEXCOORD9;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_SampleMask = gl_SampleMask;
    stage_output.out_var_SV_Target0 = out_var_SV_Target0;
    return stage_output;
}
