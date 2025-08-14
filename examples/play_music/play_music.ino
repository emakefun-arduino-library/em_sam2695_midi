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

#if defined(ESP32)
#include <HardwareSerial.h>
#else
#include <SoftwareSerial.h>
#endif

namespace {
constexpr uint8_t kChannel = 0;
constexpr uint8_t kChannelVolume = 110;

constexpr uint8_t kReverberationVolume = 80;
constexpr uint8_t kReverberationDelayFeedback = 0;

constexpr uint16_t kQuarterNoteDuration = 300;
constexpr uint16_t kEighthNoteDuration = 150;
constexpr uint16_t kDottedQuarterNoteDuration = 450;

#if defined(ESP32)
constexpr gpio_num_t kSam2695MidiPin = GPIO_NUM_17;
HardwareSerial midi_serial(2);

void InitMidiSerial() {
  midi_serial.begin(31250, SERIAL_8N1, -1, kSam2695MidiPin);
}
#else
constexpr uint8_t kSam2695MidiPin = 4;
SoftwareSerial midi_serial(-1, kSam2695MidiPin);

void InitMidiSerial() {
  midi_serial.begin(31250);
}
#endif

em::Sam2695Midi g_sam2695_midi(midi_serial);

void PlayNote(const uint8_t midi_note, const uint16_t duration, const uint8_t note_velocity = 90) {
  g_sam2695_midi.NoteOn(kChannel, midi_note, note_velocity);
  delay(duration);
  g_sam2695_midi.NoteOff(kChannel, midi_note);
  delay(30);
}
}  // namespace

void setup() {
  InitMidiSerial();

  g_sam2695_midi.SetChannelTimbre(kChannel, EM_SAM2695_MIDI_TIMBRE_BANK_0, EM_SAM2695_MIDI_TIMBRE_BANK_0_ACOUSTIC_GUITAR_STEEL_STRING);
  g_sam2695_midi.SetChannelVolume(kChannel, kChannelVolume);
  g_sam2695_midi.SetReverberation(kChannel, EM_SAM2695_MIDI_REVERBERATION_ROOM_2, kReverberationVolume, kReverberationDelayFeedback);
}

void loop() {
  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_A_4, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_C_5, kDottedQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_B_4, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_A_4, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_D_5, kDottedQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_C_5, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_G_5, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_E_5, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_C_5, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_B_4, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_A_4, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(EM_SAM2695_MIDI_NOTE_F_5, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_F_5, kEighthNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_E_5, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_C_5, kQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_D_5, kDottedQuarterNoteDuration);
  PlayNote(EM_SAM2695_MIDI_NOTE_C_5, kDottedQuarterNoteDuration);

  delay(5000);
}