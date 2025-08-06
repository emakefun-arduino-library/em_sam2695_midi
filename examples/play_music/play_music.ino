/**
 * @~Chinese
 * @file play_music.ino
 * @brief 示例：使用BANK_0_ACOUSTIC_GUITAR_STEEL_STRING 音色播放音乐。
 * @example play_music.ino
 * 使用BANK_0_ACOUSTIC_GUITAR_STEEL_STRING 音色播放音乐。
 */
/**
 * @~English
 * @file play_music.ino
 * @brief Example: Play music using the BANK_0_ACOUSTIC_GUITAR-STEEL_STRING tone.
 * @example play_music.ino
 * Play music using the BANK_0_ACOUSTIC_GUITAR-STEEL_STRING tone.
 */

#include "sam2695_midi.h"

#define SAM2695_MIDI_PIN 4

namespace {
constexpr uint8_t kChannel = 0;
constexpr uint8_t kChannelVolume = 110;
constexpr uint8_t kReverberationVolume = 80;
constexpr uint8_t kReverberationDelayFeedback = 0;
constexpr uint16_t kQuarterNoteDuration = 300;
constexpr uint16_t kEighthNoteDuration = 150;
constexpr uint16_t kDottedQuarterNoteDuration = 450;

Sam2695Midi g_synth(SAM2695_MIDI_PIN);

void PlayNote(const uint8_t midi_note, const uint16_t duration, const uint8_t note_velocity = 90) {
  g_synth.NoteOn(kChannel, midi_note, note_velocity);
  delay(duration);
  g_synth.NoteOff(kChannel, midi_note);
  delay(30);
}
}  // namespace

void setup() {
  g_synth.SetChannelTimbre(kChannel, MIDI_BANK_0, BANK_0_ACOUSTIC_GUITAR_STEEL_STRING);
  g_synth.SetChannelVolume(kChannel, kChannelVolume);
  g_synth.SetReverberation(kChannel, REVERBERATION_ROOM_2, kReverberationVolume, kReverberationDelayFeedback);
}

void loop() {
  PlayNote(MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_A_4, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_G_4, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_C_5, kDottedQuarterNoteDuration);
  PlayNote(MIDI_NOTE_B_4, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_A_4, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_G_4, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_D_5, kDottedQuarterNoteDuration);
  PlayNote(MIDI_NOTE_C_5, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_G_5, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_E_5, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_C_5, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_B_4, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_A_4, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(MIDI_NOTE_F_5, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_F_5, kEighthNoteDuration);
  PlayNote(MIDI_NOTE_E_5, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_C_5, kQuarterNoteDuration);
  PlayNote(MIDI_NOTE_D_5, kDottedQuarterNoteDuration);
  PlayNote(MIDI_NOTE_C_5, kDottedQuarterNoteDuration);

  delay(5000);
}