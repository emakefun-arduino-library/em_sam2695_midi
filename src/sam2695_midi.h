#pragma once

#ifndef _SAM2695_MIDI_H_
#define _SAM2695_MIDI_H_

#include <Arduino.h>

#include "sam2695_midi_chorus_reverberation.h"
#include "sam2695_midi_note.h"
#include "sam2695_midi_percussion_note.h"
#include "sam2695_midi_timbre.h"

#define SAM2695MIDI_ESP32 1
#define SAM2695MIDI_ARDUINO 2

#if defined(ESP_PLATFORM)
#define SAM2695MIDI_PLATFORM SAM2695MIDI_ESP32
#elif defined(ARDUINO)
#define SAM2695MIDI_PLATFORM SAM2695MIDI_ARDUINO
#endif

#ifndef SAM2695MIDI_PLATFORM
#define SAM2695MIDI_PLATFORM SAM2695MIDI_ARDUINO
#endif

#if (SAM2695MIDI_PLATFORM == SAM2695MIDI_ARDUINO)
#include <SoftwareSerial.h>
#endif

#if (SAM2695MIDI_PLATFORM == SAM2695MIDI_ESP32)
#include <HardwareSerial.h>
#endif

/**
 * @~Chinese
 * @brief 均衡器参数结构体。
 */
/**
 * @~English
 * @brief Equalizer parameter structure.
 */
struct EqualizerParameter {
  /**
   * @~Chinese
   * @brief 低频增益值（0-127）。
   */
  /**
   * @~English
   * @brief Low frequency gain value (0-127).
   */
  uint8_t low_frequency_gain;

  /**
   * @~Chinese
   * @brief 中低频增益值（0-127）。
   */
  /**
   * @~English
   * @brief Medium-low frequency gain value (0-127).
   */
  uint8_t medium_low_frequency_gain;

  /**
   * @~Chinese
   * @brief 中高频增益值（0-127）。
   */
  /**
   * @~English
   * @brief Medium-high frequency gain value (0-127).
   */
  uint8_t medium_high_frequency_gain;

  /**
   * @~Chinese
   * @brief 高频增益值（0-127）。
   */
  /**
   * @~English
   * @brief High frequency gain value (0-127).
   */
  uint8_t high_frequency_gain;

  /**
   * @~Chinese
   * @brief 低频中心频率值（0-127）。
   */
  /**
   * @~English
   * @brief Low frequency center value (0-127).
   */
  uint8_t low_frequency;

  /**
   * @~Chinese
   * @brief 中低频中心频率值（0-127）。
   */
  /**
   * @~English
   * @brief Medium-low frequency center value (0-127).
   */
  uint8_t medium_low_frequency;

  /**
   * @~Chinese
   * @brief 中高频中心频率值（0-127）。
   */
  /**
   * @~English
   * @brief Medium-high frequency center value (0-127).
   */
  uint8_t medium_high_frequency;

  /**
   * @~Chinese
   * @brief 高频中心频率值（0-127）。
   */
  /**
   * @~English
   * @brief High frequency center value (0-127).
   */
  uint8_t high_frequency;
};

/**
 * @~Chinese
 * @brief 12个音阶调谐参数结构体。
 */
/**
 * @~English
 * @brief 12 scale tuning parameter structures.
 */
struct ScaleTuningParameter {
  /**
   * @~Chinese
   * @brief C 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief C note fine-tuning value (0-127)
   */
  uint8_t c;

  /**
   * @~Chinese
   * @brief C# 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief C# note fine-tuning value (0-127)
   */
  uint8_t c_sharp;

  /**
   * @~Chinese
   * @brief D 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief D note fine-tuning value (0-127).
   */
  uint8_t d;

  /**
   * @~Chinese
   * @brief D# 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief D# note fine-tuning value (0-127).
   */
  uint8_t d_sharp;

  /**
   * @~Chinese
   * @brief E 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief E note fine-tuning value (0-127).
   */
  uint8_t e;

  /**
   * @~Chinese
   * @brief F 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief F note fine-tuning value (0-127).
   */
  uint8_t f;

  /**
   * @~Chinese
   * @brief F# 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief F# note fine-tuning value (0-127).
   */
  uint8_t f_sharp;

  /**
   * @~Chinese
   * @brief G 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief G note fine-tuning value (0-127).
   */
  uint8_t g;

  /**
   * @~Chinese
   * @brief G# 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief G# note fine-tuning value (0-127).
   */
  uint8_t g_sharp;

  /**
   * @~Chinese
   * @brief A 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief A note fine-tuning value (0-127).
   */
  uint8_t a;

  /**
   * @~Chinese
   * @brief A# 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief A# note fine-tuning value (0-127).
   */
  uint8_t a_sharp;

  /**
   * @~Chinese
   * @brief B 音符微调值（0-127）。
   */
  /**
   * @~English
   * @brief B note fine-tuning value (0-127).
   */
  uint8_t b;
};

/**
 * @~Chinese
 * @brief 调制轮参数结构体。
 */
/**
 * @~English
 * @brief Modulation wheel parameters.
 */
struct ModulationWheelParameter {
  /**
   * @~Chinese
   * @brief 高频音调音量强度 （0-127）。
   */
  /**
   * @~English
   * @brief High pitch volume intensity (0-127).
   */
  uint8_t high_pitch_volume;

  /**
   * @~Chinese
   * @brief 时变音色截止频率 （0-127）。
   */
  /**
   * @~English
   * @brief Time-varying timbre cutoff frequency (0-127).
   */
  uint8_t time_varying_timbre_cutoff;

  /**
   * @~Chinese
   * @brief 振幅调制深度 （0-127）。
   */
  /**
   * @~English
   * @brief Amplitude modulation depth (0-127).
   */
  uint8_t amplitude;

  /**
   * @~Chinese
   * @brief 低频振荡器速率 （0-127）。
   */
  /**
   * @~English
   * @brief Low-frequency oscillator rate (0-127).
   */
  uint8_t low_frequency_oscillator_rate;

  /**
   * @~Chinese
   * @brief 音高调制深度 （0-127）。
   */
  /**
   * @~English
   * @brief Pitch modulation depth (0-127).
   */
  uint8_t pitch_depth;

  /**
   * @~Chinese
   * @brief 时变滤波器深度 （0-127）。
   */
  /**
   * @~English
   * @brief Time-varying filter depth (0-127).
   */
  uint8_t time_varying_filter_depth;

  /**
   * @~Chinese
   * @brief 时变放大器深度 （0-127）。
   */
  /**
   * @~English
   * @brief Time-varying amplifier depth (0-127).
   */
  uint8_t time_varying_amplifier_depth;
};

/**
 * @~Chinese
 * @class Sam2695Midi
 * @brief Sam2695Midi是一个用于SAM2695 MIDI模块的驱动类，用于合成音乐。
 * @example drum_pattern_player.ino 鼓型播放器。
 * @example play_music.ino 使用BANK_0_ACOUSTIC_GUITAR_STEEL_STRING 音色播放音乐。
 */
/**
 * @~English
 * @class Sam2695Midi
 * @brief Sam2695Midi is a driver class for the SAM2695 MIDI module, used for synthesizing music.
 * @example drum_pattern_player.ino Drum pattern player.
 * @example play_music.ino Play music using the BANK_0_ACOUSTIC_GUITAR-STEEL_STRING tone.
 */

class Sam2695Midi {
 private:
  void Write(const uint8_t data);

  void Write(const uint8_t *buffer, const size_t size);

#if (SAM2695MIDI_PLATFORM == SAM2695MIDI_ARDUINO)
  SoftwareSerial software_serial;
#endif
#if (SAM2695MIDI_PLATFORM == SAM2695MIDI_ESP32)
  HardwareSerial hardware_serial{2};
#endif

 public:
  /**
   * @~Chinese
   * @brief 构造函数。
   * @param tx_pin SAM2695 MIDI信号引脚。
   */
  /**
   * @~English
   * @brief Constructor.
   * @param data tx_pin SAM2695 MIDI signal pin.
   */
  Sam2695Midi(uint8_t tx_pin);

  /**
   * @~Chinese
   * @brief 在指定通道（0-15）上发出给定的MIDI音符。
   * @param channel 指定通道（0-15）。
   * @param midi_note  MIDI 音符（0-127），请查阅参考sam2695_midi_note.h；其中，通道9的音符请查阅参考sam2695_midi_percussion_note.h。
   * @param note_velocity
   * 音符力度（0-127），控制音符的音量和音调亮度，在键盘上，这对应于按键的力度，0：无声（相当于noteOff），1-126：从弱到强，127：最大强度.
   */
  /**
   * @~English
   * @brief Generate the given MIDI note on the designated channel (0-15).
   * @param channel Designated channel (0-15).
   * @param midi_note MIDI notes (0-127), please refer to sam2695_midi_note.h for reference; Among them, for the notes of channel 9, please
   * refer to sam2695_midi_percussion_note.h.
   * @param note_velocity Note velocity (0-127), controls the volume and tone brightness of notes, on a keyboard this corresponds to how hard the key.
   * was struck0: silent (equivalent to noteOff), 1-126: from weak to strong, 127: maximum strength.
   */
  void NoteOn(const uint8_t channel, const uint8_t midi_note, const uint8_t note_velocity);

  /**
   * @~Chinese
   * @brief 关闭指定通道中的音符，该通道之前使用noteOn（）命令以给定的音高打开。
   * @param channel 指定通道（0-15）。
   * @param midi_note MIDI 音符（0-127），请查阅参考sam2695_midi_note.h；其中，通道9的音符请查阅参考sam2695_midi_percussion_note.h。
   */
  /**
   * @~English
   * @brief Close the note in the specified channel, which was previously opened at a given pitch using the noteOn() command.
   * @param channel Designated channel (0-15).
   * @param midi_note MIDI notes (0-127), please refer to sam2695_midi_note.h for reference; Among them, for the notes of channel 9, please
   * refer to sam2695_midi_percussion_note.h.
   */
  void NoteOff(const uint8_t channel, const uint8_t midi_note);

  /**
   * @~Chinese
   * @brief 更改指定通道的音色。其中通道9是一个专用的鼓组通道，通道9的音色和音符请查阅参考sam2695_midi_percussion_note.h。
   * @param channel 指定通道（0-15），其中通道9是专用鼓组通道。
   * @param bank 音色库选择，参数值为MIDI_bank_0或MIDI_bank_127。
   * @param timbre
   * 音色编号（0-127），请查阅参考sam2695_midi_timbre.h中的宏（例如BANK_0_GRAND_PIANO）;其中，通道9的音色请查阅参考sam2695_midi_percussion_note.h。
   */
  /**
   * @~English
   * @brief Change the tone of the specified channel. Among them, channel 9 is a dedicated drum channel, and the timbre and notes of channel 9 can be
   * found in reference sam2695_midi_percussion_note.h .
   * @param channel Designated channels (0-15), where channel 9 is a dedicated drum group channel.
   * @param bank Selection of timbre library, with parameter values of MIDI_BANK_0 or MIDI_BANK_127.
   * @param timbre Timbre number (0-127), please refer to the macro in reference sam2695_midi_timbre.h (e.g. BANK_0_GRAND_PIANO); Among them, for the
   * timbre of channel 9, please refer to sam2695_midi_percussion_note.h .
   */
  void SetChannelTimbre(const uint8_t channel, const uint8_t bank, const uint8_t timbre);

  /**
   * @~Chinese
   * @brief 向上或向下弯曲音高，默认摆动+/-1半音。
   * @param channel 指定通道（0-15）。
   * @param pitch_bend_value 弯音值（0-1023），0：最大向下弯曲，512：中心位置（无弯曲），1023：最大向上弯曲。
   */
  /**
   * @~English
   * @brief Bend the pitch upwards or downwards, with a default swing of+/-1 semitone.
   * @param channel Designated channel (0-15).
   * @param pitch_bend_value Pitch bend value (0-1023), 0: maximum downward bend, 512: center position (no bend), 1023: maximum upward bend.
   */
  void PitchBend(const uint8_t channel, uint16_t pitch_bend_value);

  /**
   * @~Chinese
   * @brief 设置弯音范围（灵敏度）。
   * @param channel 指定通道（0-15）。
   * @param pitch_bend_range_value 弯音范围值（半音数，0-127），典型值：1-24（半音），默认值：2（±2半音）。
   */
  /**
   * @~English
   * @brief Set the pitch bend range (sensitivity).
   * @param channel Designated channel (0-15).
   * @param pitch_bend_range_value Pitch bend range value (number of semitones, 0-127), typical value: 1-24 (semitones), default value: 2 (± 2
   * semitones).
   */
  void PitchBendRange(const uint8_t channel, const uint8_t pitch_bend_range_value);

  /**
   * @~Chinese
   * @brief MIDI系统重置发送MIDI系统重置命令（0xFF），将所有连接的MIDI设备重置为初始状态。
   */
  /**
   * @~English
   * @brief MIDI system reset sends MIDI system reset command (0xFF) to reset all connected MIDI devices to their initial state.
   */
  void MidiReset();

  /**
   * @~Chinese
   * @brief 在指定通道上为每个音符发送一个noteOff（）。
   * @param channel 指定通道（0-15）。
   */
  /**
   * @~English
   * @brief Send a noteOff() for each note on the specified channel.
   * @param channel Designated channel (0-15).
   */
  void ChannelAllNotesOff(const uint8_t channel);

  /**
   * @~Chinese
   * @brief 设置特定通道音量。
   * @param channel 指定通道（0-15）。
   * @param volume 音量级别（0-127），0：静音，127：最大音量。
   */
  /**
   * @~English
   * @brief Set specific channel volume.
   * @param channel Designated channel (0-15).
   * @param volume Volume level (0-127), 0: mute, 127: maximum volume.
   */
  void SetChannelVolume(const uint8_t channel, const uint8_t volume);

  /**
   * @~Chinese
   * @brief 设置所有通道的音量。
   * @param volume 音量级别（0-127），0：静音，127：最大音量。
   */
  /**
   * @~English
   * @brief Set the volume for all channels.
   * @param volume Volume level (0-127), 0: mute, 127: maximum volume.
   */
  void SetAllChannelVolume(const uint8_t volume);

  /**
   * @~Chinese
   * @brief 将混响效果应用于指定通道。
   * @param channel 指定通道（0-15）。
   * @param reverberation_type 混响类型，请参考sam2695_midi_chorus_reverberation.h中的宏（例如，REVERBERATION_ROOM_1）。
   * @param reverberation_volume 混响量（0-127），0：无混响，127：最大混响量。
   * @param delay_feedback 延迟反馈量（0-127），0：无反馈，127：最大反馈。
   */
  /**
   * @~English
   * @brief Apply reverberation effect to the specified channel.
   * @param channel Designated channel (0-15).
   * @param reverberation_type Reverberation type, refer to macros in sam2695_midi_chorus_reverberation.h (e.g., REVERBERATION_ROOM_1).
   * @param reverberation_volume Reverberation transmission amount (0-127), 0: no reverberation, 127: maximum reverberation amount.
   * @param delay_feedback Delayed feedback quantity (0-127), 0: no feedback, 127: maximum feedback.
   */
  void SetReverberation(const uint8_t channel, const uint8_t reverberation_type, const uint8_t reverberation_volume, const uint8_t delay_feedback);

  /**
   * @~Chinese
   * @brief 将合唱效果应用于指定通道。
   * @param channel 指定通道（0-15）。
   * @param chorus_effect_type 合唱效果类型，请参考sam2695_midi_chorus_reverberation.h中的宏（例如，CHORUS_1）。
   * @param chorus_effect_volume 合唱效果量（0-127），0：无，127：最大发送音量。
   * @param chorus_effect_feedback 效果反馈量（0-127，0表示未设置）。
   * @param chorus_delay_time 合唱延迟时间（0-127，0表示未设置），单位:ms。
   */
  /**
   * @~English
   * @brief Apply a chorus effect to a specified channel.
   * @param channel Designated channel (0-15).
   * @param chorus_effect_type chorus effect type, refer to macros in sam2695_midi_chorus_reverberation.h (e.g., CHORUS_1).
   * @param chorus_effect_volume chorus effect sending volume (0-127), 0: none, 127: maximum sending volume.
   * @param chorus_effect_feedback Effect feedback amount (0-127, 0 means not set).
   * @param chorus_delay_time chorus delay time (0-127, 0 indicates not set), unit: ms.
   */
  void SetChorus(const uint8_t channel,
                 const uint8_t chorus_effect_type,
                 const uint8_t chorus_effect_volume,
                 const uint8_t chorus_effect_feedback,
                 const uint8_t chorus_delay_time);

  /**
   * @~Chinese
   * @brief 设置声相位置。
   * @param channel 指定通道（0-15）。
   * @param pan_position_value 声相位置值（0-127），0：最左侧（完全左侧通道），64：中心位置（左右平衡通道），127：最右侧（完全右侧通道）。
   */
  /**
   * @~English
   * @brief Set the pan position.
   * @param channel Designated channel (0-15).
   * @param pan_position_value pan position value (0-127), 0: far left (completely left channel), 64: center position (balanced left and right
   * channel),127: far right (completely right channel).
   */
  void SetPanPosition(const uint8_t channel, const uint8_t pan_position_value);

  /**
   * @~Chinese
   * @brief 设置四段均衡器。
   * @param channel 指定通道（0-15）。
   * @param equalizer_parameter 均衡器参数结构体。
   */
  /**
   * @~English
   * @brief Set up a four segment equalizer.
   * @param channel Designated channel (0-15).
   * @param equalizer_parameter Equalizer parameters structure.
   */
  void SetEqualizer(const uint8_t channel, const EqualizerParameter equalizer_parameter);

  /**
   * @~Chinese
   * @brief 定调（粗调/细调）。
   * @param channel 指定通道（0-15）。
   * @param fine_tuning 微调值（0-127），影响音调的细微变化。
   * @param coarse_tuning 粗调值（0-127），影响音高的八度变化。
   */
  /**
   * @~English
   * @brief Set tone (coarse/fine).
   * @param channel Designated channel (0-15).
   * @param fine_tuning Fine tuning value (0-127), affecting subtle changes in pitch.
   * @param coarse_tuning Coarse tuning values (0-127), affect the octave variation of pitch.
   */
  void SetTuning(const uint8_t channel, const uint8_t fine_tuning, const uint8_t coarse_tuning);

  /**
   * @~Chinese
   * @brief 设置颤音参数。
   * @param channel 指定通道（0-15）。
   * @param vibrato_rate 振动频率（0-127）-控制振动的速度。
   * @param vibrato_depth 振动深度（0-127）-控制振动振幅。
   * @param vibrato_delay_modify 振动延迟修改（0-127）-控制振动开始前的延迟时间。
   */
  /**
   * @~English
   * @brief Set vibrato parameters.
   * @param channel Designated channel (0-15).
   * @param vibrato_rate Vibrato rate (0-127) - controls the speed of vibrato oscillation.
   * @param vibrato_depth Vibrato depth (0-127) - controls the amplitude of vibrato oscillation.
   * @param vibrato_delay_modify Vibrato Delay Modification (0-127) - Control the delay time before the start of vibrato.
   */
  void SetVibrato(const uint8_t channel, const uint8_t vibrato_rate, const uint8_t vibrato_depth, const uint8_t vibrato_delay_modify);

  /**
   * @~Chinese
   * @brief 设置时变滤波器（TVF）。
   * @param channel 指定通道（0-15）。
   * @param cutoff 截止频率值（0-127）-控制滤波器通过的频率范围。
   * @param resonance 共鸣强度/共鸣值（0-127）-在截止频率附近控制滤波器的增益。
   */
  /**
   * @~English
   * @brief Set Time Varying Filter (TVF).
   * @param channel Designated channel (0-15).
   * @param cutoff Cut off frequency value (0-127) - controls the frequency range that the filter passes through.
   * @param resonance Resonance peak/resonance value (0-127) - Control the gain of the filter near the cutoff frequency.
   */
  void SetTimeVaryingFilter(const uint8_t channel, const uint8_t cutoff, const uint8_t resonance);

  /**
   * @~Chinese
   * @brief 设置包络参数。
   * @param channel 指定通道（0-15）。
   * @param attack_time 开始时间（0-127）-控制声音从零开始达到最大振幅的时间，单位:ms。
   * @param attenuation_time 衰减时间（0-127）-控制声音从最大振幅衰减到保持水平的时间，单位:ms。
   * @param release_time 释放时间（0-127）-控制钞票释放后音量衰减到零所需的时间，单位:ms。
   */
  /**
   * @~English
   * @brief Set envelope parameters.
   * @param channel Designated channel (0-15).
   * @param attack_time Start time (0-127) - controls the time for the sound to reach its maximum amplitude from zero, unit: ms.
   * @param attenuation_time Attenuation time (0-127) - controls the time for sound to decay from maximum amplitude to maintain a level, unit: ms.
   * @param release_time Release time (0-127) - controls the time it takes for the volume to decay to zero after the note is released, unit: ms.
   */
  void SetEnvelope(const uint8_t channel, const uint8_t attack_time, const uint8_t attenuation_time, const uint8_t release_time);

  /**
   * @~Chinese
   * @brief 为指定的MIDI通道设置12个音阶调谐参数（每个半音独立的音高偏移）。
   * @param channel 指定通道（0-15）。
   * @param scale_tuning_parameter
   * 为指定通道设置12个音符调谐参数（C、C#、D、D#、E、F、F#、G、G#、A、A#、B），（每个半音的独立间距偏移）。
   */
  /**
   * @~English
   * @brief Set the 12 scale tuning parameters for the specified MIDI channel (independent pitch offset for each semitone).
   * @param channel Designated channel (0-15).
   * @param scale_tuning_parameter Set the 12 scale tuning parameters(C, C#, D, D#, E, F, F#, G, G#, A, A#, B) for the specified channel (independent
   * pitch offset for each semitone).
   */
  void SetScaleTuning(const uint8_t channel, const ScaleTuningParameter scale_tuning_parameter);

  /**
   * @~Chinese
   * @brief 设置调制轮参数，配置调制轮声音的多种控制效果。
   * @param channel 指定通道（0-15）。
   * @param modulation_wheel_parameter 调制轮参数结构体。
  /**
   * @~English
   * @brief Set modulation wheel parameters and configure multiple control effects for modulation wheel sound.
   * @param channel Designated channel (0-15).
   * @param modulation_wheel_parameter Modulation wheel parameters structure.
   */
  void SetModulationWheel(const uint8_t channel, const ModulationWheelParameter modulation_wheel_parameter);

  /**
   * @~Chinese
   * @brief 激活所有鼓通道，并将所有16个MIDI通道（0-15）设置为鼓通道。
   */
  /**
   * @~English
   * @brief Activate all drum channels and set all 16 MIDI channels (0-15) as drum channels.
   */
  void AllDrums();
};
#endif