/**
 * @~Chinese
 * @file drum_pattern_player.ino
 * @brief 示例：鼓型播放器。
 * @example drum_pattern_player.ino
 * 鼓型播放器。
 */
/**
 * @~English
 * @file drum_pattern_player.ino
 * @brief Example: Drum pattern player.
 * @example drum_pattern_player.ino
 * Drum pattern player.
 */

#include "sam2695_midi.h"

namespace {
constexpr uint8_t kSam2695MidiPin = 4;

constexpr uint8_t kChannel = 9;
constexpr uint8_t kChannelVolume = 100;

constexpr uint8_t kReverberationVolume = 127;
constexpr uint8_t kReverberationDelayFeedback = 100;

constexpr uint8_t kTempoRandomRange = 5;
constexpr uint8_t kTempoRandomOffset = 2;

constexpr uint8_t kMinTempo = 40;
constexpr uint8_t kMaxTempo = 250;

constexpr uint8_t kTickSize = 15;

// Every array cell is the velocity of the note played
// Tick         1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
constexpr uint8_t kBassDrumTick[] = {127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0};
constexpr uint8_t kSnareDrumTick[] = {0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
constexpr uint8_t kHiHatOpenTick[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0};
constexpr uint8_t kHiHatCloseTick[] = {127, 40, 80, 40, 127, 40, 80, 40, 127, 40, 80, 40, 127, 0, 0};
constexpr uint8_t kHiHatPedalTick[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127};

static_assert(sizeof(kBassDrumTick) / sizeof(kBassDrumTick[0]) == kTickSize, "kBassDrumTick size must be 15");
static_assert(sizeof(kSnareDrumTick) / sizeof(kSnareDrumTick[0]) == kTickSize, "kSnareDrumTick size must be 15");
static_assert(sizeof(kHiHatOpenTick) / sizeof(kHiHatOpenTick[0]) == kTickSize, "kHiHatOpenTick size must be 15");
static_assert(sizeof(kHiHatCloseTick) / sizeof(kHiHatCloseTick[0]) == kTickSize, "kHiHatCloseTick size must be 15");
static_assert(sizeof(kHiHatPedalTick) / sizeof(kHiHatPedalTick[0]) == kTickSize, "kHiHatPedalTick size must be 15");

uint16_t g_tempo = 120;

em::Sam2695Midi g_sam2695_midi(kSam2695MidiPin);

void PlayDrumNote(const uint8_t midi_note, const uint8_t note_velocity) {
  if (note_velocity > 0) {
    g_sam2695_midi.NoteOn(kChannel, midi_note, note_velocity);
    g_sam2695_midi.NoteOff(kChannel, midi_note);
  }
}
}  // namespace

void setup() {
  g_sam2695_midi.MidiReset();
  g_sam2695_midi.SetChannelTimbre(kChannel, EM_SAM2695_MIDI_TIMBRE_BANK_0, EM_SAM2695_MIDI_PERCUSSION_TIMBRE_1);
  g_sam2695_midi.SetReverberation(kChannel, EM_SAM2695_MIDI_REVERBERATION_PLATE, kReverberationVolume, kReverberationDelayFeedback);
  g_sam2695_midi.SetChannelVolume(kChannel, kChannelVolume);
}

void loop() {
  for (uint8_t tick_no = 0; tick_no < kTickSize; tick_no++) {
    g_tempo = g_tempo + (random(kTempoRandomRange) - kTempoRandomOffset);
    g_tempo = constrain(g_tempo, kMinTempo, kMaxTempo);
    PlayDrumNote(EM_SAM2695_MIDI_PERCUSSION_TIMBRE_1_NOTE_C_2_KICK_DRUM_1, kBassDrumTick[tick_no]);
    PlayDrumNote(EM_SAM2695_MIDI_PERCUSSION_TIMBRE_1_NOTE_D_2_SNARE_DRUM_1, kSnareDrumTick[tick_no]);
    PlayDrumNote(EM_SAM2695_MIDI_PERCUSSION_TIMBRE_1_NOTE_F_SHARP_2_CLOSED_HI_HAT, kHiHatCloseTick[tick_no]);
    PlayDrumNote(EM_SAM2695_MIDI_PERCUSSION_TIMBRE_1_NOTE_A_SHARP_2_OPEN_HI_HAT, kHiHatOpenTick[tick_no]);
    PlayDrumNote(EM_SAM2695_MIDI_PERCUSSION_TIMBRE_1_NOTE_G_SHARP_2_PEDAL_HI_HAT, kHiHatPedalTick[tick_no]);
    delay(g_tempo);
  }
}
