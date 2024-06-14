#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static uint _76 = 0u;
static float _81 = 0.0f;

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
static uint in_var_PRIMITIVE_ID;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float4 gl_FragCoord : SV_Position;
};

void frag_main()
{
    uint _128 = 0u;
    float4 _108 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _115 = (View_View_ViewTilePosition * 2097152.0f) + ((_108.xyz / _108.w.xxx) - View_View_RelativePreViewTranslation);
    float _124 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f))));
    uint _174 = 0u;
    do
    {
        _128 = LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_NumRadianceProbeClipmapsForMark;
        uint _170 = 0u;
        uint _171 = 0u;
        bool _172 = false;
        uint _130 = 0u;
        for (;;)
        {
            if (_130 < _128)
            {
                float3 _142 = (_115 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_130].w) + LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_130].xyz;
                float3 _147 = clamp((_142 - 0.5f.xxx) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark, 0.0f.xxx, 1.0f.xxx);
                float3 _155 = clamp(((float(LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark).xxx - 0.5f.xxx) - _142) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark, 0.0f.xxx, 1.0f.xxx);
                if (min(min(_147.x, min(_147.y, _147.z)), min(_155.x, min(_155.y, _155.z))) > _124)
                {
                    _170 = _130;
                    _171 = _130;
                    _172 = true;
                    break;
                }
                _130++;
                continue;
            }
            else
            {
                _170 = _76;
                _171 = _128;
                _172 = false;
                break;
            }
        }
        if (_172)
        {
            _174 = _170;
            break;
        }
        _174 = _171;
        break;
    } while(false);
    bool _175 = _174 < _128;
    if (_175)
    {
        float4 _187 = LumenTranslucencyRadianceCacheMarkPass_FurthestHZBTexture.SampleLevel(View_SharedPointClampedSampler, ((gl_FragCoord.xy - View_View_ViewRectMin.xy) * View_View_ViewSizeAndInvSize.zw) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_ViewportUVToHZBBufferUV, LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_HZBMipLevel);
        float _188 = _187.x;
        if ((float4(_81, _81, _81, 1.0f) * (1.0f / gl_FragCoord.w)).w < (mad(_188, View_View_InvDeviceZToWorldZTransform.x, View_View_InvDeviceZToWorldZTransform.y) + (1.0f / mad(_188, View_View_InvDeviceZToWorldZTransform.z, -View_View_InvDeviceZToWorldZTransform.w))))
        {
            int3 _215 = int3(floor(((_115 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_174].w) + LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_174].xyz) - 0.5f.xxx));
            int3 _221 = int(LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark).xxx;
            if ((all(bool3(_215.x >= int3(0, 0, 0).x, _215.y >= int3(0, 0, 0).y, _215.z >= int3(0, 0, 0).z)) && all(bool3(_215.x < _221.x, _215.y < _221.y, _215.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_215 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _234 = _215 + int3(0, 0, 1);
            if ((all(bool3(_234.x >= int3(0, 0, 0).x, _234.y >= int3(0, 0, 0).y, _234.z >= int3(0, 0, 0).z)) && all(bool3(_234.x < _221.x, _234.y < _221.y, _234.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_234 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _249 = _215 + int3(0, 1, 0);
            if ((all(bool3(_249.x >= int3(0, 0, 0).x, _249.y >= int3(0, 0, 0).y, _249.z >= int3(0, 0, 0).z)) && all(bool3(_249.x < _221.x, _249.y < _221.y, _249.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_249 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _264 = _215 + int3(0, 1, 1);
            if ((all(bool3(_264.x >= int3(0, 0, 0).x, _264.y >= int3(0, 0, 0).y, _264.z >= int3(0, 0, 0).z)) && all(bool3(_264.x < _221.x, _264.y < _221.y, _264.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_264 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _279 = _215 + int3(1, 0, 0);
            if ((all(bool3(_279.x >= int3(0, 0, 0).x, _279.y >= int3(0, 0, 0).y, _279.z >= int3(0, 0, 0).z)) && all(bool3(_279.x < _221.x, _279.y < _221.y, _279.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_279 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _294 = _215 + int3(1, 0, 1);
            if ((all(bool3(_294.x >= int3(0, 0, 0).x, _294.y >= int3(0, 0, 0).y, _294.z >= int3(0, 0, 0).z)) && all(bool3(_294.x < _221.x, _294.y < _221.y, _294.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_294 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _309 = _215 + int3(1, 1, 0);
            if ((all(bool3(_309.x >= int3(0, 0, 0).x, _309.y >= int3(0, 0, 0).y, _309.z >= int3(0, 0, 0).z)) && all(bool3(_309.x < _221.x, _309.y < _221.y, _309.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_309 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _324 = _215 + int3(1, 1, 1);
            if ((all(bool3(_324.x >= int3(0, 0, 0).x, _324.y >= int3(0, 0, 0).y, _324.z >= int3(0, 0, 0).z)) && all(bool3(_324.x < _221.x, _324.y < _221.y, _324.z < _221.z))) && _175)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_324 + int3(int(_174 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
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
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    frag_main();
}
