#pragma once

#include "sam2695_midi.h"

#if (SAM2695MIDI_PLATFORM == SAM2695MIDI_ARDUINO)
Sam2695Midi::Sam2695Midi(uint8_t tx_pin) : software_serial(-1, tx_pin) {
  software_serial.begin(31250);
}
void Sam2695Midi::Write(const uint8_t data) {
  software_serial.write(data);
}
void Sam2695Midi::Write(const uint8_t *buffer, const size_t size) {
  if (buffer == nullptr || size == 0) {
    printf("Error: buffer pointer is nullptr or zero-size buffer.\n");
    return;
  }

  software_serial.write(buffer, size);
}

#endif

#if (SAM2695MIDI_PLATFORM == SAM2695MIDI_ESP32)
Sam2695Midi::Sam2695Midi(uint8_t tx_pin) {
  hardware_serial.begin(31250, SERIAL_8N1, -1, tx_pin);
}

void Sam2695Midi::Write(const uint8_t data) {
  hardware_serial.write(data);
}
void Sam2695Midi::Write(const uint8_t *buffer, const size_t size) {
  if (buffer == nullptr || size == 0) {
    printf("Error: buffer pointer is nullptr or zero-size buffer.\n");
    return;
  }

  hardware_serial.write(buffer, size);
}
#endif

void Sam2695Midi::NoteOn(const uint8_t channel, const uint8_t midi_note, const uint8_t note_velocity) {
  const uint8_t command[] = {0x90 | (channel & 0x0F), midi_note & 0x7F, note_velocity & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::NoteOff(const uint8_t channel, const uint8_t midi_note) {
  const uint8_t command[] = {0x80 | (channel & 0x0F), midi_note & 0x7F, 0x00};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetChannelTimbre(const uint8_t channel, const uint8_t bank, const uint8_t timbre) {
  if (bank != MIDI_BANK_0 && bank != MIDI_BANK_127) {
    printf("Error: bank parameter error, can only be MIDI_BANK_0 or MIDI_BANK_127.\n");
    return;
  }

  const uint8_t command_bank[] = {0xB0 | (channel & 0x0F), 0x00, bank};
  Write(command_bank, sizeof(command_bank) / sizeof(command_bank[0]));

  const uint8_t command_timbre[] = {0xC0 | (channel & 0x0F), timbre & 0x7F};
  Write(command_timbre, sizeof(command_timbre) / sizeof(command_timbre[0]));
}

void Sam2695Midi::PitchBend(const uint8_t channel, uint16_t pitch_bend_value) {
  if (pitch_bend_value > 1023) {
    pitch_bend_value = 1023;
  }
  pitch_bend_value = map(pitch_bend_value, 0, 1023, 0, 0x3FFF);
  const uint8_t command[] = {0xE0 | (channel & 0x0F), pitch_bend_value & 0x7F, pitch_bend_value >> 7};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::PitchBendRange(const uint8_t channel, const uint8_t pitch_bend_range_value) {
  const uint8_t command[] = {0xB0 | (channel & 0x0F), 0x65, 0x00, 0x64, 0x00, 0x06, pitch_bend_range_value};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::MidiReset() {
  Write(0xFF);
}

void Sam2695Midi::ChannelAllNotesOff(const uint8_t channel) {
  const uint8_t command[] = {0xB0 | (channel & 0x0F), 0x7B, 0x00};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetChannelVolume(const uint8_t channel, const uint8_t volume) {
  const uint8_t command[] = {0xB0 | (channel & 0x0F), 0x07, volume & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetAllChannelVolume(const uint8_t volume) {
  const uint8_t command[] = {0xF0, 0x7F, 0x7F, 0x04, 0x01, 0x00, volume & 0x7F, 0xF7};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetReverberation(const uint8_t channel,
                                   const uint8_t reverberation_type,
                                   const uint8_t reverberation_volume,
                                   const uint8_t delay_feedback) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x50, reverberation_type & 0x07};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[1] = 0x5B;
  command[2] = reverberation_volume & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  const uint8_t command_delay_feedback[] = {0xF0, 0x41, 0x00, 0x42, 0x12, 0x40, 0x01, 0x35, delay_feedback & 0x7F, 0x00, 0xF7};
  Write(command_delay_feedback, sizeof(command_delay_feedback) / sizeof(command_delay_feedback[0]));
}

void Sam2695Midi::SetChorus(const uint8_t channel,
                            const uint8_t chorus_effect_type,
                            const uint8_t chorus_effect_volume,
                            const uint8_t chorus_effect_feedback,
                            const uint8_t chorus_delay_time) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x51, chorus_effect_type & 0x07};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[1] = 0x5D;
  command[2] = chorus_effect_volume & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  const uint8_t command_feedback[] = {0xF0, 0x41, 0x00, 0x42, 0x12, 0x40, 0x01, 0x3B, chorus_effect_feedback & 0x7F, 0x00, 0xF7};
  Write(command_feedback, sizeof(command_feedback) / sizeof(command_feedback[0]));

  const uint8_t command_chorus_delay[] = {0xF0, 0x41, 0x00, 0x42, 0x12, 0x40, 0x01, 0x3C, chorus_delay_time & 0x7F, 0x00, 0xF7};
  Write(command_chorus_delay, sizeof(command_chorus_delay) / sizeof(command_chorus_delay[0]));
}

void Sam2695Midi::SetPanPosition(const uint8_t channel, const uint8_t pan_position_value) {
  const uint8_t command[] = {0xB0 | (channel & 0x0F), 0x0A, pan_position_value & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetEqualizer(const uint8_t channel, const EqualizerParameter equalizer_parameter) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x63, 0x37, 0x62, 0x00, 0x06, equalizer_parameter.low_frequency_gain & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x01;
  command[6] = equalizer_parameter.medium_low_frequency_gain & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x02;
  command[6] = equalizer_parameter.medium_high_frequency_gain & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x03;
  command[6] = equalizer_parameter.high_frequency_gain & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x08;
  command[6] = equalizer_parameter.low_frequency & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x09;
  command[6] = equalizer_parameter.medium_low_frequency & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x0A;
  command[6] = equalizer_parameter.medium_high_frequency & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x0B;
  command[6] = equalizer_parameter.high_frequency & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetTuning(const uint8_t channel, const uint8_t fine_tuning, const uint8_t coarse_tuning) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x65, 0x00, 0x64, 0x01, 0x06, fine_tuning & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x02;
  command[6] = coarse_tuning & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetVibrato(const uint8_t channel, const uint8_t vibrato_rate, const uint8_t vibrato_depth, const uint8_t vibrato_delay_modify) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x63, 0x01, 0x62, 0x08, 0x06, vibrato_rate & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x09;
  command[6] = vibrato_depth & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x0A;
  command[6] = vibrato_delay_modify & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetTimeVaryingFilter(const uint8_t channel, const uint8_t cutoff, const uint8_t resonance) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x63, 0x01, 0x62, 0x20, 0x06, cutoff & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x21;
  command[6] = resonance & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetEnvelope(const uint8_t channel, const uint8_t attack_time, const uint8_t attenuation_time, const uint8_t release_time) {
  uint8_t command[] = {0xB0 | (channel & 0x0F), 0x63, 0x01, 0x62, 0x63, 0x06, attack_time & 0x7F};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x64;
  command[6] = attenuation_time & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[4] = 0x66;
  command[6] = release_time & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetScaleTuning(const uint8_t channel, const ScaleTuningParameter scale_tuning_parameter) {
  const uint8_t command[] = {0xF0,
                             0x41,
                             0x00,
                             0x42,
                             0x12,
                             0x40,
                             0x10 | (channel & 0x0F),
                             0x40,
                             scale_tuning_parameter.c & 0x7F,
                             scale_tuning_parameter.c_sharp & 0x7F,
                             scale_tuning_parameter.d & 0x7F,
                             scale_tuning_parameter.d_sharp & 0x7F,
                             scale_tuning_parameter.e & 0x7F,
                             scale_tuning_parameter.f & 0x7F,
                             scale_tuning_parameter.f_sharp & 0x7F,
                             scale_tuning_parameter.g & 0x7F,
                             scale_tuning_parameter.g_sharp & 0x7F,
                             scale_tuning_parameter.a & 0x7F,
                             scale_tuning_parameter.a_sharp & 0x7F,
                             scale_tuning_parameter.b & 0x7F,
                             0xF7};

  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::SetModulationWheel(const uint8_t channel, const ModulationWheelParameter modulation_wheel_parameter) {
  uint8_t command[] = {
      0xF0, 0x41, 0x00, 0x42, 0x12, 0x40, 0x20 | (channel & 0x0F), 0x00, modulation_wheel_parameter.high_pitch_volume & 0x7F, 0x00, 0xF7};
  Write(command, sizeof(command) / sizeof(command[0]));

  command[8] = 0x01;
  command[9] = modulation_wheel_parameter.time_varying_timbre_cutoff & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[8] = 0x02;
  command[9] = modulation_wheel_parameter.amplitude & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[8] = 0x03;
  command[9] = modulation_wheel_parameter.low_frequency_oscillator_rate & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[8] = 0x04;
  command[9] = modulation_wheel_parameter.pitch_depth & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[8] = 0x05;
  command[9] = modulation_wheel_parameter.time_varying_filter_depth & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));

  command[8] = 0x06;
  command[9] = modulation_wheel_parameter.time_varying_amplifier_depth & 0x7F;
  Write(command, sizeof(command) / sizeof(command[0]));
}

void Sam2695Midi::AllDrums() {
  uint8_t command[] = {0xF0, 0x41, 0x00, 0x42, 0x12, 0x40, 0x00, 0x15, 0x01, 0x00, 0xF7};
  for (uint8_t i = 0; i <= 15; i++) {
    command[6] = 0x10 | (i & 0x0F);
    Write(command, sizeof(command) / sizeof(command[0]));
  }
}
