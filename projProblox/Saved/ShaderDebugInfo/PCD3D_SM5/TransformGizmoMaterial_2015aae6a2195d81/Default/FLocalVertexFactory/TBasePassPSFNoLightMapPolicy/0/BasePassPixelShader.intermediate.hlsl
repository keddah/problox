#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
cbuffer View
{
    int View_View_NumSceneColorMSAASamples : packoffset(c132);
    float View_View_PreExposure : packoffset(c132.z);
    float4 View_View_NormalOverrideParameter : packoffset(c135);
    float View_View_GameTime : packoffset(c139.y);
    float View_View_MaterialTextureMipBias : packoffset(c140);
};

StructuredBuffer<float4> OpaqueBasePass_EyeAdaptationBuffer;
cbuffer Material
{
    float4 Material_Material_PreshaderBuffer[4] : packoffset(c0);
};

Texture2D<float4> Material_Texture2D_0;
SamplerState Material_Texture2D_0Sampler;

static int gl_SampleMaskIn;
static int gl_SampleMask;
static float4 in_var_TEXCOORD10_centroid;
static float4 in_var_TEXCOORD11_centroid;
static float4 in_var_TEXCOORD0[1];
static uint in_var_PRIMITIVE_ID;
static float3 in_var_TEXCOORD9;
static float4 out_var_SV_Target0;
static uint out_var_SV_Target1;
static uint out_var_SV_Target2;
static uint out_var_SV_Target3;
static uint out_var_SV_Target4;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    float4 in_var_TEXCOORD0[1] : TEXCOORD0;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float3 in_var_TEXCOORD9 : TEXCOORD9;
    uint gl_SampleMaskIn : SV_Coverage;
};

struct SPIRV_Cross_Output
{
    float4 out_var_SV_Target0 : SV_Target0;
    uint out_var_SV_Target1 : SV_Target1;
    uint out_var_SV_Target2 : SV_Target2;
    uint out_var_SV_Target3 : SV_Target3;
    uint out_var_SV_Target4 : SV_Target4;
    uint gl_SampleMask : SV_Coverage;
};

void frag_main()
{
    float4 _147 = float4(max((mad(Material_Texture2D_0.SampleBias(Material_Texture2D_0Sampler, mad(float2(in_var_TEXCOORD0[0].x, in_var_TEXCOORD0[0].y), float2(1.0f, 0.0f), float2(0.0f, View_View_GameTime * (-0.20000000298023223876953125f))), View_View_MaterialTextureMipBias).xyz * 0.100000001490116119384765625f.xxx, Material_Material_PreshaderBuffer[3].xyz, Material_Material_PreshaderBuffer[3].xyz) * mad(1.0f + dot(normalize(float3(-1.0f, -1.5f, 3.0f)), normalize(mul(normalize((float3(0.0f, 0.0f, 1.0f) * View_View_NormalOverrideParameter.w) + View_View_NormalOverrideParameter.xyz), float3x3(in_var_TEXCOORD10_centroid.xyz, cross(in_var_TEXCOORD11_centroid.xyz, in_var_TEXCOORD10_centroid.xyz) * in_var_TEXCOORD11_centroid.w, in_var_TEXCOORD11_centroid.xyz))) * 1.0f), 0.5f, 0.20000000298023223876953125f).xxx) * exp((-1.0f) * log(OpaqueBasePass_EyeAdaptationBuffer[0u].x)).xxx, 0.0f.xxx) * 1.0f, 0.0f);
    _147.w = 1.0f;
    float4 _159 = 0.0f.xxxx;
    uint _160 = 0u;
    if (View_View_NumSceneColorMSAASamples > 1)
    {
        _159 = _147 * (float(View_View_NumSceneColorMSAASamples) * 0.25f);
        _160 = gl_SampleMaskIn[0] & 15u;
    }
    else
    {
        _159 = _147;
        _160 = gl_SampleMaskIn[0];
    }
    float4 _163 = _159 * View_View_PreExposure;
    float3 _165 = min(_163.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_165.x, _165.y, _165.z, _163.w);
    out_var_SV_Target1 = 0u;
    out_var_SV_Target2 = 0u;
    out_var_SV_Target3 = 0u;
    out_var_SV_Target4 = 0u;
    gl_SampleMask = int(_160);
}

[earlydepthstencil]
SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_SampleMaskIn = stage_input.gl_SampleMaskIn;
    in_var_TEXCOORD10_centroid = stage_input.in_var_TEXCOORD10_centroid;
    in_var_TEXCOORD11_centroid = stage_input.in_var_TEXCOORD11_centroid;
    in_var_TEXCOORD0 = stage_input.in_var_TEXCOORD0;
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    in_var_TEXCOORD9 = stage_input.in_var_TEXCOORD9;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_SampleMask = gl_SampleMask;
    stage_output.out_var_SV_Target0 = out_var_SV_Target0;
    stage_output.out_var_SV_Target1 = out_var_SV_Target1;
    stage_output.out_var_SV_Target2 = out_var_SV_Target2;
    stage_output.out_var_SV_Target3 = out_var_SV_Target3;
    stage_output.out_var_SV_Target4 = out_var_SV_Target4;
    return stage_output;
}
