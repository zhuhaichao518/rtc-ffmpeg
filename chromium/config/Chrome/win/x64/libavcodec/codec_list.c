static const FFCodec * const codec_list[] = {
#if CONFIG_H264_CUVID_DECODER
    &ff_h264_cuvid_decoder,
#endif
    &ff_h264_decoder,
    &ff_theora_decoder,
    &ff_vp3_decoder,
    &ff_vp8_decoder,
    &ff_aac_decoder,
    &ff_flac_decoder,
    &ff_mp3_decoder,
    &ff_vorbis_decoder,
    &ff_pcm_alaw_decoder,
    &ff_pcm_f32le_decoder,
    &ff_pcm_mulaw_decoder,
    &ff_pcm_s16be_decoder,
    &ff_pcm_s16le_decoder,
    &ff_pcm_s24be_decoder,
    &ff_pcm_s24le_decoder,
    &ff_pcm_s32le_decoder,
    &ff_pcm_u8_decoder,
    &ff_libopus_decoder,
    NULL };
