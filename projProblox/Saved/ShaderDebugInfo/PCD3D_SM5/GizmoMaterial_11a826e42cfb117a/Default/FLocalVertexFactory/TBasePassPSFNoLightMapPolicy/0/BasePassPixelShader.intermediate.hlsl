#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
cbuffer View
{
    row_major float4x4 View_View_ViewToClip : packoffset(c28);
    row_major float4x4 View_View_SVPositionToTranslatedWorld : packoffset(c44);
    float3 View_View_ViewForward : packoffset(c62);
    int View_View_NumSceneColorMSAASamples : packoffset(c132);
    float View_View_PreExposure : packoffset(c132.z);
};

cbuffer Material
{
    float4 Material_Material_PreshaderBuffer[4] : packoffset(c0);
};


static float4 gl_FragCoord;
static int gl_SampleMaskIn;
static int gl_SampleMask;
static float4 in_var_TEXCOORD10_centroid;
static float4 in_var_TEXCOORD11_centroid;
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
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float3 in_var_TEXCOORD9 : TEXCOORD9;
    float4 gl_FragCoord : SV_Position;
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
    float4 _80 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _93 = 0.0f.xxx;
    if (View_View_ViewToClip[3].w >= 1.0f)
    {
        _93 = -View_View_ViewForward;
    }
    else
    {
        _93 = normalize(-(_80.xyz / _80.w.xxx));
    }
    float _95 = clamp(dot(in_var_TEXCOORD11_centroid.xyz, _93), 0.0f, 1.0f);
    float4 _111 = float4(max(mad((_95 <= 0.0f) ? 0.0f : pow(_95, 20.0f), 0.5f, lerp(0.5f, 1.0f, _95)).xxx * Material_Material_PreshaderBuffer[3].xyz, 0.0f.xxx) * 1.0f, 0.0f);
    _111.w = 1.0f;
    float4 _123 = 0.0f.xxxx;
    uint _124 = 0u;
    if (View_View_NumSceneColorMSAASamples > 1)
    {
        _123 = _111 * (float(View_View_NumSceneColorMSAASamples) * 0.25f);
        _124 = gl_SampleMaskIn[0] & 15u;
    }
    else
    {
        _123 = _111;
        _124 = gl_SampleMaskIn[0];
    }
    float4 _127 = _123 * View_View_PreExposure;
    float3 _129 = min(_127.xyz, 32256.0f.xxx);
    out_var_SV_Target0 = float4(_129.x, _129.y, _129.z, _127.w);
    out_var_SV_Target1 = 0u;
    out_var_SV_Target2 = 0u;
    out_var_SV_Target3 = 0u;
    out_var_SV_Target4 = 0u;
    gl_SampleMask = int(_124);
}

[earlydepthstencil]
SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_FragCoord = stage_input.gl_FragCoord;
    gl_FragCoord.w = 1.0 / gl_FragCoord.w;
    gl_SampleMaskIn = stage_input.gl_SampleMaskIn;
    in_var_TEXCOORD10_centroid = stage_input.in_var_TEXCOORD10_centroid;
    in_var_TEXCOORD11_centroid = stage_input.in_var_TEXCOORD11_centroid;
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
