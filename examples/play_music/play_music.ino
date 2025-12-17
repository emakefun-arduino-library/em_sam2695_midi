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

#include "midi.h"

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
constexpr gpio_num_t kMidiPin = GPIO_NUM_17;
constexpr uart_port_t kUartPort = UART_NUM_2;  // Using UART2

HardwareSerial g_midi_serial(kUartPort);

#else
constexpr uint8_t kMidiPin = 4;

SoftwareSerial g_midi_serial(-1, kMidiPin);

#endif

em::Midi g_midi(g_midi_serial);

void PlayNote(const uint8_t midi_note, const uint16_t duration, const uint8_t note_velocity = 90) {
  g_midi.NoteOn(kChannel, midi_note, note_velocity);
  delay(duration);
  g_midi.NoteOff(kChannel, midi_note);
  delay(30);
}
}  // namespace

void setup() {
#if defined(ESP32)
  g_midi_serial.begin(31250, SERIAL_8N1, -1, kMidiPin);
#else
  g_midi_serial.begin(31250);
#endif

  g_midi.SetChannelTimbre(kChannel, EM_MIDI_TIMBRE_BANK_0, EM_MIDI_TIMBRE_BANK_0_ACOUSTIC_GUITAR_STEEL_STRING);
  g_midi.SetChannelVolume(kChannel, kChannelVolume);
  g_midi.SetReverberation(kChannel, EM_MIDI_REVERBERATION_ROOM_2, kReverberationVolume, kReverberationDelayFeedback);
}

void loop() {
  PlayNote(EM_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_A_4, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_G_4, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_C_5, kDottedQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_B_4, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(EM_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_A_4, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_G_4, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_D_5, kDottedQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_C_5, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(EM_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_G_4, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_G_5, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_E_5, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_C_5, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_B_4, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_A_4, kDottedQuarterNoteDuration);
  delay(kQuarterNoteDuration);

  PlayNote(EM_MIDI_NOTE_F_5, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_F_5, kEighthNoteDuration);
  PlayNote(EM_MIDI_NOTE_E_5, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_C_5, kQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_D_5, kDottedQuarterNoteDuration);
  PlayNote(EM_MIDI_NOTE_C_5, kDottedQuarterNoteDuration);

  delay(5000);
}