/*
 * Copyright (C) 2014 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::CAF_OFF[] = "caf-off"; \
const char CameraParameters::CAF_ON[] = "caf-on"; \
const char CameraParameters::CAPTURE_MODE_NORMAL[] = "normal"; \
const char CameraParameters::CAPTURE_MODE_BURST[] = "burst"; \
const char CameraParameters::CAPTURE_MODE_CONTI_BURST[] = "contiburst"; \
const char CameraParameters::CAPTURE_MODE_HDR[] = "hdr"; \
const char CameraParameters::CAPTURE_MODE_HJR[] = "hjr"; \
const char CameraParameters::CAPTURE_MODE_PANORAMA[] = "panorama"; \
const char CameraParameters::CONTINUOUS_AF_OFF[] = "caf-off"; \
const char CameraParameters::CONTINUOUS_AF_ON[] = "caf-on"; \
const char CameraParameters::KEY_CONTINUOUS_AF[] = "continuous-af"; \
const char CameraParameters::KEY_CAF[] = "continuous-af"; \
const char CameraParameters::KEY_CAPTURE_MODE[] = "capture-mode"; \
const char CameraParameters::KEY_PICTURE_COUNT[] = "picture-count"; \
const char CameraParameters::KEY_MAX_BURST_PICTURE_COUNT[] = "max-burst-picture-count"; \
const char CameraParameters::KEY_SUPPORTED_CONTINUOUS_AF[] = "continuous-af-mode"; \
const char CameraParameters::KEY_SUPPORTED_CAF[] = "continuous-af-values"; \
const char CameraParameters::KEY_SUPPORTED_CAPTURE_MODES[] = "capture-mode-values"; \
const char CameraParameters::KEY_TAKING_PICTURE_ZOOM[] = "taking-picture-zoom"; \
const char CameraParameters::KEY_PANORAMA_MODE[] = "panorama-mode"; \
const char CameraParameters::PANORAMA_MODE_NOT_INPROGRESS[] = "not-in-progress"; \
const char CameraParameters::PANORAMA_MODE_INPROGRESS[] = "in-progress"; \
const char CameraParameters::KEY_SUPPORTED_3D_FILE_FORMAT[] = "3d-file-format"; \
const char CameraParameters::FOCUS_MODE_CONTINUOUS_CAMERA[] = "continuous-camera"; \
const char CameraParameters::KEY_MIN_SHARPNESS[] = "sharpness-min"; \
const char CameraParameters::KEY_MIN_CONTRAST[] = "contrast-min"; \
const char CameraParameters::KEY_MIN_SATURATION[] = "saturation-min"; \
const char CameraParameters::FILE_FORMAT_MPO[] = "mpo"; \
const char CameraParameters::FILE_FORMAT_JPS[] = "jps"; \
void CameraParameters::setPostviewSize(int width, int height) {}

#define CAMERA_PARAMETERS_EXTRA_H \
       static const char KEY_CAPTURE_MODE[]; \
       static const char KEY_SUPPORTED_CAPTURE_MODES[]; \
       static const char KEY_PICTURE_COUNT[]; \
       static const char KEY_MAX_BURST_PICTURE_COUNT[]; \
       static const char KEY_SUPPORTED_CONTINUOUS_AF[]; \
       static const char KEY_SUPPORTED_CAF[]; \
       static const char CAPTURE_MODE_NORMAL[]; \
       static const char CAPTURE_MODE_BURST[]; \
       static const char CAPTURE_MODE_CONTI_BURST[]; \
       static const char CAPTURE_MODE_HDR[]; \
       static const char CAPTURE_MODE_HJR[]; \
       static const char CAPTURE_MODE_PANORAMA[]; \
       static const char FOCUS_MODE_CONTINUOUS_CAMERA[]; \
       static const char CAF_OFF[]; \
       static const char CAF_ON[]; \
       static const char CONTINUOUS_AF_OFF[]; \
       static const char CONTINUOUS_AF_ON[]; \
       static const char KEY_CONTINUOUS_AF[]; \
       static const char KEY_CAF[]; \
       static const char KEY_TAKING_PICTURE_ZOOM[]; \
       static const char KEY_PANORAMA_MODE[]; \
       static const char PANORAMA_MODE_NOT_INPROGRESS[]; \
       static const char PANORAMA_MODE_INPROGRESS[]; \
       static const char KEY_SUPPORTED_3D_FILE_FORMAT[]; \
       static const char KEY_MIN_SHARPNESS[]; \
       static const char KEY_MIN_CONTRAST[]; \
       static const char KEY_MIN_SATURATION[]; \
       static const char FILE_FORMAT_MPO[]; \
       static const char FILE_FORMAT_JPS[]; \
       void setPostviewSize(int x, int y);

