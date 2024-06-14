#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static uint _80 = 0u;
static float _85 = 0.0f;

cbuffer View
{
    row_major float4x4 View_View_SVPositionToTranslatedWorld : packoffset(c44);
    float3 View_View_ViewTilePosition : packoffset(c60);
    float4 View_View_InvDeviceZToWorldZTransform : packoffset(c67);
    float3 View_View_RelativePreViewTranslation : packoffset(c72);
    float4 View_View_ViewRectMin : packoffset(c124);
    float4 View_View_ViewSizeAndInvSize : packoffset(c125);
    uint View_View_StateFrameIndexMod8 : packoffset(c141.y);
};

cbuffer LumenTranslucencyRadianceCacheMarkPass
{
    float4 LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[6] : packoffset(c8);
    uint LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark : packoffset(c20);
    uint LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_NumRadianceProbeClipmapsForMark : packoffset(c20.y);
    float LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark : packoffset(c20.z);
    float2 LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_ViewportUVToHZBBufferUV : packoffset(c21.z);
    float LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_HZBMipLevel : packoffset(c22);
};

SamplerState View_SharedPointClampedSampler;
RWTexture3D<uint> LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture;
Texture2D<float4> LumenTranslucencyRadianceCacheMarkPass_FurthestHZBTexture;

static float4 gl_FragCoord;
static float4 in_var_TEXCOORD10_centroid;
static float4 in_var_TEXCOORD11_centroid;
static float4 in_var_COLOR0;
static float4 in_var_TEXCOORD0[2];
static uint in_var_PRIMITIVE_ID;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    float4 in_var_COLOR0 : COLOR0;
    float4 in_var_TEXCOORD0[2] : TEXCOORD0;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float4 gl_FragCoord : SV_Position;
};

void frag_main()
{
    uint _132 = 0u;
    float4 _112 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _119 = (View_View_ViewTilePosition * 2097152.0f) + ((_112.xyz / _112.w.xxx) - View_View_RelativePreViewTranslation);
    float _128 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f))));
    uint _178 = 0u;
    do
    {
        _132 = LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_NumRadianceProbeClipmapsForMark;
        uint _174 = 0u;
        uint _175 = 0u;
        bool _176 = false;
        uint _134 = 0u;
        for (;;)
        {
            if (_134 < _132)
            {
                float3 _146 = (_119 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_134].w) + LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_134].xyz;
                float3 _151 = clamp((_146 - 0.5f.xxx) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark, 0.0f.xxx, 1.0f.xxx);
                float3 _159 = clamp(((float(LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark).xxx - 0.5f.xxx) - _146) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark, 0.0f.xxx, 1.0f.xxx);
                if (min(min(_151.x, min(_151.y, _151.z)), min(_159.x, min(_159.y, _159.z))) > _128)
                {
                    _174 = _134;
                    _175 = _134;
                    _176 = true;
                    break;
                }
                _134++;
                continue;
            }
            else
            {
                _174 = _80;
                _175 = _132;
                _176 = false;
                break;
            }
        }
        if (_176)
        {
            _178 = _174;
            break;
        }
        _178 = _175;
        break;
    } while(false);
    bool _179 = _178 < _132;
    if (_179)
    {
        float4 _191 = LumenTranslucencyRadianceCacheMarkPass_FurthestHZBTexture.SampleLevel(View_SharedPointClampedSampler, ((gl_FragCoord.xy - View_View_ViewRectMin.xy) * View_View_ViewSizeAndInvSize.zw) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_ViewportUVToHZBBufferUV, LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_HZBMipLevel);
        float _192 = _191.x;
        if ((float4(_85, _85, _85, 1.0f) * (1.0f / gl_FragCoord.w)).w < (mad(_192, View_View_InvDeviceZToWorldZTransform.x, View_View_InvDeviceZToWorldZTransform.y) + (1.0f / mad(_192, View_View_InvDeviceZToWorldZTransform.z, -View_View_InvDeviceZToWorldZTransform.w))))
        {
            int3 _219 = int3(floor(((_119 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_178].w) + LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_178].xyz) - 0.5f.xxx));
            int3 _225 = int(LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark).xxx;
            if ((all(bool3(_219.x >= int3(0, 0, 0).x, _219.y >= int3(0, 0, 0).y, _219.z >= int3(0, 0, 0).z)) && all(bool3(_219.x < _225.x, _219.y < _225.y, _219.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_219 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _238 = _219 + int3(0, 0, 1);
            if ((all(bool3(_238.x >= int3(0, 0, 0).x, _238.y >= int3(0, 0, 0).y, _238.z >= int3(0, 0, 0).z)) && all(bool3(_238.x < _225.x, _238.y < _225.y, _238.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_238 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _253 = _219 + int3(0, 1, 0);
            if ((all(bool3(_253.x >= int3(0, 0, 0).x, _253.y >= int3(0, 0, 0).y, _253.z >= int3(0, 0, 0).z)) && all(bool3(_253.x < _225.x, _253.y < _225.y, _253.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_253 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _268 = _219 + int3(0, 1, 1);
            if ((all(bool3(_268.x >= int3(0, 0, 0).x, _268.y >= int3(0, 0, 0).y, _268.z >= int3(0, 0, 0).z)) && all(bool3(_268.x < _225.x, _268.y < _225.y, _268.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_268 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _283 = _219 + int3(1, 0, 0);
            if ((all(bool3(_283.x >= int3(0, 0, 0).x, _283.y >= int3(0, 0, 0).y, _283.z >= int3(0, 0, 0).z)) && all(bool3(_283.x < _225.x, _283.y < _225.y, _283.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_283 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _298 = _219 + int3(1, 0, 1);
            if ((all(bool3(_298.x >= int3(0, 0, 0).x, _298.y >= int3(0, 0, 0).y, _298.z >= int3(0, 0, 0).z)) && all(bool3(_298.x < _225.x, _298.y < _225.y, _298.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_298 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _313 = _219 + int3(1, 1, 0);
            if ((all(bool3(_313.x >= int3(0, 0, 0).x, _313.y >= int3(0, 0, 0).y, _313.z >= int3(0, 0, 0).z)) && all(bool3(_313.x < _225.x, _313.y < _225.y, _313.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_313 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _328 = _219 + int3(1, 1, 1);
            if ((all(bool3(_328.x >= int3(0, 0, 0).x, _328.y >= int3(0, 0, 0).y, _328.z >= int3(0, 0, 0).z)) && all(bool3(_328.x < _225.x, _328.y < _225.y, _328.z < _225.z))) && _179)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_328 + int3(int(_178 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
        }
    }
}

[earlydepthstencil]
void main(SPIRV_Cross_Input stage_input)
{
    gl_FragCoord = stage_input.gl_FragCoord;
    gl_FragCoord.w = 1.0 / gl_FragCoord.w;
    in_var_TEXCOORD10_centroid = stage_input.in_var_TEXCOORD10_centroid;
    in_var_TEXCOORD11_centroid = stage_input.in_var_TEXCOORD11_centroid;
    in_var_COLOR0 = stage_input.in_var_COLOR0;
    in_var_TEXCOORD0 = stage_input.in_var_TEXCOORD0;
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    frag_main();
}
