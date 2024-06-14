#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static float _33 = 0.0f;

float4 HitProxyId;


static float4 gl_FragCoord;
static float gl_FragDepth;
static float4 in_var_TEXCOORD10_centroid;
static float4 in_var_TEXCOORD11_centroid;
static uint in_var_PRIMITIVE_ID;
static float4 in_var_TEXCOORD6;
static float3 in_var_TEXCOORD7;
static float4 out_var_SV_Target0;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float4 in_var_TEXCOORD6 : TEXCOORD6;
    float3 in_var_TEXCOORD7 : TEXCOORD7;
    float4 gl_FragCoord : SV_Position;
};

struct SPIRV_Cross_Output
{
    float4 out_var_SV_Target0 : SV_Target0;
    float gl_FragDepth : SV_DepthLessEqual;
};

void frag_main()
{
    float4 _40 = float4(_33, _33, gl_FragCoord.z, 1.0f) * (1.0f / gl_FragCoord.w);
    gl_FragDepth = min(_40.z / (_40.w + 0.651405632495880126953125f), gl_FragCoord.z);
    out_var_SV_Target0 = HitProxyId;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_FragCoord = stage_input.gl_FragCoord;
    gl_FragCoord.w = 1.0 / gl_FragCoord.w;
    in_var_TEXCOORD10_centroid = stage_input.in_var_TEXCOORD10_centroid;
    in_var_TEXCOORD11_centroid = stage_input.in_var_TEXCOORD11_centroid;
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    in_var_TEXCOORD6 = stage_input.in_var_TEXCOORD6;
    in_var_TEXCOORD7 = stage_input.in_var_TEXCOORD7;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_FragDepth = gl_FragDepth;
    stage_output.out_var_SV_Target0 = out_var_SV_Target0;
    return stage_output;
}
