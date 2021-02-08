// This file is autogenerated by hidl-gen. Do not edit manually.
// Source: android.hardware.audio.common@7.0
// Location: hardware/interfaces/audio/common/7.0/

#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_COMMON_V7_0_EXPORTED_CONSTANTS_H_
#define HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_COMMON_V7_0_EXPORTED_CONSTANTS_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    HAL_AUDIO_SESSION_DEVICE = -2 /* -2 */,
    HAL_AUDIO_SESSION_OUTPUT_STAGE = -1 /* -1 */,
    HAL_AUDIO_SESSION_OUTPUT_MIX = 0,
};

enum {
    HAL_AUDIO_MODE_NORMAL = 0,
    HAL_AUDIO_MODE_RINGTONE = 1,
    HAL_AUDIO_MODE_IN_CALL = 2,
    HAL_AUDIO_MODE_IN_COMMUNICATION = 3,
    HAL_AUDIO_MODE_CALL_SCREEN = 4,
};

typedef enum {
    AUDIO_ENCAPSULATION_MODE_NONE = 0,
    AUDIO_ENCAPSULATION_MODE_ELEMENTARY_STREAM = 1,
    AUDIO_ENCAPSULATION_MODE_HANDLE = 2,
} audio_encapsulation_mode_t;

typedef enum {
    AUDIO_ENCAPSULATION_METADATA_TYPE_NONE = 0,
    AUDIO_ENCAPSULATION_METADATA_TYPE_FRAMEWORK_TUNER = 1,
    AUDIO_ENCAPSULATION_METADATA_TYPE_DVB_AD_DESCRIPTOR = 2,
} audio_encapsulation_metadata_type_t;

#ifdef __cplusplus
}
#endif

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUDIO_COMMON_V7_0_EXPORTED_CONSTANTS_H_