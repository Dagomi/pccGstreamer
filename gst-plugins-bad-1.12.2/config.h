/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Default audio sink */
#define DEFAULT_AUDIOSINK "autoaudiosink"

/* Default audio source */
#define DEFAULT_AUDIOSRC "alsasrc"

/* Default video sink */
#define DEFAULT_VIDEOSINK "autovideosink"

/* Default video source */
#define DEFAULT_VIDEOSRC "v4l2src"

/* Default visualizer */
#define DEFAULT_VISUALIZER "goom"

/* Disable Orc */
/* #undef DISABLE_ORC */

/* Define if an old libdts is used */
/* #undef DTS_OLD */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* gettext package name */
#define GETTEXT_PACKAGE "gst-plugins-bad-1.0"

/* The GIO library directory. */
#define GIO_LIBDIR "/usr/lib/x86_64-linux-gnu"

/* The GIO modules directory. */
#define GIO_MODULE_DIR "/usr/lib/x86_64-linux-gnu/gio/modules"

/* The GIO install prefix. */
#define GIO_PREFIX "/usr"

/* Define if GSM header in gsm/ subdir */
/* #undef GSM_HEADER_IN_SUBDIR */

/* GStreamer API Version */
#define GST_API_VERSION "1.0"

/* Define if extra runtime checks should be enabled */
/* #undef GST_ENABLE_EXTRA_CHECKS */

/* Extra platform specific plugin suffix */
/* #undef GST_EXTRA_MODULE_SUFFIX */

/* Defined if gcov is enabled to force a rebuild due to config.h changing */
/* #undef GST_GCOV_ENABLED */

/* EGL module name */
/* #undef GST_GL_LIBEGL_MODULE_NAME */

/* GLES2 module name */
/* #undef GST_GL_LIBGLESV2_MODULE_NAME */

/* OpenGL module name */
/* #undef GST_GL_LIBGL_MODULE_NAME */

/* Defined when registry scanning through fork is unsafe */
/* #undef GST_HAVE_UNSAFE_FORK */

/* Default errorlevel to use */
#define GST_LEVEL_DEFAULT GST_LEVEL_NONE

/* GStreamer license */
#define GST_LICENSE "LGPL"

/* mjpegtools API evolution */
#define GST_MJPEGTOOLS_API 0

/* package name in plugins */
#define GST_PACKAGE_NAME "GStreamer Bad Plug-ins source release"

/* package origin */
#define GST_PACKAGE_ORIGIN "Unknown package origin"

/* GStreamer package release date/time for plugins as YYYY-MM-DD */
#define GST_PACKAGE_RELEASE_DATETIME "2017-07-14"

/* Define if static plugins should be built */
/* #undef GST_PLUGIN_BUILD_STATIC */

/* Define to enable Windows ACM library (used by acm). */
/* #undef HAVE_ACM */

/* Define to enable Android Media (used by androidmedia). */
/* #undef HAVE_ANDROID_MEDIA */

/* Define to enable Apple video (used by applemedia). */
/* #undef HAVE_APPLE_MEDIA */

/* Define to enable ASS/SSA renderer (used by assrender). */
#define HAVE_ASSRENDER /**/

/* Define to enable AVC Video Services (used by avcsrc). */
/* #undef HAVE_AVC */

/* Define if building with AVFoundation */
/* #undef HAVE_AVFOUNDATION */

/* Define to enable Bluez (used by bluez). */
/* #undef HAVE_BLUEZ */

/* Bluez5 detected */
/* #undef HAVE_BLUEZ5 */

/* Define to enable bs2b (used by bs2b). */
/* #undef HAVE_BS2B */

/* Define to enable bz2 library (used by bz2). */
#define HAVE_BZ2 /**/

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to enable chromaprint (used by chromaprint). */
/* #undef HAVE_CHROMAPRINT */

/* Define if the target CPU is AARCH64 */
/* #undef HAVE_CPU_AARCH64 */

/* Define if the target CPU is an Alpha */
/* #undef HAVE_CPU_ALPHA */

/* Define if the target CPU is an ARC */
/* #undef HAVE_CPU_ARC */

/* Define if the target CPU is an ARM */
/* #undef HAVE_CPU_ARM */

/* Define if the target CPU is a CRIS */
/* #undef HAVE_CPU_CRIS */

/* Define if the target CPU is a CRISv32 */
/* #undef HAVE_CPU_CRISV32 */

/* Define if the target CPU is a HPPA */
/* #undef HAVE_CPU_HPPA */

/* Define if the target CPU is an x86 */
/* #undef HAVE_CPU_I386 */

/* Define if the target CPU is a IA64 */
/* #undef HAVE_CPU_IA64 */

/* Define if the target CPU is a M68K */
/* #undef HAVE_CPU_M68K */

/* Define if the target CPU is a MIPS */
/* #undef HAVE_CPU_MIPS */

/* Define if the target CPU is a PowerPC */
/* #undef HAVE_CPU_PPC */

/* Define if the target CPU is a 64 bit PowerPC */
/* #undef HAVE_CPU_PPC64 */

/* Define if the target CPU is a S390 */
/* #undef HAVE_CPU_S390 */

/* Define if the target CPU is a SPARC */
/* #undef HAVE_CPU_SPARC */

/* Define if the target CPU is a x86_64 */
#define HAVE_CPU_X86_64 1

/* Define to enable Curl plugin (used by curl). */
#define HAVE_CURL /**/

/* Define to enable daala (used by daala). */
/* #undef HAVE_DAALA */

/* Define to enable DASH plug-in (used by dash). */
#define HAVE_DASH /**/

/* Define to enable libdc1394 (used by dc1394). */
#define HAVE_DC1394 /**/

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to enable decklink (used by decklink). */
#define HAVE_DECKLINK /**/

/* Define to enable Direct3D plug-in (used by direct3dsink). */
/* #undef HAVE_DIRECT3D */

/* Define to enable directfb (used by dfbvideosink ). */
/* #undef HAVE_DIRECTFB */

/* Define to enable DirectSound (used by directsoundsrc). */
/* #undef HAVE_DIRECTSOUND */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* define for working do while(0) macros */
#define HAVE_DOWHILE_MACROS 1

/* Define if you have dssim library */
/* #undef HAVE_DSSIM */

/* Define to enable DTLS plugin (used by dtls). */
/* #undef HAVE_DTLS */

/* Define to enable dts library (used by dtsdec). */
#define HAVE_DTS /**/

/* Define to enable DVB Source (used by dvb). */
#define HAVE_DVB /**/

/* Define to 1 if the system has the type `EGLAttrib'. */
#define HAVE_EGLATTRIB 1

/* Define to enable building of experimental plug-ins. */
/* #undef HAVE_EXPERIMENTAL */

/* Define to enable building of plug-ins with external deps. */
#define HAVE_EXTERNAL /**/

/* Define to enable AAC encoder plug-in (used by faac). */
#define HAVE_FAAC /**/

/* Define to enable FAAD2 AAC decoder plug-in (used by faad). */
#define HAVE_FAAD /**/

/* Define to enable linux framebuffer (used by fbdevsink). */
#define HAVE_FBDEV /**/

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to enable fdkaac plugin (used by fdkaac). */
/* #undef HAVE_FDK_AAC */

/* Define to enable Flite plugin (used by flite). */
/* #undef HAVE_FLITE */

/* Define to enable fluidsynth (used by fluidsynth). */
/* #undef HAVE_FLUIDSYNTH */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to enable gl elements (used by gl). */
#define HAVE_GL /**/

/* Define to 1 if the system has the type `GLchar'. */
#define HAVE_GLCHAR 1

/* Define to 1 if the system has the type `GLeglImageOES'. */
#define HAVE_GLEGLIMAGEOES 1

/* Define to 1 if the system has the type `GLint64'. */
#define HAVE_GLINT64 1

/* Define to 1 if the system has the type `GLintptr'. */
#define HAVE_GLINTPTR 1

/* Define to 1 if the system has the type `GLsizeiptr'. */
#define HAVE_GLSIZEIPTR 1

/* Define to 1 if the system has the type `GLsync'. */
#define HAVE_GLSYNC 1

/* Define to 1 if the system has the type `GLuint64'. */
#define HAVE_GLUINT64 1

/* Define to enable gme decoder (used by gme). */
#define HAVE_GME /**/

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Use graphene */
/* #undef HAVE_GRAPHENE */

/* Define to enable GSM library (used by gsmenc gsmdec). */
#define HAVE_GSM /**/

/* Define to enable Gtk+ elements (used by gtk). */
#define HAVE_GTK3 /**/

/* Define if Gtk+ 3.0 GL is installed */
#define HAVE_GTK3_GL 1

/* Define if gudev is installed */
#define HAVE_GUDEV 1

/* Define to enable http live streaming plugin (used by hls). */
#define HAVE_HLS /**/

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if building for Apple iOS */
/* #undef HAVE_IOS */

/* Define to enable iqa (used by iqa ). */
/* #undef HAVE_IQA */

/* Use libjpeg */
#define HAVE_JPEG 1

/* Define to enable Kate (used by kate). */
#define HAVE_KATE /**/

/* Define to enable drm/kms libraries (used by kms). */
#define HAVE_KMS /**/

/* Define to enable ladspa (used by ladspa). */
#define HAVE_LADSPA /**/

/* Define to enable libde265 HEVC/H.265 decoder (used by libde265). */
/* #undef HAVE_LIBDE265 */

/* Define if libgcrypt is available */
/* #undef HAVE_LIBGCRYPT */

/* Define if gme 0.5.6 or newer is available */
#define HAVE_LIBGME_ACCURACY 1

/* Define to enable mms protocol library (used by libmms). */
#define HAVE_LIBMMS /**/

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define if libusb 1.x is installed */
/* #undef HAVE_LIBUSB */

/* Define if we have liblilv >= 0.22 */
/* #undef HAVE_LILV_0_22 */

/* Define if we have liblrdf */
/* #undef HAVE_LRDF */

/* Define to enable lv2 (used by lv2). */
/* #undef HAVE_LV2 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to enable modplug (used by modplug). */
#define HAVE_MODPLUG /**/

/* Define to enable mpeg2enc (used by mpeg2enc). */
/* #undef HAVE_MPEG2ENC */

/* Define to enable mplex (used by mplex). */
/* #undef HAVE_MPLEX */

/* Define to 1 if you have the <msacm.h> header file. */
/* #undef HAVE_MSACM_H */

/* Define to enable Intel MediaSDK (used by msdk). */
/* #undef HAVE_MSDK */

/* Define to enable musepackdec (used by musepack). */
#define HAVE_MUSEPACK /**/

/* Define to enable neon http client plugins (used by neonhttpsrc). */
/* #undef HAVE_NEON */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/ip.h> header file. */
#define HAVE_NETINET_IP_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define if nettle is available */
#define HAVE_NETTLE 1

/* Define to enable NVIDIA Encode API (used by nvenc). */
/* #undef HAVE_NVENC */

/* NVENC GStreamer OpenGL support available */
/* #undef HAVE_NVENC_GST_GL */

/* Define to enable ofa plugins (used by ofa). */
#define HAVE_OFA /**/

/* Define to enable OpenAL plugin (used by openal). */
/* #undef HAVE_OPENAL */

/* Define to enable opencv plugins (used by opencv). */
/* #undef HAVE_OPENCV */

/* Define to 1 if you have the <opencv2/bgsegm.hpp> header file. */
/* #undef HAVE_OPENCV2_BGSEGM_HPP */

/* Define to 1 if you have the <opencv2/core/core_c.h> header file. */
/* #undef HAVE_OPENCV2_CORE_CORE_C_H */

/* Define to 1 if you have the <opencv2/core/version.hpp> header file. */
/* #undef HAVE_OPENCV2_CORE_VERSION_HPP */

/* Define to 1 if you have the <opencv2/highgui/highgui_c.h> header file. */
/* #undef HAVE_OPENCV2_HIGHGUI_HIGHGUI_C_H */

/* Define to 1 if you have the <opencv2/imgproc/imgproc_c.h> header file. */
/* #undef HAVE_OPENCV2_IMGPROC_IMGPROC_C_H */

/* Define to 1 if you have the <opencv2/imgproc/imgproc.hpp> header file. */
/* #undef HAVE_OPENCV2_IMGPROC_IMGPROC_HPP */

/* Define to 1 if you have the <opencv2/objdetect/objdetect.hpp> header file.
   */
/* #undef HAVE_OPENCV2_OBJDETECT_OBJDETECT_HPP */

/* Define to 1 if you have the <opencv2/video/background_segm.hpp> header
   file. */
/* #undef HAVE_OPENCV2_VIDEO_BACKGROUND_SEGM_HPP */

/* Define to enable openexr library (used by openexr). */
#define HAVE_OPENEXR /**/

/* Define to enable openh264 library (used by openh264). */
/* #undef HAVE_OPENH264 */

/* Define to enable openjpeg library (used by openjpeg). */
/* #undef HAVE_OPENJPEG */

/* Define if OpenJPEG 1 is used */
/* #undef HAVE_OPENJPEG_1 */

/* Define if OpenJPEG 2.1 is used */
/* #undef HAVE_OPENJPEG_2_1 */

/* Define to enable openni2 library (used by openni2). */
/* #undef HAVE_OPENNI2 */

/* Define to enable OpenSL ES (used by opensl). */
/* #undef HAVE_OPENSLES */

/* Define if openssl is available */
/* #undef HAVE_OPENSSL */

/* Define to enable opus (used by opus). */
#define HAVE_OPUS /**/

/* Use Orc */
#define HAVE_ORC 1

/* Apple Mac OS X operating system detected */
/* #undef HAVE_OSX */

/* Use libpng */
#define HAVE_PNG 1 

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to enable Qt elements (used by qt). */
/* #undef HAVE_QT */

/* Define if Qt eglfs integration is installed */
/* #undef HAVE_QT_EGLFS */

/* Define if Qt iOS integration is installed */
/* #undef HAVE_QT_IOS */

/* Define if Qt Mac integration is installed */
/* #undef HAVE_QT_MAC */

/* Define if Qt Wayland integration is installed */
/* #undef HAVE_QT_WAYLAND */

/* Define if Qt X11 integration is installed */
/* #undef HAVE_QT_X11 */

/* Define if RDTSC is available */
/* #undef HAVE_RDTSC */

/* Define to enable resindvd plugin (used by resindvd). */
#define HAVE_RESINDVD /**/

/* Define to enable rsvg decoder (used by rsvg). */
#define HAVE_RSVG /**/

/* Define to enable rtmp library (used by rtmp). */
#define HAVE_RTMP /**/

/* Define to enable SBC bluetooth audio codec (used by sbc). */
/* #undef HAVE_SBC */

/* Define to enable Schroedinger video codec (used by schro). */
#define HAVE_SCHRO /**/

/* Define to enable POSIX shared memory source and sink (used by shm). */
#define HAVE_SHM /**/

/* Define to enable Smooth Streaming plug-in (used by smoothstreaming). */
#define HAVE_SMOOTHSTREAMING /**/

/* Define to enable sndfile plug-in (used by sfdec sfenc). */
#define HAVE_SNDFILE /**/

/* Define to enable soundtouch plug-in (used by soundtouch). */
#define HAVE_SOUNDTOUCH /**/

/* Defined if the available libSoundTouch is >= 1.4 */
#define HAVE_SOUNDTOUCH_1_4 1

/* Define to enable Spandsp (used by spandsp). */
#define HAVE_SPANDSP /**/

/* Define to enable spc decoder (used by spc). */
/* #undef HAVE_SPC */

/* Define to enable srtp library (used by srtp). */
/* #undef HAVE_SRTP */

/* Define if libssh2 is available */
/* #undef HAVE_SSH2 */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to enable Teletext decoder (used by teletextdec). */
#define HAVE_TELETEXTDEC /**/

/* Define if libtiger is available */
/* #undef HAVE_TIGER */

/* Define to enable tinyalsa (used by tinyalsa). */
/* #undef HAVE_TINYALSA */

/* Define to enable TTML plugin (used by ttml). */
#define HAVE_TTML /**/

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to enable UVC H264 (used by uvch264). */
/* #undef HAVE_UVCH264 */

/* Define if valgrind should be used */
/* #undef HAVE_VALGRIND */

/* Define to enable Video CD (used by vcdsrc). */
#define HAVE_VCD /**/

/* Define to enable VDPAU (used by vdpau). */
/* #undef HAVE_VDPAU */

/* Define if building with VideoToolbox */
/* #undef HAVE_VIDEOTOOLBOX */

/* Define if building with VideoToolbox >= 10.9.6 */
/* #undef HAVE_VIDEOTOOLBOX_10_9_6 */

/* Define to enable vo-aacenc library (used by vo-aacenc). */
/* #undef HAVE_VOAACENC */

/* Define to enable vo-amrwbenc library (used by vo-amrwbenc). */
/* #undef HAVE_VOAMRWBENC */

/* Define to enable Vulkan elements (used by vulkan). */
/* #undef HAVE_VULKAN */

/* Define to enable WASAPI plug-in (used by wasapi). */
/* #undef HAVE_WASAPI */

/* Define to enable wayland sink (used by wayland ). */
/* #undef HAVE_WAYLAND */

/* Define to enable WebP (used by webp ). */
/* #undef HAVE_WEBP */

/* Define to enable WebRTC Audio Processing (used by webrtcdsp). */
/* #undef HAVE_WEBRTCDSP */

/* Define to enable wildmidi midi soft synth plugin (used by wildmidi). */
/* #undef HAVE_WILDMIDI */

/* Have WildMidi 0.2.2 or earlier library */
/* #undef HAVE_WILDMIDI_0_2_2 */

/* Defined if compiling for Windows */
/* #undef HAVE_WIN32 */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to enable Winks plug-in (used by winks). */
/* #undef HAVE_WINKS */

/* Define to enable winscreencap plug-in (used by winscreencap). */
/* #undef HAVE_WINSCREENCAP */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define if you have X11 library */
#define HAVE_X11 1

/* Define to enable x265 plug-in (used by x265). */
/* #undef HAVE_X265 */

/* Define to enable ZBar barcode detector (used by zbar). */
#define HAVE_ZBAR /**/

/* the host CPU */
#define HOST_CPU "x86_64"

/* library dir */
#define LIBDIR "/usr/lib"

/* gettext locale dir */
#define LOCALEDIR "/usr/share/locale"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define if the old MusePack API is used */
/* #undef MPC_IS_OLD_API */

/* OpenCV path name */
#define OPENCV_PATH_NAME "OpenCV"

/* opencv install prefix */
#define OPENCV_PREFIX ""

/* Name of package */
#define PACKAGE "gst-plugins-bad"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=GStreamer"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GStreamer Bad Plug-ins"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GStreamer Bad Plug-ins 1.12.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gst-plugins-bad"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.12.2"

/* directory where plugins are located */
#define PLUGINDIR "/usr/lib/gstreamer-1.0"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */

/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */

/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */

/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */

/* The size of `void*', as computed by sizeof. */
/* #undef SIZEOF_VOIDP */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* the target CPU */
#define TARGET_CPU "x86_64"

/* Use Mali FB EGL platform */
/* #undef USE_EGL_MALI_FB */

/* Use RPi platform */
/* #undef USE_EGL_RPI */

/* Version number of package */
#define VERSION "1.12.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* We need at least WinXP SP2 for __stat64 */
/* #undef __MSVCRT_VERSION__ */
