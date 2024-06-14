#pragma warning(disable : 3571) // pow() intrinsic suggested to be used with abs()
static uint _79 = 0u;
static float _84 = 0.0f;

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
static float4 in_var_TEXCOORD0[1];
static uint in_var_PRIMITIVE_ID;

struct SPIRV_Cross_Input
{
    float4 in_var_TEXCOORD10_centroid : TEXCOORD10_centroid;
    float4 in_var_TEXCOORD11_centroid : TEXCOORD11_centroid;
    float4 in_var_TEXCOORD0[1] : TEXCOORD0;
    nointerpolation uint in_var_PRIMITIVE_ID : PRIMITIVE_ID;
    float4 gl_FragCoord : SV_Position;
};

void frag_main()
{
    uint _131 = 0u;
    float4 _111 = mul(float4(gl_FragCoord.xyz, 1.0f), View_View_SVPositionToTranslatedWorld);
    float3 _118 = (View_View_ViewTilePosition * 2097152.0f) + ((_111.xyz / _111.w.xxx) - View_View_RelativePreViewTranslation);
    float _127 = frac(52.98291778564453125f * frac(dot(gl_FragCoord.xy + (float2(32.66500091552734375f, 11.81499958038330078125f) * float(View_View_StateFrameIndexMod8)), float2(0.067110560834407806396484375f, 0.005837149918079376220703125f))));
    uint _177 = 0u;
    do
    {
        _131 = LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_NumRadianceProbeClipmapsForMark;
        uint _173 = 0u;
        uint _174 = 0u;
        bool _175 = false;
        uint _133 = 0u;
        for (;;)
        {
            if (_133 < _131)
            {
                float3 _145 = (_118 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_133].w) + LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_133].xyz;
                float3 _150 = clamp((_145 - 0.5f.xxx) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark, 0.0f.xxx, 1.0f.xxx);
                float3 _158 = clamp(((float(LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark).xxx - 0.5f.xxx) - _145) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_InvClipmapFadeSizeForMark, 0.0f.xxx, 1.0f.xxx);
                if (min(min(_150.x, min(_150.y, _150.z)), min(_158.x, min(_158.y, _158.z))) > _127)
                {
                    _173 = _133;
                    _174 = _133;
                    _175 = true;
                    break;
                }
                _133++;
                continue;
            }
            else
            {
                _173 = _79;
                _174 = _131;
                _175 = false;
                break;
            }
        }
        if (_175)
        {
            _177 = _173;
            break;
        }
        _177 = _174;
        break;
    } while(false);
    bool _178 = _177 < _131;
    if (_178)
    {
        float4 _190 = LumenTranslucencyRadianceCacheMarkPass_FurthestHZBTexture.SampleLevel(View_SharedPointClampedSampler, ((gl_FragCoord.xy - View_View_ViewRectMin.xy) * View_View_ViewSizeAndInvSize.zw) * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_ViewportUVToHZBBufferUV, LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_HZBMipLevel);
        float _191 = _190.x;
        if ((float4(_84, _84, _84, 1.0f) * (1.0f / gl_FragCoord.w)).w < (mad(_191, View_View_InvDeviceZToWorldZTransform.x, View_View_InvDeviceZToWorldZTransform.y) + (1.0f / mad(_191, View_View_InvDeviceZToWorldZTransform.z, -View_View_InvDeviceZToWorldZTransform.w))))
        {
            int3 _218 = int3(floor(((_118 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_177].w) + LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_PackedWorldPositionToRadianceProbeCoord[_177].xyz) - 0.5f.xxx));
            int3 _224 = int(LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark).xxx;
            if ((all(bool3(_218.x >= int3(0, 0, 0).x, _218.y >= int3(0, 0, 0).y, _218.z >= int3(0, 0, 0).z)) && all(bool3(_218.x < _224.x, _218.y < _224.y, _218.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_218 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _237 = _218 + int3(0, 0, 1);
            if ((all(bool3(_237.x >= int3(0, 0, 0).x, _237.y >= int3(0, 0, 0).y, _237.z >= int3(0, 0, 0).z)) && all(bool3(_237.x < _224.x, _237.y < _224.y, _237.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_237 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _252 = _218 + int3(0, 1, 0);
            if ((all(bool3(_252.x >= int3(0, 0, 0).x, _252.y >= int3(0, 0, 0).y, _252.z >= int3(0, 0, 0).z)) && all(bool3(_252.x < _224.x, _252.y < _224.y, _252.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_252 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _267 = _218 + int3(0, 1, 1);
            if ((all(bool3(_267.x >= int3(0, 0, 0).x, _267.y >= int3(0, 0, 0).y, _267.z >= int3(0, 0, 0).z)) && all(bool3(_267.x < _224.x, _267.y < _224.y, _267.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_267 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _282 = _218 + int3(1, 0, 0);
            if ((all(bool3(_282.x >= int3(0, 0, 0).x, _282.y >= int3(0, 0, 0).y, _282.z >= int3(0, 0, 0).z)) && all(bool3(_282.x < _224.x, _282.y < _224.y, _282.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_282 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _297 = _218 + int3(1, 0, 1);
            if ((all(bool3(_297.x >= int3(0, 0, 0).x, _297.y >= int3(0, 0, 0).y, _297.z >= int3(0, 0, 0).z)) && all(bool3(_297.x < _224.x, _297.y < _224.y, _297.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_297 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _312 = _218 + int3(1, 1, 0);
            if ((all(bool3(_312.x >= int3(0, 0, 0).x, _312.y >= int3(0, 0, 0).y, _312.z >= int3(0, 0, 0).z)) && all(bool3(_312.x < _224.x, _312.y < _224.y, _312.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_312 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
            }
            int3 _327 = _218 + int3(1, 1, 1);
            if ((all(bool3(_327.x >= int3(0, 0, 0).x, _327.y >= int3(0, 0, 0).y, _327.z >= int3(0, 0, 0).z)) && all(bool3(_327.x < _224.x, _327.y < _224.y, _327.z < _224.z))) && _178)
            {
                LumenTranslucencyRadianceCacheMarkPass_RWRadianceProbeIndirectionTexture[uint3(_327 + int3(int(_177 * LumenTranslucencyRadianceCacheMarkPass_LumenTranslucencyRadianceCacheMarkPass_RadianceProbeClipmapResolutionForMark), 0, 0))] = 4294967294u;
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
    in_var_TEXCOORD0 = stage_input.in_var_TEXCOORD0;
    in_var_PRIMITIVE_ID = stage_input.in_var_PRIMITIVE_ID;
    frag_main();
}
