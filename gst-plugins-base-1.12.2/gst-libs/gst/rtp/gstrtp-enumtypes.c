


#include "gstrtp-enumtypes.h"

#include "rtp.h" 
#include "gstrtpdefs.h" 
#include "gstrtpbuffer.h" 
#include "gstrtcpbuffer.h" 
#include "gstrtppayloads.h" 
#include "gstrtphdrext.h" 
#include "gstrtpbaseaudiopayload.h" 
#include "gstrtpbasepayload.h" 
#include "gstrtpbasedepayload.h"

/* enumerations from "gstrtpdefs.h" */
GType
gst_rtp_profile_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_RTP_PROFILE_UNKNOWN, "GST_RTP_PROFILE_UNKNOWN", "unknown" },
      { GST_RTP_PROFILE_AVP, "GST_RTP_PROFILE_AVP", "avp" },
      { GST_RTP_PROFILE_SAVP, "GST_RTP_PROFILE_SAVP", "savp" },
      { GST_RTP_PROFILE_AVPF, "GST_RTP_PROFILE_AVPF", "avpf" },
      { GST_RTP_PROFILE_SAVPF, "GST_RTP_PROFILE_SAVPF", "savpf" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstRTPProfile", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstrtpbuffer.h" */
GType
gst_rtp_buffer_flags_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_RTP_BUFFER_FLAG_RETRANSMISSION, "GST_RTP_BUFFER_FLAG_RETRANSMISSION", "retransmission" },
      { GST_RTP_BUFFER_FLAG_LAST, "GST_RTP_BUFFER_FLAG_LAST", "last" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstRTPBufferFlags", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_rtp_buffer_map_flags_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { GST_RTP_BUFFER_MAP_FLAG_SKIP_PADDING, "GST_RTP_BUFFER_MAP_FLAG_SKIP_PADDING", "skip-padding" },
      { GST_RTP_BUFFER_MAP_FLAG_LAST, "GST_RTP_BUFFER_MAP_FLAG_LAST", "last" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_flags_register_static ("GstRTPBufferMapFlags", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstrtcpbuffer.h" */
GType
gst_rtcp_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_RTCP_TYPE_INVALID, "GST_RTCP_TYPE_INVALID", "invalid" },
      { GST_RTCP_TYPE_SR, "GST_RTCP_TYPE_SR", "sr" },
      { GST_RTCP_TYPE_RR, "GST_RTCP_TYPE_RR", "rr" },
      { GST_RTCP_TYPE_SDES, "GST_RTCP_TYPE_SDES", "sdes" },
      { GST_RTCP_TYPE_BYE, "GST_RTCP_TYPE_BYE", "bye" },
      { GST_RTCP_TYPE_APP, "GST_RTCP_TYPE_APP", "app" },
      { GST_RTCP_TYPE_RTPFB, "GST_RTCP_TYPE_RTPFB", "rtpfb" },
      { GST_RTCP_TYPE_PSFB, "GST_RTCP_TYPE_PSFB", "psfb" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstRTCPType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_rtcpfb_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_RTCP_FB_TYPE_INVALID, "GST_RTCP_FB_TYPE_INVALID", "fb-type-invalid" },
      { GST_RTCP_RTPFB_TYPE_NACK, "GST_RTCP_RTPFB_TYPE_NACK", "rtpfb-type-nack" },
      { GST_RTCP_RTPFB_TYPE_TMMBR, "GST_RTCP_RTPFB_TYPE_TMMBR", "rtpfb-type-tmmbr" },
      { GST_RTCP_RTPFB_TYPE_TMMBN, "GST_RTCP_RTPFB_TYPE_TMMBN", "rtpfb-type-tmmbn" },
      { GST_RTCP_RTPFB_TYPE_RTCP_SR_REQ, "GST_RTCP_RTPFB_TYPE_RTCP_SR_REQ", "rtpfb-type-rtcp-sr-req" },
      { GST_RTCP_PSFB_TYPE_PLI, "GST_RTCP_PSFB_TYPE_PLI", "psfb-type-pli" },
      { GST_RTCP_PSFB_TYPE_SLI, "GST_RTCP_PSFB_TYPE_SLI", "psfb-type-sli" },
      { GST_RTCP_PSFB_TYPE_RPSI, "GST_RTCP_PSFB_TYPE_RPSI", "psfb-type-rpsi" },
      { GST_RTCP_PSFB_TYPE_AFB, "GST_RTCP_PSFB_TYPE_AFB", "psfb-type-afb" },
      { GST_RTCP_PSFB_TYPE_FIR, "GST_RTCP_PSFB_TYPE_FIR", "psfb-type-fir" },
      { GST_RTCP_PSFB_TYPE_TSTR, "GST_RTCP_PSFB_TYPE_TSTR", "psfb-type-tstr" },
      { GST_RTCP_PSFB_TYPE_TSTN, "GST_RTCP_PSFB_TYPE_TSTN", "psfb-type-tstn" },
      { GST_RTCP_PSFB_TYPE_VBCN, "GST_RTCP_PSFB_TYPE_VBCN", "psfb-type-vbcn" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstRTCPFBType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_rtcpsdes_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_RTCP_SDES_INVALID, "GST_RTCP_SDES_INVALID", "invalid" },
      { GST_RTCP_SDES_END, "GST_RTCP_SDES_END", "end" },
      { GST_RTCP_SDES_CNAME, "GST_RTCP_SDES_CNAME", "cname" },
      { GST_RTCP_SDES_NAME, "GST_RTCP_SDES_NAME", "name" },
      { GST_RTCP_SDES_EMAIL, "GST_RTCP_SDES_EMAIL", "email" },
      { GST_RTCP_SDES_PHONE, "GST_RTCP_SDES_PHONE", "phone" },
      { GST_RTCP_SDES_LOC, "GST_RTCP_SDES_LOC", "loc" },
      { GST_RTCP_SDES_TOOL, "GST_RTCP_SDES_TOOL", "tool" },
      { GST_RTCP_SDES_NOTE, "GST_RTCP_SDES_NOTE", "note" },
      { GST_RTCP_SDES_PRIV, "GST_RTCP_SDES_PRIV", "priv" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstRTCPSDESType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstrtppayloads.h" */
GType
gst_rtp_payload_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_RTP_PAYLOAD_PCMU, "GST_RTP_PAYLOAD_PCMU", "pcmu" },
      { GST_RTP_PAYLOAD_1016, "GST_RTP_PAYLOAD_1016", "1016" },
      { GST_RTP_PAYLOAD_G721, "GST_RTP_PAYLOAD_G721", "g721" },
      { GST_RTP_PAYLOAD_GSM, "GST_RTP_PAYLOAD_GSM", "gsm" },
      { GST_RTP_PAYLOAD_G723, "GST_RTP_PAYLOAD_G723", "g723" },
      { GST_RTP_PAYLOAD_DVI4_8000, "GST_RTP_PAYLOAD_DVI4_8000", "dvi4-8000" },
      { GST_RTP_PAYLOAD_DVI4_16000, "GST_RTP_PAYLOAD_DVI4_16000", "dvi4-16000" },
      { GST_RTP_PAYLOAD_LPC, "GST_RTP_PAYLOAD_LPC", "lpc" },
      { GST_RTP_PAYLOAD_PCMA, "GST_RTP_PAYLOAD_PCMA", "pcma" },
      { GST_RTP_PAYLOAD_G722, "GST_RTP_PAYLOAD_G722", "g722" },
      { GST_RTP_PAYLOAD_L16_STEREO, "GST_RTP_PAYLOAD_L16_STEREO", "l16-stereo" },
      { GST_RTP_PAYLOAD_L16_MONO, "GST_RTP_PAYLOAD_L16_MONO", "l16-mono" },
      { GST_RTP_PAYLOAD_QCELP, "GST_RTP_PAYLOAD_QCELP", "qcelp" },
      { GST_RTP_PAYLOAD_CN, "GST_RTP_PAYLOAD_CN", "cn" },
      { GST_RTP_PAYLOAD_MPA, "GST_RTP_PAYLOAD_MPA", "mpa" },
      { GST_RTP_PAYLOAD_G728, "GST_RTP_PAYLOAD_G728", "g728" },
      { GST_RTP_PAYLOAD_DVI4_11025, "GST_RTP_PAYLOAD_DVI4_11025", "dvi4-11025" },
      { GST_RTP_PAYLOAD_DVI4_22050, "GST_RTP_PAYLOAD_DVI4_22050", "dvi4-22050" },
      { GST_RTP_PAYLOAD_G729, "GST_RTP_PAYLOAD_G729", "g729" },
      { GST_RTP_PAYLOAD_CELLB, "GST_RTP_PAYLOAD_CELLB", "cellb" },
      { GST_RTP_PAYLOAD_JPEG, "GST_RTP_PAYLOAD_JPEG", "jpeg" },
      { GST_RTP_PAYLOAD_NV, "GST_RTP_PAYLOAD_NV", "nv" },
      { GST_RTP_PAYLOAD_H261, "GST_RTP_PAYLOAD_H261", "h261" },
      { GST_RTP_PAYLOAD_MPV, "GST_RTP_PAYLOAD_MPV", "mpv" },
      { GST_RTP_PAYLOAD_MP2T, "GST_RTP_PAYLOAD_MP2T", "mp2t" },
      { GST_RTP_PAYLOAD_H263, "GST_RTP_PAYLOAD_H263", "h263" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstRTPPayload", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}



